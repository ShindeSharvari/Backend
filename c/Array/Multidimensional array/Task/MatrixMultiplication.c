// Accept two matrices and perform matrix multiplication.


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

void matrixMultiplication(int r1,int c1,int c2,int a[r1][c1],int b[c1][c2])
{
    int newArray[r1][c2];
    for(int i=0;i<r1;i++)    // this will run for row of resultant matrix
    {
        for(int j=0;j<c2;j++)  // for column of resultant matrix
        {
            newArray[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                newArray[i][j]+= a[i][k]*b[k][j];
            }
        }
    }
    displayMatrix(r1,c2,newArray);
}

// for taking user input elements in array
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
    int r1,c1,c2;

    printf("Enter the row and column number for matrix 1 : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the columns number for matrix 2 : "); // here we have taken only column number becoz for matrix multiplication first matrix row and second matrix column number should be same
    scanf("%d",&c2);

    int arr1[r1][c1];
    int arr2[c1][c2];


    printf("\nEnter the elements for matrix 1\n");
    getUserInput(r1,c1,arr1);

    printf("\nEnter the elements for matrix 2\n");
    getUserInput(c1,c2,arr2);

    printf("Original Matrix 1 \n");
    displayMatrix(r1,c1,arr1);

    printf("Original Matrix 2 \n");
    displayMatrix(c1,c2,arr2);

    printf("\nMultiplication of two matrix\n");
    matrixMultiplication(r1,c1,c2,arr1,arr2);
}
