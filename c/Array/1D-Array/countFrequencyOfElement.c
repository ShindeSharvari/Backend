// count frequnecy of given element


int frequencyOfElement(int a[],int size,int element)
{
    int ct=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==element)
        {
              ct++;
        }
    }
    return ct;
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
    printf("Enter the element you want to check frequency");
    scanf("%d",&element);

    printf("%d is repeated %d times in given array",element,frequencyOfElement(arr,size,element));
}
