//Write a C program to check whether a number is Strong number or not.

int getFactorial(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}

void checkStrong(int n)
{
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        sum+=getFactorial(rem);
    }
    (n==sum)? printf("%d is a strong number",n):printf("%d is a not strong number",n);
}
void main()
{
    int n;
    printf("Enter the number to check strong number or not.\n");
    scanf("%d",&n);

    checkStrong(n);
}
