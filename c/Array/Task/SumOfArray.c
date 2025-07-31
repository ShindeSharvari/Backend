// Write a C program to find sum of all array elements.

int sumOfArray(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}


void main()
{

    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter number %d = ",i+1);
        scanf("%d",&arr[i]);
    }
   printf("Sum of array elements = %d",sumOfArray(arr,10));
}

