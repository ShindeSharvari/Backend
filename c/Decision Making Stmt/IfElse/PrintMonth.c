// Write a C program to input month number and print number of days in that month.

void printMonth(int n)
{
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
    {
        printf("This month contain 31 days");
    }
    else if( n==4 || n==6 || n==9 || n==11)
    {
        printf("This month contain 30 days");
    }
    else if(n==2)
    {
        printf("This month contain 28 or 29 days");
    }
    else
    {
        printf("Invalid number for a month");
    }
}

void main()
{
    int num;
    printf("Enter the month number to print days of month : ");
    scanf("%d",&num);

    printMonth(num);
}

