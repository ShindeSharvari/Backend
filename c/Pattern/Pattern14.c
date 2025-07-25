

/*

 * * * * *
 * * * *
 * * *
 * *
 *

*/
/*void main(){
    for(int i=1;i<6;i++)
    {
        for(int j=6-i;j>0;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
}*/

void main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<6;j++)
        {
            (i+j<=6) ? printf(" *"):printf(" ");
        }
        printf("\n");
    }
}
