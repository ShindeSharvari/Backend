void main()
{
    int n;
    printf("Enter the number to check its strong number or not : ");
    scanf("%d",&n);


     int sum=0,last;
    for(int j=n;j>0;j/=10)
    {
        last=j%10;
        int fact=1;
        for(int i=last;i>0;fact*=i,i--);
        sum=sum+fact;

    }
    printf("%d",sum);
   // printf("%d",checkStrongNumber(n));
    (sum == n)? printf("\n%d is a strong number.",n):printf("\n%d is not a strong number.",n);
}
