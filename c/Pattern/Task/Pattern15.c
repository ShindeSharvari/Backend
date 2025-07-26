/*

1 2 3 4 5
2 3 4 5 1
3 4 5 2 1
4 5 3 2 1
5 4 3 2 1

*/

void main()
{
    for  (int i = 1; i <= 5; i++)
    {
        int n1=i;
        for(int j = 1; j<=5-i+1; j++)
        {
           printf("%d ",n1);
           n1++;
        }
         int n2=i-1;
        for(int k=1;k<i;k++)
        {
            printf("%d ",n2);
            n2--;
        }
        printf("\n");
    }
}

