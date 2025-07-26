/*

1 1 1 1 1
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
1 1 1 1 1

*/

void main()
{
  for (int i=1;i<=5;i++)
  {
      for(int j=1;j<=5;j++)
      {
          if(i==1 || i==5 || j==1 || j==5)
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
