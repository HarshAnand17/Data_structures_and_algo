#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char lookahead;
char input[100];
int i = 0;

void S();
void A();
void B();
void C();
void match(char token);
void error();

int main() {
    printf("Enter an input string: ");
    scanf("%s", input);

    lookahead = input[0];
    S();

    if (lookahead == '\0')
        printf("Parsing successful!\n");
    else
        error();

    return 0;
}

void S() {
    A();
    B();
    C();
}

void A() {
    if (lookahead == 'a') {
        match('a');
        match('b');
        A();
    }
    // No need for else if here
}

void B() {
    if (lookahead == 'b')
        match('b');
    else
        error();
}

void C() {
    if (lookahead == 'c') {
        match('c');
        C();
    }
    // No need for else if here
}

void match(char token) {
    if (lookahead == token)
        lookahead = input[++i];
    else
        error();
}

void error() {
    printf("Error in parsing!\n");
    exit(1);
}