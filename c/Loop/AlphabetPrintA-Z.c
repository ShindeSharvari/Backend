//Write a C program to print all alphabets from a to z. - using while loop

void printAlphabet()
{
    char ch ='a';
    while(ch<='z')
    {
        printf("\n%c",ch);
        ch++;
    }
}

void main()
{
    printf("\nPrinting an alphabets from a-z");
    printAlphabet();
}
