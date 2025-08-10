// Write a C program to replace last occurrence of a character with another in a string.


void changeLastOccurrence(char str[],char character, char replace)
{
    int index=-1;  // for getting the occurrence index
                   // I taken -1 as index because sometimes my character can be at 0 index and if i take 0 then if else may fails for that
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]== character)
        {
            index=i;   // whenever match found index will updated with i value and when loop stops we will get last occurrence
        }
    }
   printf("\nOriginal string = %s",str);
   if(index>=0)
   {
        str[index]=replace;
        printf("\nUpdated string = %s",str);
   }
   else
   {
       printf("\n%c character not found in string",character);
   }

}

int main()
{
    char str[100],character,replace;
    printf("Enter the string : ");
    gets(str);

    printf("\nEnter the character to find last occurrence : ");
    scanf(" %c",&character);

    printf("\nEnter the character to put : ");
    scanf(" %c",&replace);

    changeLastOccurrence(str,character,replace);
    return 0;

}


