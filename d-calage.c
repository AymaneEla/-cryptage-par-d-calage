#include <stdio.h>

char *encrypt(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] += 3;
    }
    
    return str;
}

int main()
{
    char string[100]
    printf("Entrer votre string : \n");
    scanf("%s", string);
    printf("%s\n", encrypt(string));
    return 0; 
}