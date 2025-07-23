// Write a C program to count the number of digits in any number.

int countDigits(int n)
{
    int ct=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        ct++;
    }
    return ct;
}

void main()
{
    int n;
    printf("Enter the number to count digits\n");
    scanf("%d",&n);

    printf("There are %d digits in %d",countDigits(n),n);

}
