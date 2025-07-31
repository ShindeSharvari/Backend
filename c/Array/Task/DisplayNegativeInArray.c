// Write a C program to print all negative elements in an array.

void displayNegative(int a[],int size)
{
    int found=0;   // flag for if negative element found or not
    printf("Negative number in array = {");
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)  // Checking for negative number
        {
          printf("%d, ",a[i]);
          found=1;
        }
    }
    if(found==0)
    {
        printf("No negative element present in array");
    }
    printf("}\n---------------------------------------");
}


void main()
{

    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter number ");
        scanf("%d",&arr[i]);
    }
   displayNegative(arr,10);
}
