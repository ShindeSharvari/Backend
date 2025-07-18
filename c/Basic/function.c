void FindSquare(int n)
{
    int square = n*n;
    printf("\n %d Square :- %d",n,square);
}

void FindCube(int n)
{
    int cube = n*n*n;
    printf("\n %d Cube :- %d",n,cube);
}

void main()
{
 int a,b,c;

 printf("Enter three values : ");
 scanf("%d%d%d",&a,&b,&c);
 FindSquare(a);
 FindSquare(b);
 FindSquare(c);

 FindCube(a);
 FindCube(b);
 FindCube(c);
}
