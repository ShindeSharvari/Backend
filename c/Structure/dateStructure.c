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

void compareDates(struct Date myDate[])
{
    int i=0;
    if(myDate[i].date==myDate[i+1].date && myDate[i].month==myDate[i+1].month && myDate[i].year==myDate[i+1].year)
    {
        printf("Same Date");
    }
    else
    {
        printf("Not equal dates");
    }
}
void getUserInput(struct Date myDate[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("----------Date-----------");
        printf("\nEnter Date : ");
        scanf("%d",&myDate[i].date);
        printf("\nEnter Month : ");
        scanf("%d",&myDate[i].month);
        printf("\nEnter Year : ");
        scanf("%d",&myDate[i].year);
    }
}
int main()
{
    struct Date myDate[2];
    getUserInput(myDate,2);
    compareDates(myDate);
    return 0;
}
