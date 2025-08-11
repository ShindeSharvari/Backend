/*
Write a program that compares two given dates. To store date
use structure say date that contains three members namely
date, month and year. If the dates are equal then display
message as "Equal" otherwise "Unequal".

*/

struct Date{
    int date;
    int month;
    int year;
};

void compareDates(struct Date myDate1,struct Date myDate2)
{
    if(myDate1.date==myDate2.date && myDate1.month==myDate2.month && myDate1.year==myDate2.year)
    {
        printf("Same Date");
    }
    else
    {
        printf("Not equal dates");
    }
}

int main()
{
    //struct Date myDate1={20,2,2001};
    //struct Date myDate2={20,2,2001};

    struct Date myDate1;
    struct Date myDate2;

    printf("\nEnter the first date in format date month year  ");
    scanf("%d%d%d",&myDate1.date,&myDate1.month,&myDate1.year);

    printf("\nEnter the second date in format date month year  ");
    scanf("%d%d%d",&myDate2.date,&myDate2.month,&myDate2.year);

    compareDates(myDate1,myDate2);
    return 0;
}
