//Write a C program to find the maximum between two numbers using the switch case.

void findMax(int n1, int n2)
{
    switch(n1>n2)
    {
      case 1:
          printf("%d is a maximum number from %d and %d",n1,n1,n2);
          break;
      case 0:
          printf("%d is a maximum number from %d and %d",n2,n1,n2);
          break;
      default:
          printf("Can't compare");
    }
}
void main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    findMax(n1,n2);
}
