//Write a C program to check whether a number is negative, positive or zero.

void checkInteger(int num)
{
    if(num>0)
    {
        printf("%d is a positive number ",num);
    }
    else if(num<0)
    {
        printf("%d is a negative number ",num);
    }
    else{
        printf("Number is a zero ",num);
    }
}

void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    checkInteger(num);
}
