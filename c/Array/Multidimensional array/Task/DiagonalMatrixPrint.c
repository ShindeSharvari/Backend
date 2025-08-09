// Print only the diagonal elements of a square matrix.

void diagonalPrint(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            if(i==j || i+j==3)
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
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

    diagonalPrint(row,column,arr);
}

