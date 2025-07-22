// Write a C program to print day of week name using switch case.

void printWeekday(int n)
{
    switch(n)
    {
      case 1:
        printf("It's a Monday");
        break;
      case 2:
        printf("It's a Tuesday");
        break;
      case 3:
        printf("It's a Wednesday");
        break;
      case 4:
        printf("It's a Thursday");
        break;
      case 5:
        printf("It's a Friday");
        break;
      case 6:
        printf("It's a Saturday");
        break;
      case 7:
        printf("It's a Sunday");
        break;
      default:
        printf("Invalid day number entered");

    }
}
void main()
{
    int num;
    printf("Enter the day number to print day :");
    scanf("%d",&num);

    printWeekday(num);

}
