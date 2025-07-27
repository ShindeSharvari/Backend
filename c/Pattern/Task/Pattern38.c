
/*

1       2       3
6       5       4
7       8       9
12      11      10


*/
void main()
{
    int n=1;
    for(int i=1;i<=4;i++)
    {
          if(i%2!=0)
          {
              for(int j=1;j<=3;j++)
              {
                 printf("%d\t",n);
                 n++;
              }
          }
          else
          {
              int k =n+2;
              for(int j=1;j<=3;j++)
              {
                 printf("%d\t",k);
                 k--;
              }
              n=k+4;

          }
        printf("\n");
    }
}




