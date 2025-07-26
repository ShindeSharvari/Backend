/*

5
4 5
3 4 5
2 3 4 5
1 2 3 4 5

*/
void main()
{
  for (int i=1;i<=5;i++)
  {
      int k=5-i+1;
      for(int j=1;j<=i;j++)
      {
         printf("%d ",k);
         k++;
      }

      printf("\n");
  }
}

