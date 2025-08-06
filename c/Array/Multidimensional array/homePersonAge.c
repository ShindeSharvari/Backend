

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

    studentAge[0][1]=23;   // you can initialize like this also

    displayArray(3,4,studentAge);


    //user enter
    int sm[3][2];
    for(int i=0;i<3;i++)
     {
       printf("\nRoll No %d enter your subjects Marks ",i+1);
       for(int j=0;j<2;j++)
       {
         scanf("%d",&sm[i][j]);
       }
     }
    displayArray(3,2,sm);
}
