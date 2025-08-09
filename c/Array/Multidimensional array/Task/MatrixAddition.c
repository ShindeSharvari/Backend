// Accept two matrices and perform matrix addition

void displayMatrix(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

void matrixAddition(int s1,int s2,int a[s1][s2],int b[s1][s2])
{
    int newArray[s1][s2];
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            newArray[i][j]=a[i][j]+ b[i][j];
        }
    }
    displayMatrix(s1,s2,newArray);
}

void getUserInput(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            printf("Enter element %d row %d column ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

}

void main()
{
    int row,column;

    printf("Enter the row number : ");
    scanf("%d",&row);

    printf("Enter the columns number : ");
    scanf("%d",&column);

    int arr1[row][column];
    int arr2[row][column];


    printf("\nEnter the elements for matrix 1\n");
    getUserInput(row,column,arr1);

    printf("\nEnter the elements for matrix 2\n");
    getUserInput(row,column,arr2);

    printf("Original Matrix 1 \n");
    displayMatrix(row,column,arr1);

    printf("Original Matrix 2 \n");
    displayMatrix(row,column,arr2);

    printf("\nAdditon of two matrix\n");
    matrixAddition(row,column,arr1,arr2);
}
