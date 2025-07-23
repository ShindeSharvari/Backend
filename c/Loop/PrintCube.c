

int getCube(int n)
{
    return n*n*n;
}
int getSquare(int n)
{
    return n*n;
}
void main()
{
    for(int i=1;i<=10;i++)
    {
        printf("\nCube of %d = %d ------- Square of %d = %d",i,getCube(i),i,getSquare(i));
    }
}
