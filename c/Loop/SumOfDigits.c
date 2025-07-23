// Write a C program to calculate the sum of digits of any number.

int sumOfDigits(int n)
{
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        sum+=rem;
    }
    return sum;
}

void main()
{
    int n;
    printf("Enter the number to get sum of digits\n");
    scanf("%d",&n);

    printf("Sum of digits in %d = %d",n,sumOfDigits(n));

}
