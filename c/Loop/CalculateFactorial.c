// Write a C program to enter any number and calculate its factorial.

int getFactorial(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}
void main()
{
    int n;
    printf("Enter the number to calculate factorial.\n");
    scanf("%d",&n);

    printf("Factorial of %d = %d",n,getFactorial(n));

}
