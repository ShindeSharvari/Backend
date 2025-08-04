

void displayArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("}\n");
}
void mergeArray(int a[],int size1,int b[],int size2)
{
    int c[size1+size2];
    for(int i=0;i<size1;i++)
    {
        c[i]=a[i];
    }

    for(int i=size1;i<size1+size2;i++)
    {
        c[i]=b[i-size1];
    }

    printf("Array 1 = {");
    displayArray(a,size1);
    printf("Array 2 = {");
    displayArray(b,size2);
    printf("Merged array = {");
    displayArray(c,(size1+size2));
}


void main()
{
    //getting size of array from user
    int size1,size2;
    printf("Enter the first array size ");
    scanf("%d",&size1);
    int arr1[size1];
    //taking elements of array from user
    for(int i=0;i<size1;i++)
    {
        printf("Enter element %d = ",i+1);
        scanf("%d",&arr1[i]);
    }

    //Second array
    printf("Enter the second array size ");
    scanf("%d",&size2);

    int arr2[size2];
    //taking elements of array from user
    for(int i=0;i<size2;i++)
    {
        printf("Enter element %d = ",i+1);
        scanf("%d",&arr2[i]);
    }

    mergeArray(arr1,size1,arr2,size2);
}
