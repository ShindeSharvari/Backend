/*

 *
 * *
 * * *
 * *
 *

*/


void main()
{
    for(int i=1;i<6;i++)
    {
        if(i<=3)
        {
           for(int j=1;j<=i;j++)
           {
              printf(" *");
           }
           printf("\n");
        }
        else
        {
           for(int k=1;k<=6-i;k++)
           {
              printf(" *");
           }
           printf("\n");
        }

    }
}

