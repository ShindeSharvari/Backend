void shiftElement(int a[],int size)
{
    for(int i=size-1;i>=0;i--)  // started from last for right shift
    {
        a[i]=a[i-1];   // shifting array
    }

    /*for(int i=0;i<size;i++)  // started from first for left shift
    {
        a[i]=a[i+1];   // shifting array
    }*/

    for(int i=0;i<size;i++)
    {
        printf("%d, ",a[i]);
    }
}

void main()
{

    int size;
    printf("Enter the size of an array ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter number ");
        scanf("%d",&arr[i]);
    }

    shiftElement(arr,size);
}
