

int getSquare(int n)
{
    return n*n;
}

void main()
{
    for(int i=1;i<=10;i++)
    {
        printf("\nSquare of %d = %d",i,getSquare(i));
    }
}
