#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool matchRegexA(char str[]){
    int len=strlen(str);
    bool one=false;
    int i=0;
    //(0+1)*
    while(i<len && (str[i]=='0' || str[i]=='1')){
      i++;  
    }
    //0*1*
    while(i<len){
        if(str[i]=='0'){
            if(one==true) return false;
            i++;
        }
        else if(str[i]=='1'){
            one=true;
            i++;
        }
        else return false;
    }
    if(i==len) return true;
    
}
int main(){
    char input[100];
    printf("Enter a string for regex (0+1)*+0*1*:");
    scanf("%s", input);
    if(matchRegexA(input)){
        printf("String matches the regular expression.\n");
    }else{
        printf("String does not match the regular expression.\n");
    }
    return 0;
}