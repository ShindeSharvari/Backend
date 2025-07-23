// Write a C program to find the sum of the first and last digit of any number.
void sumOfFirstLastDigits(int n)
{
    int last=n%10;
    int first;
    for(int j=n;j>0;j=j/10)
    {
        first=j%10;
    }
    printf("First digit = %d \nLast digit = %d \nSum of first and last digit = %d",first,last,first+last);
}

void main()
{
    int n;
    printf("Enter the number to get sum of first and last digit\n");
    scanf("%d",&n);

    sumOfFirstLastDigits(n);

}
