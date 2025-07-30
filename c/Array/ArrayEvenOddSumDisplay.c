


void  displayEvenNumber(int a[],int size)
{
    printf("Even numbers from array = {");
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d, ",a[i]);
        }
    }
    printf("}\n------------------------------------------------\n");
}
int evenSumFromArray(int a[],int size)
{
    int evenSum=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            evenSum+=a[i];
        }
    }
    return evenSum;

}


void  displayOddNumber(int a[],int size)
{
    printf("Odd numbers from array = {");
    for(int i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d, ",a[i]);
        }
    }
    printf("}\n------------------------------------------------\n");
}
int oddSumFromArray(int a[],int size)
{
    int oddSum=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2!=0)
        {
            oddSum+=a[i];
        }
    }
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

    displayEvenNumber(natural,10);
    displayOddNumber(natural,10);
    int res=evenSumFromArray(natural,10);
    printf("\nEven number sum from array = %d",res);
    res=oddSumFromArray(natural,10);
    printf("\nOdd number sum from array = %d",res);

}
