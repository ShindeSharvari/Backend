// Write a C program to check whether a number is even or odd using a switch case.

void checkEvenOdd(int n)
{
    switch(n%2==0)
    {
      case 1:
          printf("%d is an even number",n);
          break;

      case 0:
          printf("%d is an odd number",n);
          break;

      default:
          printf("Invalid input");

    }
}
void main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    checkEvenOdd(num);
}
