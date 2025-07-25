/*

 1 1 1 1 1
 1 1 0 1 1
 1 0 1 0 1
 1 1 0 1 1
 1 1 1 1 1


*/
void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
          (i==1 || j==5 || i==5 || j==1 || i==j || i+j==6)? printf(" 1"):printf(" 0");;
        }
        printf("\n");
    }
}


