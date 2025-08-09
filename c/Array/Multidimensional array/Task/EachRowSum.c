// Calculate and print the sum of each row in a 2D array.

void sumOfRowElements(int s1,int s2,int a[s1][s2])
{

    for(int i=0;i<s1;i++)
    {
        int sum=0;
        for(int j=0;j<s2;j++)
        {
          sum+=a[i][j];
        }
        printf("\nRow %d sum of elements = %d",i+1,sum);
    }
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

    sumOfRowElements(row,column,arr);
}


