/*

1
0 1
1 0 1
0 1 0 1
0 1 0 1 0

*/



void main()
{
    int k=1;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i%2==0 && j==1)
            {
                k=0;
            }
            else
            {
                k=1;
            }
                printf("%d ",k);
                k=(k==1) ? 0:1;
        }
        printf("\n");
    }
}



