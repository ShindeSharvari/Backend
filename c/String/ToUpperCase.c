

// Making string upperCase

void toUpperCase(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    printf("Uppercase of name = %s ",str);
}
void main()
{
    char name[50];
    printf("Enter your name: ");
    gets(name);

    toUpperCase(name);
}
