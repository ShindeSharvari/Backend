/*

1
0 1
0 1 0
1 0 1 0
1 0 1 0 1

*/

void main()
{
    int n=1;   //starts with 1
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",n);
            n=(n==1) ? 0:1;
        }
        printf("\n");
    }
}
