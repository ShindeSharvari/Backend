// Write a C program to put even and odd elements of array in two separate array.

void displayArray(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("}\n--------------------------------");
}
void  separateEvenOddArray(int a[],int size)
{
    int evenArray[size],oddArray[size],evenSize=0,oddSize=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            evenArray[evenSize]=a[i];
            evenSize++;
        }
        else
        {
            oddArray[oddSize]=a[i];
            oddSize++;
        }
    }
    printf("\nEven array = {");
    displayArray(evenArray,evenSize);
    printf("\nOdd array = {");
    displayArray(oddArray,oddSize);

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

    separateEvenOddArray(arr,size);
}
