
void columnSum(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<s1;i++)
    {
        int sum=0;
        for(int j=0;j<s2;j++)
        {
            sum+=a[j][i]; // switched
        }
        printf("\n%d column sum = %d",i+1,sum);
    }

}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    columnSum(3,3,arr);
    return 0;
}


