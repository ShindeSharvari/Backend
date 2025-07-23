//Write a C program to print Fibonacci series up to n terms.

void printFiboSeries(int n)
{
    int n1=0,n2=1;
    //printf("%d %d ",n1,n2);   // for another method
    for(int i=1;i<=n;i++)
    {
        int n3=n1+n2;
        printf("%d ",n1);
        //printf("%d ",n3);      //for another method
        n1=n2;
        n2=n3;
    }
}
void main()
{
    int n ;
    printf("Enter the number up to you want fibonacci series.  ");
    scanf("%d",&n);

    printFiboSeries(n);
}
