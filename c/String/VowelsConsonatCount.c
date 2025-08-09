// Write a C program to find total number of alphabets, digits or special character in a string.

void upperToLowerCase(char a[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
}
void countVowelsConsonants(char str[])
{
    int vowelCount=0,consonantCount=0;
    upperToLowerCase(str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
           if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' )
           {
               vowelCount++;
           }
          else
          {
            consonantCount++;
          }
        }
    }

    printf("\nVowels count in entered string = %d",vowelCount);
    printf("\nConsonant count in entered string = %d",consonantCount);
}
int main()
{
    char str[50];
    printf("Enter the string");
    gets(str);

    countVowelsConsonants(str);

    return 0;
}
