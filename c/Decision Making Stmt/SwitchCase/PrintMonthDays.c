// Write a C program print total number of days in a month using switch case.

void printMonthDays(int n)
{
    switch(n)
    {
      case 1:
        printf("January month contains 31 days.");
        break;
      case 2:
        printf("February month contains 28 or 29  days.");
        break;
      case 3:
        printf("March month contains 31 days.");
        break;
      case 4:
        printf("April month contains 30 days.");
        break;
      case 5:
        printf("May month contains 31 days.");
        break;
      case 6:
        printf("June month contains 30 days.");
        break;
      case 7:
        printf("July month contains 31 days.");
        break;
      case 8:
        printf("August month contains 31 days.");
        break;
      case 9:
        printf("September month contains 30 days.");
        break;
      case 10:
        printf("October month contains 31 days.");
        break;
      case 11:
        printf("November month contains 30 days.");
        break;
      case 12:
        printf("December month contains 31 days.");
        break;
      default:
        printf("Invalid month number entered");

    }
}
void main()
{
    int num;
    printf("Enter the month number to check number of days in that month :");
    scanf("%d",&num);

    printMonthDays(num);

}

