/*

 *
 * *
 *   *
 *     *
 * * * * *


*/

void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            (i==5 || j==1 || i==j) ? printf(" *"):printf("  ");
        }
        printf("\n");
    }
}
