/*

1 2 3 4 5
2 1 2 3 4
3 2 1 2 3
4 3 2 1 2
5 4 3 2 1

*/

void main()
{
    for  (int i = 1; i <= 5; i++)
    {
        int n1=i;
        for(int j = 1; j<=i; j++)
        {
           printf("%d ",n1);
           n1--;
        }
        n1+=2;
        for(int k=1;k<5-i+1;k++)
        {
            printf("%d ",n1);
            n1++;
        }
        printf("\n");
    }
}

