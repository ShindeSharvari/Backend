

int displayEvenNumber(int a[],int size)
{
    int evenSum=0;
    printf("Even numbers from array = {");
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d, ",a[i]);
            evenSum+=a[i];
        }
    }
    printf("}\n------------------------------------------------\n");
    return evenSum;
}

int displayOddNumber(int a[],int size)
{
    int oddSum=0;
    printf("\nOdd numbers from array = {");
    for(int i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d, ",a[i]);
            oddSum+=a[i];
        }
    }
    printf("}\n------------------------------------------------\n");
    return oddSum;
}
void main()
{

    int natural[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter number ");
        scanf("%d",&natural[i]);
    }

    int res=displayEvenNumber(natural,10);
    printf("\nEven number sum from array = %d",res);
    res=displayOddNumber(natural,10);
    printf("\nOdd number sum from array = %d",res);

}
