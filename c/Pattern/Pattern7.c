/*

 * * * * *
 *       *
 * * * * *
 *       *
 * * * * *


*/
void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            (i==1 || i==3 || j==1 || j==5 || i==5)? printf(" *"):printf("  ");
        }
        printf("\n");
    }
}


