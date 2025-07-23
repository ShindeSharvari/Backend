//  Write a C program to find the first and last digit of any number.
void findFirstLastDigits(int n)
{
    int ct=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        ct++;
    }

    for(int j=1;j<=ct;j++)
    {
        int rem = n%10;
        n=n/10;
        if(j==ct)
        {
            printf("\nfirst digit = %d",rem);
        }
        if(j==1)
        {
            printf("\nlast digit = %d",rem);
        }
    }
}

void main()
{
    int n;
    printf("Enter the number to get first and last digit\n");
    scanf("%d",&n);

   findFirstLastDigits(n);

}
