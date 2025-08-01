// Write a C program to get unique array.

void uniqueArray(int a[],int size)
{
    int temp[size];
    for(int i=0;i<size;i++)
    {
        temp[i]=a[i];
    }
    int unique[size],uniqueSize=0;
    for(int i=0;i<size;i++)
    {
       for(int j=i+1;j<size;j++)
       {
           if(temp[i]==temp[j])
           {
               temp[j]=0;
           }
       }
    }
    for(int i=0;i<size;i++)
    {
        if(temp[i]!=0)
        {
            unique[uniqueSize]=temp[i];
            uniqueSize++;
        }
    }

    for(int i=0;i<uniqueSize;i++)
    {
        printf("%d, ",unique[i]);
    }
}

void main()
{
    //getting size of array from user
    int size;
    printf("Enter the array size ");
    scanf("%d",&size);

    int arr[size];
    //taking elements of array from user
    for(int i=0;i<size;i++)
    {
        printf("Enter element %d = ",i+1);
        scanf("%d",&arr[i]);
    }

    uniqueArray(arr,size);
}
