
void drawRhombus(int n)
{
    for(int i=1;i<=n;i++)
    {
            for(int j=1;j<=(n-1)-i+1;j++)
            {
                printf("  ");
            }
            for(int k=1;k<=n;k++)
            {
                printf("* ");
            }
        printf("\n");
    }
}

void hollowRhombus(int n)
{
    for(int i=1;i<=n;i++)
    {
            for(int j=1;j<=(n-1)-i+1;j++)
            {
                printf("  ");
            }
            for(int k=1;k<=n;k++)
            {
                if(i==1 || k==1 || i==n || k==n)
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


void mirroredRightTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-1)-i+1;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


void hollowMirroredRightTriangle(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-1)-i+1;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            if(k==i || i==n || k==1)
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

void pattern54()
{
  int k=5;
  for (int i=1;i<=5;i++)
  {
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
      }
      k--;
      printf("\n");
  }
}

void pattern12()
{
  int k=1;
  for (int i=1;i<=5;i++)
  {
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
      }
      k++;
      printf("\n");
  }
}


void getOddSum(int last)
{
    int sum=0;
    for(int i=1;i<=last;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
  printf("\nSum of all odd numbers between 1 to %d = %d",last,sum);
}


void printTable(int n)
{
    for(int mult=1;mult<=10;mult++)
    {
        printf("\n %d * %d = %d",n,mult,(mult*n));
    }
}

void findFirstLastDigits(int n)
{
    int ct=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        ct++;
    }

    for(int j=1;j<=ct;j++)
    {
        int rem = n%10;
        n=n/10;
        if(j==ct)
        {
            printf("\nfirst digit = %d",rem);
        }
        if(j==1)
        {
            printf("\nlast digit = %d",rem);
        }
    }
}



void countDigits(int n)
{
    int ct=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        ct++;
    }
    printf("There are %d digits in %d",ct,n);
}


void userChoice(int option)
{
    int n,r,c;
    switch(option)
    {
        case 1:
             printf("\nEnter the row number of rhombus to print pattern.");
             scanf("%d",&n);
             drawRhombus(n);
             break;
        case 2:
             printf("\nEnter the row number of rhombus to print hollow pattern.");
             scanf("%d",&n);
             hollowRhombus(n);
             break;

       case 3:
             printf("\nEnter the height of triangle to print mirrored right triangle  pattern.");
             scanf("%d",&n);
             mirroredRightTriangle(n);
             break;

       case 4:
             printf("\nEnter the height of triangle to print hollow mirrored right triangle pattern.");
             scanf("%d",&n);
             hollowMirroredRightTriangle(n);
             break;

       case 5:
             pattern54();
             break;

      case 6:
             pattern12();
             break;

      case 7:
             printf("\nEnter the last digit of range from 1 to get odd sum.");
             scanf("%d",&n);
             getOddSum(n);
             break;
      case 8:
             printf("\nEnter the number to print table.  ");
             scanf("%d",&n);
             printTable(n);
             break;

      case 9:
             printf("\nEnter the number to get first and last digit.  ");
             scanf("%d",&n);
             findFirstLastDigits(n);
             break;

      case 10:
             printf("\nEnter the number to count digits.");
             scanf("%d",&n);
             countDigits(n);
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
        printf("\n1.Rhombus Pattern");
        printf("\n2.Hollow Rhombus Pattern");
        printf("\n3.Inverted Right Triangle");
        printf("\n4.Hollow Inverted Right Triangle");
        printf("\n5.Reverse Number Pattern  555 444 ...");
        printf("\n6.Continue Number Pattern 111 222 ...");
        printf("\n7.To find the sum of all odd numbers between 1 to n.");
        printf("\n8.To print a multiplication table of any number.");
        printf("\n9.To find the first and last digit of any number.");
        printf("\n10.To count the number of digits in any number.");
        printf("\nSelect an option");
        scanf("%d",&i);
        userChoice(i);
        printf("\nTo continue press 1 \nFor exit press 0");
        scanf("%d",&i);
    }
    while(i==1);
}

