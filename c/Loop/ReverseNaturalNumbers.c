//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop

void reverseNatural(int n)
{
    while(1<=n)
    {
        printf("\n%d",n);
        n--;
    }
}
void main()
{
    int n;
    printf("Enter the number from you want to print reverse natural numbers ");
    scanf("%d",&n);

    reverseNatural(n);

}
