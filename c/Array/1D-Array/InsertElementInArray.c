// Write a C program to insert an element in an array.

void insertElement(int a[],int size,int element ,int pos)
{
    int newArr[size+1]; //Inserting one element so +1
    for(int i=0;i<size+1;i++)
    {
        if(i<pos)         // for previous as it just copy to new
        {
            newArr[i]=a[i];
        }
        else if(i==pos)   // when position match add element
        {
            newArr[i]=element;
        }
        else
        {
            newArr[i]=a[i-1];  // increment new array index but previous array element shifted to that updated after position match
        }

    }

    printf("\nPrinting updated array\n{");
    for(int i=0;i<size+1;i++)
    {
         printf("%d, ",newArr[i]);
    }
    printf("}\n");
}


void main()
{

    //getting size of array from user
    int size,element,pos;
    printf("Enter the array size ");
    scanf("%d",&size);

    int arr[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter number %d = ",i+1);
        scanf("%d",&arr[i]);
    }
   printf("Enter the element you want to insert ");
   scanf("%d",&element);
   printf("Enter the index you want to insert element ");
   scanf("%d",&pos);
   insertElement(arr,size,element,pos);

}
