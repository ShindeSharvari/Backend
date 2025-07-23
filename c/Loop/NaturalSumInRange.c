//Write a C program to find sum of all natural numbers between 1 to n.


int getNaturalSum(int end)
{
    int start=1,sum=0;
    while(start<=end)
    {
        sum+=start;
       // printf("\n%d",sum);
        start++;
    }
    return sum;
}

void main()
{
    int end;
    printf("Enter number till you want to get sum of natural numbers");
    scanf("%d",&end);

    printf("Sum of all natural numbers from 1 to %d = %d",end,getNaturalSum(end));
}
