// Write a C program to replace first occurrence of a character with another in a string.

void replaceFirstOccurrence(char a[] ,char character, char replace)
{
    printf("\nOriginal String : %s",a);
    int flag=0;
    for(int i=0;a[i]!='\0';i++)
    {
       if(a[i]==character)
       {
           flag=1;
           a[i]=replace;   // when found we replaced with user entered replacement character
           break;          // break becoz we just want first occurrence updated
       }
    }
    if(flag==0)
    {
        printf("\n Can't replace because %c not present in string",character);
    }
    else
    {
        printf("\nUpdated String : %s",a);
    }
}

int main()
{
    char str[100],character,replace;
    puts("\nEnter the string ");
    gets(str);
    printf("\nEnter the character which you want to replace : ");
    scanf(" %c",&character);

    printf("\nEnter the character to put : ");
    scanf(" %c",&replace);


    replaceFirstOccurrence(str,character,replace);
    return 0;

}
