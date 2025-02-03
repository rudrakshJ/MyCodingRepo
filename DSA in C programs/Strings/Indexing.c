#include <stdio.h>

int LENGTH(char *str)
{
    int counter = 1;
    while (*(str) != '/0')
    {
        counter++;
        str++;
    }
    return counter+1;
}

int INDEX(char *str, char *check)
{
    
    for (int i = 0; i < LENGTH(str); i++)
    {
        char *temp =check;
        for (int j = 0; j < LENGTH(check); i++)
        {
            /* code */
        }
            
        
        str++;
    }
}

int main()
{
    char st[40] = "Hello World";
    char out[30];
    SUBSTRING(st, 2, 4, out);
    printf("The substring is : %s", out);
    return 0;
}