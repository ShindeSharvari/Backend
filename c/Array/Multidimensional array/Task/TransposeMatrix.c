// Transpose a matrix (convert rows to columns).

void transposeMatrix(int s1,int s2,int a[s1][s2])
{
    int newArray[s1][s2];
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            newArray[j][i]=a[i][j];
        }
    }
    displayMatrix(s1,s2,newArray);
}

void displayMatrix(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
           printf("%d ",a[i][j]);
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

    printf("Original Matrix \n");
    displayMatrix(row,column,arr);

    printf("Transpose matrix\n");
    transposeMatrix(row,column,arr);
}
