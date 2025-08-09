// Write a C program to concatenate two strings.


void concatStrings(char str1[],char str2[])
{
    int i;  // declared globally so we can acess it everywhere
    for(i=0;str1[i]!='\0';i++)
    {
       // we just going to the end of string
    }
    str1[i]=' ';   // for space in between two strings we added
    i++;
    for(int j=0;str2[j]!='\0';j++)
    {
        printf(" ");
        str1[i] = str2[j];
        i++;
    }
    str1[i]='\0';   // to end the string
    printf("\nConcatenated string = %s",str1);

}
void main()
{
    char str1[50],str2[50];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    concatStrings(str1,str2);
}
