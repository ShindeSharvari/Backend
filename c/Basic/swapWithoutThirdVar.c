void main()
{
    int a , b;
    printf("Enter the values for a and b : ");
    scanf("%d%d",&a,&b);

    printf("\nBefore swapping a= %d and b=%d",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\nAfter swapping a= %d and b=%d",a,b);


}
