#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PATTERN_LENGTH 100
#define MAX_LINE_LENGTH 200
int checkValidity(char input[],int length) {
    int i = 0;
    while (i < length && (input[i] == '0' || input[i] == '1')) {
        i++;
    }
    return i;
}
int isValidString(char input[], int length) {
    int i = 0;
    int count=0;
    while (i < length) {
        if (input[i] == 'a' && input[i+1]!='a') {
            i++;
            while (i < length && input[i] == 'b') {
                i++;
                count++;
            }
            if (i < length && input[i] == 'c') {
                i++;
                count+=2;
            }
         else if (input[i] == 'd') {
                i++;
                if (input[i] == 'e') {
                    i++;
                    count+=2;
    }
       } else {
                return 0; 
            }
        }
       else if(input[i]=='d' && input[i+1]=='e' && input[i+2]=='f'){
        while(i<length && input[i]=='d' && input[i+1]=='e' && input[i+2]=='f'){
        i+=3;
        count+=3;
}
  }
        else {
            int temp=i;
            while (i < length && input[i] == 'a') {
                i++;

            }
    temp=i-temp;
        if (input[i] == 'd') {
                i++;
                if (input[i] == 'e') {
                    i++;
                    count+=2;
                    count+=temp;
                } else {
                    return 0; 
                }

        } else {
                return 0; 
            }
    }
}
    return count;
}
int valid(char s[],int len){

int i=0;
while(i<len && (s[i]=='a'|| s[i]=='b')){
i++;
}
while(i<len && (s[i]=='c'|| s[i]=='d')){
i++;
}
return i;
}
int main() {
    char input_string[MAX_PATTERN_LENGTH];
    printf("Enter a string: ");
scanf("%s",input_string);
int length=strlen(input_string);
    FILE *file = fopen("regex_patterns.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    char checker[11]="(0+1)+0*1";
    char checker2[19]="(ab*c+(def)*+a*de)";
    char checker3[21]="((a+b)(c+d))+ab*c*d";

    char pattern[MAX_LINE_LENGTH];
    while (fgets(pattern, sizeof(pattern), file) != NULL) {
        pattern[strcspn(pattern, "\n")] = '\0'; 
        if (checkValidity(input_string,length)==length) {
        if (strstr(checker, pattern) != NULL) {

            printf("Matched regular expression: %s\n", pattern);
            fclose(file);
            return 0;
        }
        }
        else if((isValidString(input_string,length))==length){

        if (strstr(checker2, pattern) != NULL) {
            printf("Matched regular expression: %s\n", pattern);
            fclose(file);
            return 0;
        }
        }
        else if(valid(input_string,length)==length){

        if (strstr(checker3, pattern) != NULL) {
            printf("Matched regular expression: %s\n", pattern);
            fclose(file);
            return 0;
        }
        }
    }
    printf("None of the regular expressions matched the input string.\n");
    fclose(file);
    return 0;
}
