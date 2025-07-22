//Write a C program to check whether a number is even or odd using a conditional operator.

void findEvenOdd(int n)
{
    (n%2==0) ? printf("%d is even number ",n):printf("%d is odd number ",n);
}

void main()
{
    int n1;
    printf("Enter number t check even or odd : ");
    scanf("%d",&n1);

    findEvenOdd(n1);
}
