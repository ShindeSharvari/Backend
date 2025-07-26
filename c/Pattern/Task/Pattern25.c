/*

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

void main()
{
  for (int i=1;i<=5;i++)
  {
      int k=i;
      for(int j=1;j<=i;j++)
      {
         printf("%d ",k);
         k--;
      }
      printf("\n");
  }
}



