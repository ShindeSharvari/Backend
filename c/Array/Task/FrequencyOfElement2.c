void frequencyOfElements(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
            int ct=1;
            if(a[i]==0)
            {
               for(int j=i+1;j<size;j++)
               {
                 if(a[i]==a[j])
                  {
                     ct++;
                  }
               }
                printf("\n%d is repeated %d times ",a[i],ct);
                break;
            }
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]!=0)
        {
            int ct=1;
            for(int j=i+1;j<size;j++)
            {
                if(a[i]==a[j])
                {
                    a[j]=0;
                    ct++;
                }
            }
            printf("\n%d is repeated %d times ",a[i],ct);
        }
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
    frequencyOfElements(arr,size);
}

