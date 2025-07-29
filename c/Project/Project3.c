void userChoicePattern(int r,int c,char p)
{
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            printf("%c ",p);
        }
        printf("\n");
    }
}

void userChoiceHollowPattern(int r,int c,char p)
{
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i==1 || i==r || j==1 || j==c)
            {
               printf("%c ",p);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void incrementPattern(int r,int c,int k)
{
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


void decrementPattern(int r,int c,int k)
{
  for (int i=1;i<=r;i++)
  {
      for(int j=1;j<=c;j++)
      {
        printf("%d\t",k);
        k--;
      }
      printf("\n");
  }
}


void pattern1()
{
  for (int i=1;i<=5;i++)
  {
      int k=5-i+1;
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
         k++;
      }

      printf("\n");
  }
}

void pattern2()
{
  for (int i=1;i<=5;i++)
  {
      int k=i*2-1;
      for(int j=1;j<=5-i+1;j++)
      {
         printf("%d ",k);
         k+=2;
      }

      printf("\n");
  }
}


void checkPalindrome(int n)
{
    int rev=0;
    for(int i=n;i>0;i=i/10)
    {
        int rem=i%10;
        rev = rev*10+rem;
    }
    if(n==rev)
    {
        printf("%d is a palindrome number",n);
    }
    else
    {
        printf("%d is not a palindrome number",n);
    }
}


void asciiValues()
{
    for(int i=0;i<=127;i++)
    {
        printf("\n%d = %c",i,(char)i);
    }
}

void getPower(int base , int raise)
{
    int pow=1;
    for(int i=1;i<=raise;i++)
    {
        pow=pow*base;
    }
    printf("The power of %d raise to %d = %d ",base,raise,pow);
}

void checkLeapYear(int year)
{
    if(year%4==0 && (year%100!=0 || year%400==0))
    {
        printf("%d is a leap year",year);
    }
    else{
       printf("%d is not a leap year ",year);
    }
}

void userChoice(int option)
{
    int n,r,c;
    char p;
    switch(option)
    {
        case 1:
             printf("\nEnter the row - and column | number  to print pattern.");
             scanf("%d%d",&r,&c);
             printf("\nEnter the character you want to print in pattern");
             scanf(" %c",&p);
             userChoicePattern(r,c,p);
             break;

        case 2:
             printf("\nEnter the row - and column | number  to print hollow pattern.");
             scanf("%d%d",&r,&c);
             printf("\nEnter the character you want to print in pattern");
             scanf(" %c",&p);
             userChoiceHollowPattern(r,c,p);
             break;

       case 3:
             printf("\nEnter the row - and column | number to print pattern increment number pattern");
             scanf("%d%d",&r,&c);
             printf("\nEnter the number you want to start");
             scanf("%d",&n);
             incrementPattern(r,c,n);
             break;

       case 4:
             printf("\nEnter the row - and column | number to print pattern in decrement order");
             scanf("%d%d",&r,&c);
             printf("\nEnter the number you want to start");
             scanf("%d",&n);
             decrementPattern(r,c,n);
             break;


       case 5:
             pattern1();
             break;

      case 6:
             pattern2();
             break;

      case 7:
             printf("\nEnter the number to check palindrome number or not");
             scanf("%d",&n);
             checkPalindrome(n);
             break;

      case 8:
             printf("Printing all ASCII characters with their values.");
             asciiValues();
             break;

      case 9:
             printf("Enter the base number\n ");
             scanf("%d",&r);

             printf("Enter the raise to number\n ");
             scanf("%d",&c);
             getPower(r,c);
             break;

      case 10:
             printf("Enter the year to check leap year or not : ");
             scanf("%d",&n);
             checkLeapYear(n);
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
        printf("\n1.Pattern");
        printf("\n2.Hollow Pattern");
        printf("\n3.Increment number pattern.");
        printf("\n4.Decrement number pattern.");
        printf("\n5.Number pattern 1");
        printf("\n6.Number pattern 2");
        printf("\n7.To check whether the number is palindrome or not.");
        printf("\n8.To to print all ASCII characters with their values.");
        printf("\n9.To find power of any number.");
        printf("\n10.To check whether year is leap year or not.");
        printf("\nSelect an option");
        scanf("%d",&i);
        userChoice(i);
        printf("\nTo continue press 1 \nFor exit press 0");
        scanf("%d",&i);
    }
    while(i==1);
}


