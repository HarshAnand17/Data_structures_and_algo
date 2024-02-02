#include <stdio.h>
#include <string.h>

int isValidString(char input[]) {
    int length = strlen(input);
    int i = 0;

    // Check for (ab*c+(def)+a*de)
    while (i < length) {
        // Check for ab*c
        if (input[i] == 'a') {
            i++;
            if(input[i] == 'b' || input[i] == 'c'){
                if(input[i] == 'b' && input[i+1] == 'b'){
                    while(i<length && input[i] == 'b'){
                        i++;
                    }
                }
                if(i<length && input[i] == 'b'&& input[i+1] == 'c'){
                    i+=2;
                }else if(input[i]== 'c' && i<length){
                    i++;
                }
			}else if(input[i] == 'a' || input[i] == 'd'){
				while (i < length && input[i] == 'a') {
                i++;
            }
            if (i < length && input[i] == 'd') {
                i++;
                if (i < length && input[i] == 'e') {
                    i++;
                } else {
                    return 0; // Invalid string
                }
            } else {
                return 0; // Invalid string
            }
			}
            
        }

        // Check for (def)*
        else if (input[i] == 'd' && input[i+1] == 'e' && input[i+2] == 'f') {
            if(input[i] == 'd' && input[i+1] == 'e' && input[i+2] == 'f'){
                i+=3;
            }
        }else if(input[i] == 'd' && input[i+1] == 'e'){
            i+=2;
        }

        // If none of the patterns match, it is an invalid string
        else {
            return 0;
        }
    }

    // If the string is fully processed, it is valid
    return 1;
}

int main() {
    char input[100];

    // Get the input string from the user
    printf("Enter a string (a, b, c, d, e, f): ");
    scanf("%s", input);

    // Check if the input string is valid
    if (isValidString(input)) {
        printf("String matched and it can be generated from regular Expression.\n");
    } else {
        printf("String not matched");
    }

    return 0;
}