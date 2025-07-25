/*

 * * * * *
 *       *
 *       *
 *       *
 * * * * *


*/

void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            (i==1 || j==1 || i==5 || j==5) ? printf(" *"):printf("  ");
        }
        printf("\n");
    }
}
