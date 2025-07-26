/*

0 1 1 1 0
1 0 0 0 1
1 0 0 0 1
1 0 0 0 1
0 1 1 1 0


*/


void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(((i==1||i==5) && (j>=2 && j<5))||  //for top-bottom
               ((j==1 || j==5) && (i==2||i==3||i==4))) //for left-right
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
