
void checkEvenOdd(int n)
{
   (n%2==0) ? printf("% is an even number",n) : printf("%d is an odd number",n);
}

void checkDivisibility(int n)
{
    (n%5==0 && n%11==0) ? printf("%d is divisible by 5 and 11 ",n) : printf("%d is not divisible by 5 and 11 ",n);
}
void checkInteger(int n)
{
    (n>0) ? printf("%d is a positive number ",n): (n<0) ? printf("%d is a negative number ",n):  printf("Number is a zero ",n);
}

void checkOperations(int op,int n)
{
    switch(op)
    {
        case 1:
            checkEvenOdd(n);
            break;
        case 2:
            checkInteger(n);
            break;
        case 3:
            checkDivisibility(n);
            break;
        default:
            printf("Enter a  valid option");

    }
}
void main()
{
    int n,op;
    printf("Enter the number");
    scanf("%d",&n);

    printf("\nSelect option");
    printf("\n1.Check even or odd");
    printf("\n2.Check positive,negative,zero");
    printf("\n3.Check number divisible by 5 and 11 or not");
    scanf("%d",&op);

    checkOperations(op,n);
}
