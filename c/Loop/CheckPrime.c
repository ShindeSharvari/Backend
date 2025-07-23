//Write a C program to check whether a number is Prime number or not.

void checkPrime(int n)
{
    int ct=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          ct++;
        }
    }
    if(ct==2)
    {
        printf("%d is a prime number.",n);
    }
    else
    {
        printf("%d is not a prime number.",n);
    }
}
void main()
{
    int n;
    printf("Enter the number to check prime or not\n");
    scanf("%d",&n);

    checkPrime(n);
}
