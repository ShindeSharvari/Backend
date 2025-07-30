
int sumOfArray(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}

void main()
{

    int sm[5]={30,32,45,54,46};
    int sm1[6]={53,65,75,43,43,34};

    int total=sumOfArray(sm,5)+sumOfArray(sm1,6);
    printf("Total Of two arrays = %d",total);
}
