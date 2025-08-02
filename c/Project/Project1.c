void squarePattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}


void hollowSquarePattern(int n)
{
        for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void rightTraingle(int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void hallowRightTraingle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j==1 || i==n || i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void pattern01(int r,int c)
{
  int k=1;
  for (int i=1;i<=r;i++)
  {
      for(int j=1;j<=c;j++)
      {
          printf("%d ",k);
          k = (k==1) ? 0:1;
      }
      printf("\n");
  }
}

void pattern12(int r ,int c)
{
  int k=1;
  for (int i=1;i<=r;i++)
  {
      for(int j=1;j<=c;j++)
      {
        printf("%d\t",k);
        k++;
      }
      printf("\n");
  }
}

void printFiboSeries(int n)
{
    int n1=0,n2=1;
    for(int i=1;i<=n;i++)
    {
        int n3=n1+n2;
        printf("%d ",n1);
        n1=n2;
        n2=n3;
    }
}


void checkPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    (n==sum)? printf("%d is a perfect number",n):printf("%d is a not perfect number",n);
}


int getFactorial(int n)
{
    int fact=1;
    for(int i=n;i>=1;i--)
    {
        fact*=i;
    }
    return fact;
}

void checkStrong(int n)
{
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        sum+=getFactorial(rem);
    }
    (n==sum)? printf("%d is a strong number",n):printf("%d is a not strong number",n);
}


int getPower(int base,int raise)
{
    int pow=1;
    for(int i=1;i<=raise;i++)
    {
        pow=pow*base;
    }
    return pow;
}
void binaryToDecimal(int n)
{
    int decimal=0,num=0,rem=0;
    for(int i=0;n>0;i++)
    {
        rem=n%10;
        num=rem*(getPower(2,i));
        decimal+=num;
        n=n/10;
    }
    printf("%d to decimal = %d ",n,decimal);
}
void userChoice(int option)
{
    int n,r,c;
    switch(option)
    {
        case 1:
             printf("\nEnter the row number of square to print pattern.");
             scanf("%d",&n);
             squarePattern(n);
             break;
        case 2:
             printf("\nEnter the row number of square to print hollow pattern.");
             scanf("%d",&n);
             hollowSquarePattern(n);
             break;

       case 3:
             printf("\nEnter the height of triangle to print right triangle  pattern.");
             scanf("%d",&n);
             rightTraingle(n);
             break;

       case 4:
             printf("\nEnter the height of triangle to print hollow right triangle pattern.");
             scanf("%d",&n);
             hallowRightTraingle(n);
             break;
       case 5:
             printf("\nEnter the row - and column | number to print pattern in 1 0 .....");
             scanf("%d%d",&r,&c);
             pattern01(r,c);
             break;

      case 6:
             printf("\nEnter the row - and column | number to print pattern in 1 2 .....");
             scanf("%d%d",&r,&c);
             pattern12(r,c);
             break;

      case 7:
             printf("\nEnter the number to check perfect number or not.  ");
             scanf("%d",&n);
             checkPerfect(n);
             break;
      case 8:
             printf("\nEnter the number to check strong number or not.  ");
             scanf("%d",&n);
             checkStrong(n);
             break;
      case 9:
             printf("\nEnter the number up to you want fibonacci series.  ");
             scanf("%d",&n);
             printFiboSeries(n);
             break;

      case 10:
             printf("\nEnter the binary number to get decimal number.");
             scanf("%d",&n);
             printFiboSeries(n);
             break;

      default:
            printf("Choose a valid option");

    }
}


void main()
{
    int i=0;
    do
    {
        printf("\n-------------------------------------------------------------------------");
        printf("\n1.Sqaure Pattern");
        printf("\n2.Hollow Square Pattern");
        printf("\n3.Right Triangle");
        printf("\n4.Hollow Right Triangle");
        printf("\n5.Number Pattern 1 0 ...");
        printf("\n6.Number Pattern 1 2 ...");
        printf("\n7.Check whether a number is Perfect number or not.");
        printf("\n8.Check whether a number is Strong number or not.");
        printf("\n9.Print Fibonacci series up to n terms");
        printf("\n10.Convert Binary to Decimal number system");
        printf("\nSelect an option");
        scanf("%d",&i);
        userChoice(i);
        printf("\nTo continue press 1 \nFor exit press 0");
        scanf("%d",&i);

    }
    while(i==1);
}

