
// Accept a matrix and print the upper and lower triangular parts separately.


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


void lowerTriangle(int r1,int c1,int a[r1][c1])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (j <= i)
                printf("%d\t", a[i][j]);
            else
                printf("0\t");
        }
        printf("\n");
    }
}
void upperTriangle(int r1,int c1,int a[r1][c1])
{
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            if (j >= i)
                printf("%d\t", a[i][j]);
            else
                printf(" \t");
        }
        printf("\n");
    }
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
    int r1,c1;

    printf("Enter the row and column number for matrix 1 : ");
    scanf("%d%d",&r1,&c1);

    int arr[r1][c1];

    if(r1==c1)
    {
       printf("\nEnter the elements for matrix \n");
       getUserInput(r1,c1,arr);
    }
    else
    {
        printf("row and column number should be same for triangle priting");
    }


    printf("Original Matrix  \n");
    displayMatrix(r1,c1,arr);

    printf("Upper Triangular Matrix\n");
    upperTriangle(r1,c1,arr);

    printf("Lower Triangular Matrix\n");
    lowerTriangle(r1,c1,arr);
}

