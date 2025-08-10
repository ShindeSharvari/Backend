// Write a C program to toggle case of each character of a string


void toggleCase(char a[])
{
    printf("\nOriginal string = %s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("\nToggled string = %s",a);
}
int main()
{
    char str[100];
    printf("\nEnter the string : ");
    gets(str);

    toggleCase(str);
    return 0;
}
