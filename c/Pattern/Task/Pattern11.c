/*

1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9

*/



void main()
{
  for (int i=1;i<=5;i++)
  {
      int k=i;   // Iteration numuber = start number
      for(int j=1;j<=5;j++)
      {
        printf("%d ",k);
        k++;
      }
      printf("\n");
  }
}
