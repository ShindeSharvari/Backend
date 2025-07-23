// Write a C program to calculate the product of digits of any number.

int productOfDigits(int n)
{
    int product=1;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        product*=rem;
    }
    return product;
}

void main()
{
    int n;
    printf("Enter the number to get product of digits\n");
    scanf("%d",&n);

    printf("Product of digits in %d = %d",n,productOfDigits(n));

}
