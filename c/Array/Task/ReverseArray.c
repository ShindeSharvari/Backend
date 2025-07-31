//Write a C program to find reverse of an array.

void printReverseArray(int a[],int size)
{
    printf("\nPrinting reversed array\n{");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ,",a[i]);
    }
    printf("}\n");
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

