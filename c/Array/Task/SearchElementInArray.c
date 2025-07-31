//   Write a C program to search an element in an array.

void searchElementInArray(int a[],int size , int n)
{
    int found=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==n)
        {
            printf("\n%d found at index %d",n,i);
            found=1;
        }
    }
    if(found==0)
    {
            printf("%d is not found in array",n);
    }
}


void main()
{

    int size,element;
    printf("Enter the array size ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter number %d = ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you want to search ");
    scanf("%d",&element);
    searchElementInArray(arr,size,element);
}
