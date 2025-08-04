
void sortInAscending(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
      for(int j=i+1;j<size;j++)
      {
          if(a[i]>a[j])
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
}

void main()
{
    int arr[5]={9,4,1,8,5};
    sortInAscending(arr,5);
}
