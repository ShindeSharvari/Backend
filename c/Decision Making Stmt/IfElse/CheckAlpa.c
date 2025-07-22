//  Write a C program to check whether a character is in the alphabet or not.

void checkAlphabet(char c)
{
    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    {
        printf("%c is in the alphabet",c);
    }
    else
    {
        printf("%c is not in the alphabet",c);
    }
}

void main()
{
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);

    checkAlphabet(c);
}
