// C program to implement Caesar Cipher

#include <stdio.h>
#include <string.h>

// to encrypt original text to cipher
void encrypt(char str[], int shift)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char c = str[i] - 'A';
            c += shift;
            c = c % 26;
            str[i] = c + 'A';
        }
        i++;
    }
}

// to decrypt cipher into original text
void decrypt(char str[], int shift)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            char c = str[i] - 'A';
            c -= shift;
            c = c % 26;
            str[i] = c + 'A';
        }
        i++;
    }
}

// Driver code
int main()
{
    char str[100];
    printf("*PLEASE ENTER MESSAGE IN CAPITAL LETTERS*\n\nEnter Message: ");
    gets(str);
    int key;
    printf("Enter Key: ");
    scanf("%d", &key);

    encrypt(str, key);
    printf("\nEncypted -> %s\n", str);

    decrypt(str, key);
    printf("Decrypted -> %s\n", str);

    return 0;
}
