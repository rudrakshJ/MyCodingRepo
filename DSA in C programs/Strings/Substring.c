#include <stdio.h>

int SUBSTRING(char *str, int start_pos, int length_of_subs, char* output)
{
    
    for (int i = start_pos - 1; i <= (start_pos - 1) + (length_of_subs - 1); i++)
    {
        output[i + 1 - start_pos] = str[i];
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