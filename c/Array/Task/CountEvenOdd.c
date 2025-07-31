//Write a C program to count total number of even and odd elements in an array.


// Even number count in array
int  evenCount(int a[],int size)
{
    int ct=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            ct++;
        }
    }
    return ct;
}


// Odd number count in array
int  oddCount(int a[],int size)
{
    int ct=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            ct++;
        }
    }
    return ct;
}

//main function
void main()
{

    int size;
    printf("Enter the array size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter number %d =",i+1);
        scanf("%d",&arr[i]);
    }

    int count=evenCount(arr,size);
    printf("\nEven number count in array = %d",count);
    count=oddCount(arr,size);
    printf("\nOdd number count in array = %d",count);

}
