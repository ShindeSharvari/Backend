//Write a C program to find reverse of an array in place.

void printReverseArray(int a[],int size)
{
    for(int i=0;i<size/2;i++)
    {
         int temp=a[i];
         a[i]=a[size-i-1];
         a[size-i-1]=temp;
    }
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
   printReverseArray(arr,size);
}


