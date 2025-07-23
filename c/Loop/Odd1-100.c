// Write a C program to print all odd number between 1 to 100.

void printOdd()
{
    int start=1;
    while(start<=100)
    {
        if(start%2!=0)
        {
            printf("\n%d",start);
        }
        start++;
    }
}

void main()
{
    printf("Printing odd numbers from 1-100");

    printOdd();
}
