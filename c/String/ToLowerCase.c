// Write a C program to convert uppercase string to lowercase.


void upperToLowerCase(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    printf("Lower case string = %s ",str);
}
void main()
{
    char str[50];
    printf("Enter the string : ");
    gets(str);
    upperToLowerCase(str);
}
