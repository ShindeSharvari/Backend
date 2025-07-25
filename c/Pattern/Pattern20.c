/*

    *
  * * *
* * * * *
  * * *
    *


*/

void main()
{
    for(int i=1;i<6;i++)
    {
        if(i<=3)
        {
           for(int j=1;j<=3-i;j++) // for starting space
           {
               printf("  ");
           }
           for(int k=1;k<=2*i-1;k++) //here 2*i-1 becoz for i=1 i need 1 star which means 2*1-1 2-1 =1 i=2 2*2-1 4-1=3
           {
               printf("* ");
           }
          printf("\n");
        }
        else
        {
           for(int j=1;j<=i-3;j++) // for starting space
           {
               printf("  ");
           }
           for(int k=1;k<=2*(6-i)-1;k++)     // we want to decrese it by 2
           {
               printf("* ");
           }
           printf("\n");

        }

    }
}
