// Strong number = sum of factorial of each number = number

int checkStrongNumber(int n)
{
    int sum=0,last;
    for(int i=n;i>0;i/=10)
    {
        last=i%10;
        sum=sum+findFactorial(last);
    }
    return sum;
}
int findFactorial(int last)
{
    int fact=1;
    for(int i=last;i>0;i--)
    {
        fact*=i;
    }
    printf("\n%d",fact);
    return fact;
}
void main()
{
    int n;
    printf("Enter the number to check its strong number or not : ");
    scanf("%d",&n);

   // printf("%d",checkStrongNumber(n));
    (checkStrongNumber(n)== n)? printf("\n%d is a strong number.",n):printf("\n%d is not a strong number.",n);
}
