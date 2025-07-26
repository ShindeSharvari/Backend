/*

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

*/

void main()
{
  for (int i=1;i<=5;i++)
  {
      int k=5-i+1;
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
         k--;
      }

      printf("\n");
  }
}




