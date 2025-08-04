//Write a C program to find maximum and minimum element in an array.

//Function for getting maximum value
int findMax(int a[],int size)
{
    int max=a[0]; //assumed that first element is max to compare with other
    for(int i=0;i<size;i++)
    {
      max=(max>a[i])? max:a[i]; // comparing with assumed element and storing in max
    }
    return max;
}

//Function for getting minimum value
int findMin(int a[],int size)
{
    int min=a[0]; //assumed that first element is min to compare with other
    for(int i=0;i<size;i++)
    {
      min=(min<a[i])? min:a[i]; // comparing with assumed element and storing in min
    }
    return min;
}
void main()
{
    int size;
    printf("Enter the array size");
    scanf("%d",&size);
    int natural[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter number %d = ",i+1);
        scanf("%d",&natural[i]);
    }
    printf("\nMaximum element from array = %d ",findMax(natural,size));
    printf("\nMinimum element from array = %d ",findMin(natural,size));
}

