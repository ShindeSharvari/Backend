// Write a C program to enter any number and check whether the number is palindrome or not.
void checkPalindrome(int n)
{
    int rev=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        rev = rev*10+rem;
    }
    if(n==rev)
    {
        printf("%d is a palindrome number",n);
    }
    else
    {
        printf("%d is not a palindrome number",n);
    }
}

void main()
{
    int n;
    printf("Enter the number to get reverse number\n");
    scanf("%d",&n);

    checkPalindrome(n);

}
