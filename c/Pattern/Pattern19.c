/*
      *
    * * *
  * * * * *
* * * * * * *

*/
void main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++) // for starting space
        {
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++) //here 2*i-1 becoz for i=1 i need 1 star which means 2*1-1 2-1 =1 i=2 2*2-1 4-1=3
        {
            printf("* ");
        }
        printf("\n");
    }
}
