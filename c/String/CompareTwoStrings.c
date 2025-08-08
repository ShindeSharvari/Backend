//  Write a C program to compare two strings.

void upperToLowerCase(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
}
void compareStrings(char a[],char b[])
{
    upperToLowerCase(a);
    upperToLowerCase(b);
    //printf("%s ",a);
    //printf("%s ",b);
    int flag=1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
           flag=0;
           break;
        }
    }
    if(flag==1)
    {
        printf("Both strings are same");
    }
    else
    {
        printf("Both strings are different");
    }
}
void main()
{
    char str1[50],str2[50];
    printf("Enter the first string : ");
    gets(str1);

    printf("Enter the second string : ");
    gets(str2);

    compareStrings(str1,str2);
}
