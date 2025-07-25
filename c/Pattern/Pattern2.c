/*
11111
00000
11111
00000
11111

*/
void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            (i%2==0)?  printf("0"): printf("1");
        }
        printf("\n");
    }
}

