// Write a C program to count total number of negative elements in an array.

int getNegativeCount(int a[],int size)
{
    int ct=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            ct++;
        }
    }
    return ct;
}


void main()
{

//getting size of array from user
    int size;
    printf("Enter the array size");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter number ");
        scanf("%d",&arr[i]);
    }
   printf("The count of negative numbers in array = %d",getNegativeCount(arr,size));
}
