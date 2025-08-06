void diagonalSum(int s1,int s2,int a[s1][s2])
{
    int diagonalSum1=0,diagonalSum2=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)
            {
                diagonalSum1+=a[i][j];
            }
            if(i+j==2)
            {
                diagonalSum2+=a[i][j];
            }
        }
    }
        printf("\nThe sum of top-left to bottom-right diagonal is = %d",diagonalSum1);
        printf("\nThe sum of top-right to bottom-left diagonal is = %d",diagonalSum2);
}

int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

     diagonalSum(3,3,arr);
    return 0;
}
