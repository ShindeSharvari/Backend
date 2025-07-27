/*

        *
      * *
    * * *
  * * * *
* * * * *


*/

void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=4-i+1;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
