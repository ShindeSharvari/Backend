
int sumOfArray(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}


void displayStudentMarks(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n------------------------------------------------\n");
}
void main()
{

    int sm[5];
    int sm1[6]={53,65,75,43,43,34};
    for(int i=0;i<5;i++)
    {
        printf("Roll no %d Enter marks ",i+1);
        scanf("%d",&sm[i]);
    }

    displayStudentMarks(sm,5);
    displayStudentMarks(sm1,6);


    int total=sumOfArray(sm,5)+sumOfArray(sm1,6);
    printf("Total Of two arrays = %d",total);
}
