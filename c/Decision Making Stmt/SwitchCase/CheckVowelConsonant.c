// Write a C program to check whether an alphabet is vowel or consonant using switch case.


void checkVowelCons(char c)
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        switch(c)
        {
         case 'a':
         case 'e':
         case 'i':
         case '0':
         case 'u':
         case 'A':
         case 'E':
         case 'I':
         case 'O':
         case 'U':
             printf("%c is a vowel",c);
             break;

         default:
            printf("%c is a consonant.",c);

        }
    }
    else
    {
       printf("Please enter an alphabet.");
    }
}
void main()
{
    char ch;
    printf("Enter the alphabet to check vowel or consonant: ");
    scanf("%c",&ch);

    checkVowelCons(ch);


}
