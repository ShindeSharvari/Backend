// Write a C program to find reverse of a string.

void reverseString(char a[])
{
    char b[50];
    int len=0;       // for length calculation
    for(int i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];    // coping to b
        len++; // calculating length
    }
    printf("\n%d",len);
    printf("\n%s ",b);
    for(int i=0;i<len/2;i++)     //swapping in same array starting from start-first to last-first
    {
         char temp = b[i];
         b[i] = b[len-1-i];
         b[len-1-i]=temp;
    }
    printf("\nReversed string = %s ",b);
}
int main()
{
    char str[50];
    printf("Enter the string : ");
    //scanf("%s ",&str);
    gets(str);

    reverseString(str);
    return 0;
}
