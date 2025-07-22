// Write a C program to check whether a number is even or odd.


void checkEvenOdd(int num)
{
    if(num%2==0)
    {
        printf("%d is even number",num);
    }
    else{
       printf("%d is odd number ",num);
    }
}

void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    checkEvenOdd(num);
}
