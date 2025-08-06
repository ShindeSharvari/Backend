void displayMessage(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<s1;i++)
    {
        int sum=0;
        for(int j=0;j<s2;j++)
        {
            int element=a[i][j];
            if(element<18)
            {
                printf("\n%d age student is studying in school ",element);
            }
            else if(element>=18 && element<=20)
            {
                printf("\n%d age student is studying in 12th class ",element);
            }
            else if(element>20 && element<=24)
            {
                printf("\n%d age student is pursuing bachelors degree ",element);
            }
            else
            {
                printf("\n%d age is searching for job or got the job ",element);
            }
        }
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
    int studentAge[3][4]={{20,18,60,56},{35,40,10,15},{12,21,40,50}};  // declare with creation and initialization

    displayArray(3,4,studentAge);

    displayMessage(3,4,studentAge);
}
