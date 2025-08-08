// Write a C program to check whether a string is palindrome or not.

void checkPalindrome(char a[],char b[])
{
    int flag=1;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            flag=0;
            break;
        }
    }
    (flag==1)? printf("\nEntered string is palindrome."):printf("\nEntered string is not a palindrome string");
}
void reverseString(char a[])
{
    char b[50];
    int len=0;       // for length calculation
    int flag=1;
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];    // coping to b
        len++; // calculating length
    }
    b[i]='\0';   // at last
    printf("\n%d",len);
    printf("\n%s",b);
    for(int i=0;i<len/2;i++)     //swapping in same array starting from start-first to end-first
    {
         char temp = b[i];
         b[i] = b[len-1-i];
         b[len-1-i]=temp;

    }
    printf("\nReversed string = %s",b);
    checkPalindrome(a,b);
}
int main()
{
    char str[50];
    printf("Enter the string : ");
    //scanf("%s",&str);
    gets(str);

    reverseString(str);
    return 0;
}
