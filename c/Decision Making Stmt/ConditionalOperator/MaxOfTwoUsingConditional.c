//Write a C program to find the maximum between two numbers using the conditional operator.

void findMax(int n1,int n2)
{
      int max = (n1>n2) ? n1:n2;
      printf("Maximum number between %d and %d is %d",n1,n2,max);
}

void main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    findMax(n1,n2);
}
