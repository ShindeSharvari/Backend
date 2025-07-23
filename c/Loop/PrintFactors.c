//  Write a C program to enter any number and print all factors of the number.

void printFactors(int n)
{
    printf("Factors of %d = ",n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          printf("%d ",i);
        }
    }
}
void main()
{
    int n;
    printf("Enter the number to print factors.\n");
    scanf("%d",&n);

    printFactors(n);
}
