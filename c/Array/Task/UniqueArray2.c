// Write a C program to get unique array.

void uniqueArray(int a[],int size)
{
    int temp[size];
    for(int i=0;i<size;i++)
    {
        temp[i]=a[i];    // copying original array to temp array
    }
    int ct=0;
    for(int i=0;i<size;i++)
    {
        if(temp[i]>0){
           for(int j=i+1;j<size;j++)
           {
               if(temp[i]==temp[j]) // checking for duplicate
               {
                   temp[j]=0;    // if duplicate found make it 0
                   ct++;         // increase duplicate count
               }
           }
        }
    }

    printf("\n %d = count",ct);
    printf("\n %d = size",size);
    printf("\n %d = unique[size-count]",(size-ct));
    int unique[size-ct];
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(temp[i]!=0)
        {
            unique[j]=temp[i];
            printf("\nj%d = %d \n",j,unique[j]);
            j++;
        }
    }

    printf("Unique Array = {");
    for(int i=0;i<j;i++)
    {
        printf("%d, ",unique[i]);
    }
    printf("}");
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
