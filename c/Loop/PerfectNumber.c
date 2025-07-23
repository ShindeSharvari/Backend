//Write a C program to check whether a number is Perfect number or not.

void checkPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    (n==sum)? printf("%d is a perfect number",n):printf("%d is a not perfect number",n);
}

void main()
{
    int n;
    printf("Enter the number to check perfect or not.\n");
    scanf("%d",&n);

    checkPerfect(n);
}
