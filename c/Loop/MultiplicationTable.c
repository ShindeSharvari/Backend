//Write a C program to print a multiplication table of any number.


void printTable(int n)
{
    for(int mult=1;mult<=10;mult++)
    {
        printf("\n %d * %d = %d",n,mult,(mult*n));
    }
}


void main()
{
    int n;
    printf("Enter the number to print table\n");
    scanf("%d",&n);

    printTable(n);
}
