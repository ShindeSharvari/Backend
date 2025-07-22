//Write a C program to check whether a year is a leap year or not.

void checkLeapYear(int year)
{
    if(year%4==0 && (year%100!=0 || year%400==0))
    {
        printf("%d is a leap year",year);
    }
    else{
       printf("%d is not a leap year ",year);
    }
}

void main()
{
    int year;
    printf("Enter the year to check leap year or not : ");
    scanf("%d",&year);

    checkLeapYear(year);
}
