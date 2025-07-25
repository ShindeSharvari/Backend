/*

  1 0  1 0  1
  1 0  1 0  1
  1 0  1 0  1
  1 0  1 0  1
  1 0  1 0  1


*/
void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            (j==2 || j==4)? printf(" 0"):printf("  1");
        }
        printf("\n");
    }
}



