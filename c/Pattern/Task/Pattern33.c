/*

1 3 5 7 9
3 5 7 9
5 7 9
7 9
9

*/

void main()
{
  for (int i=1;i<=5;i++)
  {
      int k=i*2-1;
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
         k+=2;
      }

      printf("\n");
  }
}




