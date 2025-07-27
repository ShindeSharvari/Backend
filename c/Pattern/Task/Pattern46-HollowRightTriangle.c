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
        for(int j=1;j<=i;j++)
        {
            if(j==1 || i==5 || i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
