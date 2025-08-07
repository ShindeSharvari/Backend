

// find length of string
int getLengthOfString(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';count++,i++);

    return count;
}
void main()
{
    char name[50];
    printf("Enter your name: ");
    gets(name);

    printf("The length of %s = %d",name,getLengthOfString(name));
}

