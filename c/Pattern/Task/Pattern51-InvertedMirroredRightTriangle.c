/*

* * * * *
  * * * *
    * * *
      * *
        *

*/

void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=5-i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
