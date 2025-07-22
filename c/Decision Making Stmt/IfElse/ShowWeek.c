//  write  a C program to input week number and print week day.

void printWeekday(int n)
{
    if(n==1)
    {
        printf("Monday");
    }
    else if(n==2)
    {
        printf("Tuesday");
    }
    else if(n==3)
    {
        printf("Wednesday");
    }
    else if(n==4)
    {
        printf("Thursday");
    }
    else if(n==5)
    {
        printf("Friday");
    }
    else if(n==6)
    {
        printf("Saturday");
    }
    else if(n==7)
    {
        printf("Sunday");
    }
    else{
        printf("Invalid Number for a weekday");
    }
}

void main()
{
    int num;
    printf("Enter the number to print weekday : ");
    scanf("%d",&num);

    printWeekday(num);
}
