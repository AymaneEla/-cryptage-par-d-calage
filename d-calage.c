#include <stdio.h>

char *encrypt(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i] += 3;
	i++;
    }
    
    return str;
}

char *decrypt(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] -= 3;
		i++;
	}
	return str;
}

int main()
{
    char string[100];
    printf("Entrer votre string : \n");
    scanf("%s", string);
    printf("======encryptage===========\n%s\n", encrypt(string));
    printf("======decryptage===========\n%s\n", decrypt(string));
    return 0; 
}
