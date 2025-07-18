void main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(; num != 0; num = num / 10)
    {
        printf("%d", num % 10);
    }
}
