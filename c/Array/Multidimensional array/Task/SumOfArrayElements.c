//Find the sum of all elements in a 2D array

int sumOfArrayElements(int s1,int s2,int a[s1][s2])
{
    int sum=0;
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
          sum+=a[i][j];
        }
    }
    return sum;
}

void main()
{
    int row,column;

    printf("Enter the row number : ");
    scanf("%d",&row);

    printf("Enter the columns number : ");
    scanf("%d",&column);

    int arr[row][column];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("Enter element %d row %d column ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Sum of array elements = %d",sumOfArrayElements(row,column,arr));
}

