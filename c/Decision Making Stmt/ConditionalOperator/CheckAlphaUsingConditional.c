//Write a C program to check whether character is an alphabet or not using a conditional operator.

void checkAlpha(char c)
{
    (c>='a' && c<='z' || c>='A' && c<='Z') ? printf("%c is an alphabet",c):printf("%c is not an alphabet",c);
}
void main()
{
    char ch;
    printf("Enter the character to check it's an alphabet or not :");
    scanf(" %c",&ch);

    checkAlpha(ch);
}
