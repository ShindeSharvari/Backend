// Write a C program to find the sum of all odd numbers between 1 to n.

int getOddSum(int last)
{
    int sum=0;
    for(int i=1;i<=last;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    return sum;
}

void main()
{
    int last;
    printf("Enter the last digit of range from 1 to get odd sum.\n");
    scanf("%d",&last);

    printf("\nSum of all odd numbers between 1 to %d = %d",last,getOddSum(last));
}
