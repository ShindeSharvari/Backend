void calculateSumPercentage(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<s1;i++)
    {
        int sum=0;
        for(int j=0;j<s2;j++)
        {
            int element=a[i][j];
            sum+=element;
        }

        printf("\nrow %d student marks total = %d",i+1,sum);
        float per = ((float)sum/120)*100;
        printf("\nrow %d student percentage = %f",i+1,per);
    }
}

void displayArray(int s1,int s2,int arr[s1][s2])
{
    // displaying the array
    printf("\n---------------------------------------");
    for(int i=0;i<s1;i++)
    {
        printf("\n %d row students {",i+1);
        for(int j=0;j<s2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("}\n");
    }
    printf("\n----------------------------------------");

}


void main()
{
    int studentMarks[3][4];
    for(int i=0;i<3;i++)
    {
        printf("\n----------%d Student marks--------------\n",i+1);
        for(int j=0;j<4;j++)
        {
            printf("Enter the subject marks out of 30 ");
            scanf("%d",&studentMarks[i][j]);
        }
    }

    displayArray(3,4,studentMarks);
    calculateSumPercentage(3,4,studentMarks);
}

