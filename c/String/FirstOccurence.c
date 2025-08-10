// Write a C program to find first occurrence of a character in a given string.

void getFirstOccurrence(char a[], char character)
{
    int flag=0;
    for(int i=0;a[i]!='\0';i++)
    {
       if(a[i]==character)
       {
           flag=1;
           printf("\n%c first occurrence in string is at %d place",character,i+1);
           break;
       }
    }
    if(flag==0)
    {
        printf("\n%c not present in string",character);
    }
}

int main()
{
    char str[100],character;
    puts("Enter the string ");
    gets(str);
    printf("Enter the character ");
    scanf(" %c",&character);

    getFirstOccurrence(str,character);
    return 0;

}
