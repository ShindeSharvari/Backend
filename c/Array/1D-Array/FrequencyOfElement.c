// Write a C program to count frequency of each element in an array.

void uniqueArray(int a[],int size)
{
    int temp[size];
    //copying to temp
    for(int i=0;i<size;i++)
    {
        temp[i]=a[i];
    }

    int unique[size],uniqueSize=0;
    for(int i=0;i<size;i++)
    {
       for(int j=i+1;j<size;j++)
       {
           if(temp[i]==temp[j])  // checking for duplicates
           {
               temp[j]=0;  //if duplicate found mark it as zero
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
    frequencyOfElements(unique,uniqueSize,a,size);
}


void frequencyOfElements(int unique[],int size1,int a[],int size2)
{

    printf("unique size = %d",size1);
    printf("size = %d",size2);
    for(int i=0;i<size1;i++)
    {
       int ct=0;
       for(int j=0;j<size2;j++)
       {
           if(unique[i]==a[j])  // checking for duplicates
           {
               ct++;  //if duplicate found mark it as zero
           }
       }
       printf("\n%d is repeated %d times ",unique[i],ct);
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
