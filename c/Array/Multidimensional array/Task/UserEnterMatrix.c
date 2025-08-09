
// Accept elements for a 3x3 matrix from the user and display it.

void displayArray(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int arr[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter element %d row %d column ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    displayArray(3,3,arr);
}
