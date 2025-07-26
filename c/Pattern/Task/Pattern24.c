

/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


*/

void main()
{
  int k=1;
  for (int i=1;i<=5;i++)
  {
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
         k++;
      }
      k=1;
      printf("\n");
  }
}




