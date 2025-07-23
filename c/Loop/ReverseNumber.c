//  Write a C program to enter any number and print its reverse.

int reverseNumber(int n)
{
    int rev=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        rev = rev*10+rem;
    }
    return rev;
}

void main()
{
    int n;
    printf("Enter the number to get reverse number\n");
    scanf("%d",&n);

    printf("Reverse of %d = %d",n,reverseNumber(n));

}
