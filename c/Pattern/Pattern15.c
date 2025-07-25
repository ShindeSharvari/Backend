/*
 1 2 3 4 5
 1 2 3 5 5
 1 2 5 5 5
 1 5 5 5 5
 5 5 5 5 5

*/

void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            (i+j>=6)? printf(" 5"):printf(" %d",j);
        }
        printf("\n");
    }
}
