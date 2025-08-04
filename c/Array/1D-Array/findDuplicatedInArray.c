

void duplicateElements(int a[],int size)
{
    int k=0;
    int duplicate[size];
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
            if(ct>1)
            {
                duplicate[k]=a[i];
                k++;
            }
        }
    }

    for(int i=0;i<k;i++)
    {
        printf("%d, ",duplicate[i]);
    }
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
    duplicateElements(arr,size);
}

