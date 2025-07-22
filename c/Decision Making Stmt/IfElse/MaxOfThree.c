// Write a C program to find a maximum between three numbers.

void findMax(int n1,int n2,int n3)
{
    if(n1>n2)
    {
        if(n1>n3)
        {
           printf("Maximum number between %d,%d,%d is %d",n1,n2,n3,n1);
        }
        else{
          printf("Maximum number between %d,%d,%d is %d",n1,n2,n3,n3);
        }
    }
    else{
        if(n2>n3)
        {
           printf("Maximum number between %d,%d,%d is %d",n1,n2,n3,n2);
        }
        else{
          printf("Maximum number between %d,%d,%d is %d",n1,n2,n3,n3);
        }
    }
}

void main()
{
    int n1,n2,n3;
    printf("Enter two numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);

    findMax(n1,n2,n3);
}
