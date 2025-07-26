/*

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1


*/

void main()
{
  for (int i=1;i<=5;i++)
  {
      int k=5;
      for(int j=1;j<=i;j++)
      {
         printf("%d ",k);
         k--;
      }

      printf("\n");
  }
}
