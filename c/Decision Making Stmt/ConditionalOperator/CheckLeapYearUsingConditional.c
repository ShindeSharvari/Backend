// Write a C program to check whether year is leap year or not using a conditional operator.

void checkLeapYear(int year)
{
    (year%4==0 && (year%100!=0 || year%400==0)) ? printf("%d is a leap year",year):printf("%d is not a leap year ",year);
}

void main()
{
    int year;
    printf("Enter the year to check leap year or not : ");
    scanf("%d",&year);

    checkLeapYear(year);
}
