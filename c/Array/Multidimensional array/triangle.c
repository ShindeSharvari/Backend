
void displayTriangle(int s1,int s2,int a[s1][s2])
{
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {

          if((i==1 && j==0)||(i==2 && j==0) ||(i==2 && j==1))
          {
            a[i][j]=0;
          }
        }
    }
    displayArray(s1,s2,a);
}
void displayArray(int s1,int s2,int arr[s1][s2])
{
    // displaying the array
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}


int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    displayArray(3,3,arr);
    printf("\n-----------------------------------\n");
    displayTriangle(3,3,arr);
    return 0;
}




