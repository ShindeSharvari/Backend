/*

5 5 5 5 5
4 4 4 4
3 3 3
2 2
1


*/


void main()
{
  int k=5;
  for (int i=1;i<=5;i++)
  {
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
      }
      k--;
      printf("\n");
  }
}
