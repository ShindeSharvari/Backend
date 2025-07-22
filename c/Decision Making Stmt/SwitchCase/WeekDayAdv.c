// Write a C program to print day of week name using switch case.

void monday(int n)
{
    printf("%d is for Monday",n);
}
void tuesday(int n)
{
    printf("%d is for Tuesday",n);
}
void wednesday(int n)
{
    printf("%d is for Wednesday",n);
}
void thursday(int n)
{
    printf("%d is for Thursday",n);
}
void friday(int n)
{
    printf("%d is for Friday",n);
}
void saturday(int n)
{
    printf("%d is for Saturday",n);
}
void sunday(int n)
{
    printf("%d is for Sunday",n);
}
void printWeekday(int n)
{
    switch(n)
    {
      case 1:
        monday(n);
        break;
      case 2:
        tuesday(n);
        break;
      case 3:
        wednesday(n);
        break;
      case 4:
        thursday(n);
        break;
      case 5:
        friday(n);
        break;
      case 6:
        saturday(n);
        break;
      case 7:
        sunday(n);
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
