void sortDescending(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
     for(int j=i+1;j<size;j++)
      {
          if(a[i]<a[j])
          {
              int temp =  a[i];
              a[i] = a[j];
              a[j]=temp;
          }
      }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d, ",a[i]);
    }

    printf("\n%d is the second largest element in given array ",a[1]);
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

    sortDescending(arr,size);
}
