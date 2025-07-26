/*

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1

*/


void main()
{
  int k=5;
  for (int i=1;i<=5;i++)
  {
      for(int j=1;j<=i;j++)
      {
         printf("%d ",k);
      }
      k--;
      printf("\n");
  }
}


