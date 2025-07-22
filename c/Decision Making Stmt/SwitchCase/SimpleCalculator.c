//Write a C program to create a Simple Calculator using a switch case.

void calculator(int n1,int n2,char c)
{
    switch(c)
    {
       case '+':
           printf("Addition of %d and %d is %f",n1,n2,n1+n2);
           break;
       case '-':
           printf("Subtraction of %d and %d is %f",n1,n2,n1-n2);
           break;
       case '*':
           printf("Multiplication of %d and %d is %f",n1,n2,n1*n2);
           break;
       case '/':
           printf("Division of %d and %d is %f",n1,n2,n1/n2);
           break;
       default:
           printf("Invalid data");
    }
}
void main()
{
    int n1,n2;
    char c;
    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    printf("Select operation you want to perform + - * / \n");
    scanf(" %c",&c);

    calculator(n1,n2,c);
}
