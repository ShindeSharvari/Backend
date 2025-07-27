/*

1
1 1
1 0 1
1 0 0 1
1 1 1 1 1
*/

void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
          if(j==1 || i==5 || i==j)
          {
              printf("1 ");
          }
          else
          {
              printf("0 ");
          }
        }
        printf("\n");
    }
}



