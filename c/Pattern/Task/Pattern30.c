/*

1 2 3 4 5
2 3 4 5
3 4 5
4 5
5


*/

void main()
{
  for (int i=1;i<=5;i++)
  {
      int k=i;
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
         k++;
      }

      printf("\n");
  }
}


