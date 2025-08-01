
// Function to display negative elements in array
void displayNegative(int a[],int size)
{
    int found=0;   // flag for if negative element found or not
    printf("Negative number in array = {");
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)  // Checking for negative number
        {
          printf("%d, ",a[i]);
          found=1;
        }
    }
    if(found==0)
    {
        printf("No negative element present in array");
    }
    printf("}\n---------------------------------------");
}


//Sum of array elements
int sumOfArray(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum;
}


//Function for getting maximum and minimum value
void findMaxMin(int a[],int size)
{
    int max=a[0],min=a[0]; //assumed that first element is max and min to compare with other
    for(int i=0;i<size;i++)
    {
      max=(max>a[i])? max:a[i]; // comparing with assumed element and storing in max
      min=(min<a[i])? min:a[i]; // comparing with assumed element and storing in min
    }
    printf("\nMaximum element from array = %d ",max);
    printf("\nMinimum element from array = %d ",min);
}


// Even, Odd number count in array
void evenOddCount(int a[],int size)
{
    int evenCt=0,oddCt=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            evenCt++;
        }
        else
        {
            oddCt++;
        }
    }
    printf("\nEven number count in array = %d",evenCt);
    printf("\nOdd number count in array = %d",oddCt);
}

//Function to get count of negative elements in array
int getNegativeCount(int a[],int size)
{
    int ct=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
            ct++;
        }
    }
    return ct;
}

// function for coping one array to other
void copyArray(int a[],int size)
{
    int copy[size];
    for(int i=0;i<size;i++)
    {
       copy[i]=a[i];
    }

    printf("\nPrinting copied array\n{");
    for(int i=0;i<size;i++)
    {
        printf("%d ,",copy[i]);
    }
    printf("}\n");
}



//Insert elemet at given position
void insertElement(int a[],int size,int element ,int pos)
{
    int newArr[size+1]; //Inserting one element so +1
    for(int i=0;i<size+1;i++)
    {
        if(i<pos)         // for previous as it just copy to new
        {
            newArr[i]=a[i];
        }
        else if(i==pos)   // when position match add element
        {
            newArr[i]=element;
        }
        else
        {
            newArr[i]=a[i-1];  // increment new array index but previous array element shifted to that updated after position match
        }

    }

    printf("\nPrinting updated array\n{");
    for(int i=0;i<size+1;i++)
    {
         printf("%d, ",newArr[i]);
    }
    printf("}\n");
}



// displaying array using loop
void displayArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("}\n");
}

// merging two array and storing in third array
void mergeArray(int a[],int size1,int b[],int size2)
{
    int c[size1+size2];
    for(int i=0;i<size1;i++)
    {
        c[i]=a[i];
    }

    for(int i=size1;i<size1+size2;i++)
    {
        c[i]=b[i-size1];
    }

    printf("Array 1 = {");
    displayArray(a,size1);
    printf("Array 2 = {");
    displayArray(b,size2);
    printf("Merged array = {");
    displayArray(c,(size1+size2));
}

//Function to reverse an array
void printReverseArray(int a[],int size)
{
    printf("\nPrinting reversed array\n{");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ,",a[i]);
    }
    printf("}\n");
}

//Separate even , odd elements in array
void  separateEvenOddArray(int a[],int size)
{
    int evenArray[size],oddArray[size],evenSize=0,oddSize=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            evenArray[evenSize]=a[i];
            evenSize++;
        }
        else
        {
            oddArray[oddSize]=a[i];
            oddSize++;
        }
    }
    printf("\nEven array = {");
    displayArray(evenArray,evenSize);
    printf("\nOdd array = {");
    displayArray(oddArray,oddSize);

}


//Search element in an array
void searchElementInArray(int a[],int size , int n)
{
    int found=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==n)
        {
            printf("\n%d found at index %d",n,i);
            found=1;
        }
    }
    if(found==0)
    {
            printf("%d is not found in array",n);
    }
}

//Find frequency of each element in array
void frequencyOfElements(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
            int ct=1;
            if(a[i]==0)
            {
               for(int j=i+1;j<size;j++)
               {
                 if(a[i]==a[j])
                  {
                     ct++;
                  }
               }
                printf("\n%d is repeated %d times ",a[i],ct);
                break;
            }
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]!=0)
        {
            int ct=1;
            for(int j=i+1;j<size;j++)
            {
                if(a[i]==a[j])
                {
                    a[j]=0;
                    ct++;
                }
            }
            printf("\n%d is repeated %d times ",a[i],ct);
        }
    }
}


// Print unique elements in array
void uniqueArray(int a[],int size)
{
    int temp[size];
    for(int i=0;i<size;i++)
    {
        temp[i]=a[i];    // copying original array to temp array
    }
    int ct=0;
    for(int i=0;i<size;i++)
    {
        if(temp[i]>0){
           for(int j=i+1;j<size;j++)
           {
               if(temp[i]==temp[j]) // checking for duplicate
               {
                   temp[j]=0;    // if duplicate found make it 0
                   ct++;         // increase duplicate count
               }
           }
        }
    }
    int unique[size-ct];
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(temp[i]!=0)
        {
            unique[j]=temp[i];
            j++;
        }
    }

    printf("Unique Array = {");
    for(int i=0;i<j;i++)
    {
        printf("%d, ",unique[i]);
    }
    printf("}");
}



//Switch case to handle user choice
void userChoice(int choice,int a[],int size)
{
    int element,pos,size2;
    switch(choice)
    {
        case 1:
            displayNegative(a,size);
            break;
        case 2:
            printf("\nSum of array elements = %d",sumOfArray(a,size));
            break;

        case 3:
            findMaxMin(a,size);
            break;

        case 4:
            evenOddCount(a,size);
            break;

        case 5:
            printf("The count of negative numbers in array = %d",getNegativeCount(a,size));
            break;

        case 6:
            copyArray(a,size);
            break;

        case 7:
            printf("Enter the element you want to insert ");
            scanf("%d",&element);
            printf("Enter the index you want to insert element ");
            scanf("%d",&pos);
            insertElement(a,size,element,pos);
            break;

        case 8:
            {
            //Second array
             printf("Enter the second array size ");
             scanf("%d",&size2);

             int arr2[size2];
             //taking elements of array from user
             for(int i=0;i<size2;i++)
             {
               printf("Enter element %d = ",i+1);
               scanf("%d",&arr2[i]);
             }
             mergeArray(a,size,arr2,size2);
             break;
            }

        case 9:
            printReverseArray(a,size);
            break;

        case 10:
            separateEvenOddArray(a,size);
            break;

        case 11:
             printf("Enter the element you want to search ");
             scanf("%d",&element);
             searchElementInArray(a,size,element);
            break;

        case 12:
            frequencyOfElements(a,size);
            break;

        case 13:
            uniqueArray(a,size);
            break;


        default:
            printf("Enter valid option");
    }
}

void main()
{
    //getting size of array from user
    int size;
    printf("Enter the array size ");
    scanf("%d",&size);

    int arr[size];
    //taking elements of array from user
    for(int i=0;i<size;i++)
    {
        printf("Enter element %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    int choice=0;
    do
    {
        printf("\n1.To print all negative elements in an array.");
        printf("\n2.To find sum of all array elements.");
        printf("\n3.To find maximum and minimum element in an array. ");
        printf("\n4.To count total number of even and odd elements in an array.");
        printf("\n5.To count total number of negative elements in an array.");
        printf("\n6.To copy all elements from an array to another array.");
        printf("\n7.To insert an element in an array.");
        printf("\n8.To merge two array to third array.");
        printf("\n9.To find reverse of an array.");
        printf("\n10.To put even and odd elements of array in two separate array.");
        printf("\n11.To search an element in an array.");
        printf("\n12.To find frequency of each element in an array.");
        printf("\n13.To find unique array.");
        printf("\nSelect an option.");
        scanf("%d",&choice);
        userChoice(choice,arr,size);
        printf("\nTo continue press 1 \nFor exit press 0");
        scanf("%d",&choice);
    }while(choice==1);

}
