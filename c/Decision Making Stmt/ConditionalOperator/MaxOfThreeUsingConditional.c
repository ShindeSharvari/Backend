//Write a C program to find the maximum between three numbers using the conditional operator.
void findMax(int n1,int n2,int n3)
{
      int max = (n1>n2) ? ((n1>n3) ? n1:n3) : ((n2>n3)? n2:n3);
      printf("Maximum number between %d ,%d , %d is %d",n1,n2,n3,max);
}

void main()
{
    int n1,n2,n3;
    printf("Enter two numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    findMax(n1,n2,n3);
}
