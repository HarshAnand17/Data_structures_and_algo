#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool matchRegexC(char str[])
{
    int n = strlen(str);
    if (n == 0)
        return false;
    int i = 0;
    bool a = false, b = false, c = false, d = false;
    while (i < n)
    {
        //(a+b)*(c+d)*
        if (str[i] == 'a')
        {
            if (c == true || d == true)
                return false;
            a = true;
            i++;
        }
        else if (str[i] == 'b')
        {
            if (c == true || d == true)
                return false;
            b = true;
            i++;
        }
        else if (str[i] == 'c')
        {
            c = true;
            i++;
        }
        else if (str[i] == 'd')
        {
            d = true;
            i++;
        }
        else
            return false;
    }
    if (i == n)
        return true;

    // ab*c*d
    i = 0;
    a = false, b = false, c = false, d = false;
    while (i < n - 1)
    {
        if (i == 0)
        {
            if (str[i] != 'a')
                return false;
            i++;
        }
        else
        {
            if (str[i] == 'a')
            {
                return false;
            }
            else if (str[i] == 'b')
            {
                if (c == true || d == true)
                    return false;
                i++;
                b = true;
            }
            else if (str[i] == 'c')
            {
                i++;
                c = true;
            }
            else
                return false;
        }
    }
    if (i == n - 1 && str[i] == 'd')
        i++;
    if (i == n)
        return true;
    else
        return false;
}

int main()
{
    char input[100];
    printf("Enter a string for regex ((a+b)*(c+d)*)+ab*c*d:");
    scanf("%s", input);
    if (matchRegexC(input))
    {
        printf("it can be generated from regular expression.\n");
    }
    else
    {
        printf("String does not match the regular expression.\n");
    }
    return 0;
}