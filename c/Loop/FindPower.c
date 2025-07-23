//Write a C program to find power of any number using a loop.

int getPower(int base , int raise)
{
    int pow=1;
    for(int i=1;i<=raise;i++)
    {
        pow=pow*base;
    }
    return pow;
}
void main()
{
    int base,raise;
    printf("Enter the base number\n ");
    scanf("%d",&base);

    printf("Enter the raise to number\n ");
    scanf("%d",&raise);

    printf("The power of %d raise to %d = %d ",base,raise,getPower(base,raise));

}
