/*

1
0 1
0 1 0
1 0 1 0
1 0 1 0 1

*/

void main()
{
    int k=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
           printf("%d ",k);
           k=(k==1)? 0:1;
        }
        printf("\n");
    }
}


