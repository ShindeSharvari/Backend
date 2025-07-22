// Write a C program to check whether a character is uppercase or lowercase alphabet.

void checkCase(char c)
{
    if(c >= 'a' && c <= 'z')
    {
        printf("%c is the lowercase alphabet",c);
    }
    else if(c>='A' && c<='Z')
    {
        printf("%c is the uppercase alphabet",c);
    }
    else
    {
       printf("%c is not an alphabet",c);
    }
}

void main()
{
    char c;
    printf("Enter the alphabet : ");
    scanf("%c",&c);

    checkCase(c);
}
