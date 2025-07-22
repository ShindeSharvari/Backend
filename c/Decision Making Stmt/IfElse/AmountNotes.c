
void countNotes(int amt)
{
    printf("\nThe notes count for amount %d is as below",amt);
    int notes=0;
    if(amt>=500)
    {
        notes = amt/500;
        amt -= (notes*500);
        printf("\nThere are %d notes of 500",notes);
    }
    if(amt>=200)
    {
        notes = amt/200;
        amt -= (notes*200);
        printf("\nThere are %d notes of 200",notes);
    }
    if(amt>=100)
    {
        notes = amt/100;
        amt -= (notes*100);
        printf("\nThere are %d notes of 100",notes);
    }
    if(amt>=50)
    {
        notes = amt/50;
        amt -= (notes*50);
        printf("\nThere are %d notes of 50",notes);
    }
    if(amt>=20)
    {
        notes = amt/20;
        amt -= (notes*20);
        printf("\nThere are %d notes of 20",notes);
    }
    if(amt>=10)
    {
        notes = amt/10;
        amt -= (notes*10);
        printf("\nThere are %d notes of 10",notes);
    }
    if(amt>=5)
    {
        notes = amt/5;
        amt -= (notes*5);
        printf("\nThere are %d notes of 5",notes);
    }
    if(amt>=2)
    {
        notes = amt/2;
        amt -= (notes*2);
        printf("\nThere are %d notes of 2",notes);
    }
    if(amt>=1)
    {
        notes = amt/1;
        amt -= (notes*1);
        printf("\nThere are %d notes of 1",notes);
    }
    printf("\n-----------------------------------------------------");
}

void main()
{
    int amt1,amt2,amt3,amt4;
    printf("Enter four amount :");
    scanf("%d%d%d%d",&amt1,&amt2,&amt3,&amt4);

    countNotes(amt1);
    countNotes(amt2);
    countNotes(amt3);
    countNotes(amt4);
}
