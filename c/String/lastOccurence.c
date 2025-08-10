// Write a C program to find last occurrence of a character in a given string.

void getLastOccurrence(char str[],char character)
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
   if(index>=0)
   {
        printf(" %c character last occurrence in entered string is at place %d",character,index+1);  // +1 becoz user counts from 1
   }
   else
   {
       printf(" %c character not found in string",character);
   }

}

int main()
{
    char str[100],character;
    printf("Enter the string : ");
    gets(str);

    printf("Enter the character to find last occurrence : ");
    scanf(" %c",&character);


    getLastOccurrence(str,character);
    return 0;

}

