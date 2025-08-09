//Count the number of even and odd numbers in a 2D array.

void evenOddCount(int s1,int s2,int a[s1][s2])
{
    int evenCount=0,oddCount=0;
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            if(a[i][j]%2==0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }
    }

    printf("\nEven number count in given array = %d",evenCount);
    printf("\nOdd number count in given array = %d",oddCount);
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

    evenOddCount(row,column,arr);
}




