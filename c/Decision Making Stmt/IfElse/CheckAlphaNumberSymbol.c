//  Write a C program to input any character and check whether it is alphabet, digit or special character.

void checkChar(char c)
{
    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
    {
        printf("%c is the alphabet",c);
    }
    else if(c>='0' && c<='9')
    {
        printf("%c is digit",c);
    }
    else
    {
       printf("%c is special character ",c);
    }
}

void main()
{
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);

    checkChar(c);
}
