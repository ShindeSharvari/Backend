// Write a C program to print all natural numbers from 1 to n. - using while loop


void printNaturalNumber(int n)
{
    int x=1;
    while(x<=n)
    {
        printf("\n%d",x);
        x++;
    }
}
void main()
{
    int n;
    printf("Enter the number till you want to print natural numbers ");
    scanf("%d",&n);

    printNaturalNumber(n);

}
