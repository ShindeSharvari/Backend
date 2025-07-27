/*

5 6 7 8 9
4 5 6 7
3 4 5
2 3
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
         k++;
      }

      printf("\n");
  }
}



