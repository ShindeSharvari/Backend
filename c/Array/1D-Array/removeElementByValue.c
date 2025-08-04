// remove element from an array


void removeElement(int a[],int size,int element)
{
    int b[size-1];
    int j=0,flag=0;  // flag for checking element present or not
    for(int i=0;i<size;i++)
    {
        if(a[i]==element)
        {
            i++;
            flag=1;  // if element found make flag=1;
        }
        b[j]=a[i];
        j++;
    }
    if(flag==1)  // if element found then only do this
    {
        printf("\n%d removed sucessfully from an array",element);
        printf("\nUpdated array = {");
        for(int i=0;i<j;i++)
        {
          printf("%d, ",b[i]);
        }
        printf("}");
    }
    else{
        printf("%d is not present in array can't remove",element);
    }
}


void main()
{

    int size,element;
    printf("Enter the size of an array ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter number ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to remove from array");
    scanf("%d",&element);

    removeElement(arr,size,element);

}
