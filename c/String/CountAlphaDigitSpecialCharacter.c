// Write a C program to find total number of alphabets, digits or special character in a string.


void countAlphaDigiSpecial(char str[])
{
    int digitCount=0,alphCount=0,specialCharacterCount=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
        {
            alphCount++;
        }
        else if((str[i]>='0' && str[i]<='9'))
        {
            digitCount++;
        }
        else
        {
            specialCharacterCount++;
        }
    }

    printf("\nAlphabets count in entered string = %d",alphCount);
    printf("\nDigits count in entered string = %d",digitCount);
    printf("\nSpecial Characters count in entered string = %d",specialCharacterCount);
}
int main()
{
    char str[50];
    puts("Enter the string");
    gets(str);

    countAlphaDigiSpecial(str);

    return 0;
}
