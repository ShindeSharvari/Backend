/*

1 1 1 1 1
2 2 2 2
3 3 3
4 4
5


*/

void main()
{
  int k=1;
  for (int i=1;i<=5;i++)
  {
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
      }
      k++;
      printf("\n");
  }
}

