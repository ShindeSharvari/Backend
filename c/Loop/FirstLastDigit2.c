//  Write a C program to find the first and last digit of any number.

void findFirstLastDigits(int n)
{
    int last=n%10;
    int first;
    for(int j=n;j>0;j=j/10)
    {
        first=j%10;
    }
    printf("First digit = %d \nLast digit = %d",first,last);
}

void main()
{
    int n;
    printf("Enter the number to get first and last digit\n");
    scanf("%d",&n);

    findFirstLastDigits(n);

}
