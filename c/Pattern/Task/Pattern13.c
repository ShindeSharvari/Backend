/*

5 5 5 5 5
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2
5 4 3 2 1

*/

void main()
{
    for  (int i = 1; i <= 5; i++)
    {
        int n=6;
        for (int j = 1; j <= 5; j++)
        {
           if(i>=j)   // here when j<=i we need to decrease till that and other all remain as last
           {
               n--;
           }
           printf("%d ",n);
        }
        printf("\n");
    }
}
