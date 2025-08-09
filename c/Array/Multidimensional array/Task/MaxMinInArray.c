// Find the maximum and minimum element in a 2D array.


void maxMinInArray(int s1,int s2,int a[s1][s2])
{

    int max=a[0][0],min=a[0][0];
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
    printf("\nMaximum element = %d",max);
    printf("\nMinimun element = %d",min);
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

    maxMinInArray(row,column,arr);
}



