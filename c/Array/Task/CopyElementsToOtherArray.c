//Write a C program to copy all elements from an array to another array.

void copyArray(int a[],int size)
{
    int copy[size];
    for(int i=0;i<size;i++)
    {
       copy[i]=a[i];
    }

    printf("\nPrinting copied array\n{");
    for(int i=0;i<size;i++)
    {
        printf("%d ,",copy[i]);
    }
    printf("}\n");
}


void main()
{

    //getting size of array from user
    int size;
    printf("Enter the array size ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter number %d = ",i+1);
        scanf("%d",&arr[i]);
    }
   copyArray(arr,size);
}
