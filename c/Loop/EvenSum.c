//Write a C program to find sum of all even numbers between 1 to n.

int getEvenSum(int end)
{
    int start=1,sum=0;
    while(start<=end)
    {
        if(start%2==0)
        {
          sum+=start;
          // printf("\n%d",sum);
        }
        start++;
    }
    return sum;
}

void main()
{
    int end;
    printf("Enter number till you want to get sum of even numbers");
    scanf("%d",&end);

    printf("Sum of all even numbers from 1 to %d = %d",end,getEvenSum(end));
}


