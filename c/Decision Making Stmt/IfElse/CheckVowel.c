// Write a C program to input any alphabet and check whether it is vowel or consonant.

void checkVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("%c is a vowel",c);
    }
    else
    {
        printf("%c is a consonant",c);
    }
}

void main()
{
    char c;
    printf("Enter the alphabet : ");
    scanf("%c",&c);

    checkVowel(c);
}

