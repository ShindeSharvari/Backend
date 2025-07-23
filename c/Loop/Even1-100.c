//Write a C program to print all even numbers between 1 to 100. - using while loop

void printEven()
{
    int start=1;
    while(start<=100)
    {
        if(start%2==0)
        {
            printf("\n%d",start);
        }
        start++;
    }
}

void main()
{
    printf("Printing even numbers from 1-100");

    printEven();
}
