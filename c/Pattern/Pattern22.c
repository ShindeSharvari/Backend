/*

1 0 1 0 1
0 1 0 1 0
1 0 1 0 1
0 1 0 1 0
1 0 1 0 1

*/

void main()
{
    int n=1;   //starts with 1
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            printf("%d ",n);
            n=(n==1) ? 0:1;         //here we starts with 1 and every time we swap 1 to 0 and 0 to 1 to get alternative
        }
        printf("\n");
    }
}
