//Write a C program to convert Binary to Decimal number system.


int getPower(int base,int raise)
{
    int pow=1;
    for(int i=1;i<=raise;i++)
    {
        pow=pow*base;
    }
    return pow;
}
int binaryToDecimal(int n)
{
    int decimal=0,num=0,rem=0;
    for(int i=0;n>0;i++)
    {
        rem=n%10;
        num=rem*(getPower(2,i));
        decimal+=num;
        n=n/10;
    }
    return decimal;
}
void main()
{
    int n;
    printf("Enter the binary number.\n");
    scanf("%d",&n);

    printf("%d to decimal = %d ",n,binaryToDecimal(n));
}
