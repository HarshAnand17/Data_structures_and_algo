
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXPRESSIONS 100
#define MAX_EXPRESSION_LENGTH 100
#define MAX_STRING_LENGTH 100

int match(char *regexp, char *text);
int matchhere(char *regexp, char *text);
int matchstar(int c, char *regexp, char *text);

int main() {
    char filename[MAX_STRING_LENGTH];
    char expressions[MAX_EXPRESSIONS][MAX_EXPRESSION_LENGTH];
    char input[MAX_STRING_LENGTH];
    FILE *file;
    int numExpressions = 0;
    int i;

    // Accept the filename containing regular expressions from the user
    printf("Enter the filename containing regular expressions: ");
    fgets(filename, MAX_STRING_LENGTH, stdin);
    filename[strcspn(filename, "\n")] = '\0'; // Remove newline character

    // Open the file containing regular expressions
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Read regular expressions from file
    while (fgets(expressions[numExpressions], MAX_EXPRESSION_LENGTH, file)) {
        // Remove newline character from the end of each expression
        expressions[numExpressions][strcspn(expressions[numExpressions], "\n")] = '\0';
        numExpressions++;
    }

    // Close the file
    fclose(file);

    // Accept string input from the user
    printf("Enter a string: ");
    fgets(input, MAX_STRING_LENGTH, stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character

    // Check if any expression matches the input string
    int matched = 0;
    for (i = 0; i < numExpressions; i++) {
        if (match(expressions[i], input)) {
            printf("String matched with expression: %s\n", expressions[i]);
            matched = 1;
        }
    }

    if (!matched) {
        printf("None of the expressions matched the string.\n");
    }

    return 0;
}

// match: search for regexp anywhere in text
int match(char *regexp, char *text) {
    if (regexp[0] == '^')
        return matchhere(regexp + 1, text);
    do {    /* must look even if string is empty */
        if (matchhere(regexp, text))
            return 1;
    } while (*text++ != '\0');
    return 0;
}

// matchhere: search for regexp at beginning of text
int matchhere(char *regexp, char *text) {
    if (regexp[0] == '\0')
        return 1;
    if (regexp[1] == '*')
        return matchstar(regexp[0], regexp + 2, text);
    if (regexp[0] == '$' && regexp[1] == '\0')
        return *text == '\0';
    if (*text != '\0' && (regexp[0] == '.' || regexp[0] == *text))
        return matchhere(regexp + 1, text + 1);
    return 0;
}

// matchstar: search for c*regexp at beginning of text
int matchstar(int c, char *regexp, char *text) {
    do {    /* a * matches zero or more instances */
        if (matchhere(regexp, text))
            return 1;
    } while (*text != '\0' && (*text++ == c || c == '.'));
    return 0;
}