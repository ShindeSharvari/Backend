/*
Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 5 students in the
college.
(a) Write a function to print names of all students who joined
in a particular year.
(b) Write a function to print the data of a student whose roll
number is given.

*/


#include<stdio.h>
struct Student {          // declaring structure and giving members with datatype
    int rollNo;
    char name[50];
    char department[30];
    char course[20];
    int yearOfJoining;
};


// function for getting user inputs for student structure
void getUserInput(int size, struct Student stud[]) {
    for (int i = 0; i < size; i++) {     // loop for iterating the number of student to get details
        printf("\n--- Enter details for student %d ---\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &stud[i].rollNo);

        fflush(stdin);         // use to clear buffer \n which remained in buffer after number
        printf("Name: ");
        gets(stud[i].name);

        printf("Department: ");
        gets(stud[i].department);

        printf("Course: ");
        gets(stud[i].course);

        printf("Year of Joining: ");
        scanf("%d", &stud[i].yearOfJoining);

    }
}

// function to display student info based on roll no
void displayByRollNo(struct Student stud[],int size , int rollNo)
{
    int found=0;
    for(int i=0;i<size;i++)
    {
        if(stud[i].rollNo == rollNo)
        {
            printf("\n--------------Details of roll no %d--------------------",rollNo);
            printf("\nRoll No : %d",stud[i].rollNo);
            printf("\nName : %s",stud[i].name);
            printf("\nDepartment : %s",stud[i].department);
            printf("\nCourse : %s",stud[i].course);
            printf("\nYear Of Joining : %d",stud[i].yearOfJoining);
            found=1;
            break;
        }
    }
    if(found == 0)
    {
        printf("\n%d rollNo not present in data",rollNo);
    }
}

//function to display all students info
void displayStudent(struct Student stud[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\n--------------Details of student %d--------------------",i+1);
        printf("\nRoll No : %d",stud[i].rollNo);
        printf("\nName : %s",stud[i].name);
        printf("\nDepartment : %s",stud[i].department);
        printf("\nCourse : %s",stud[i].course);
        printf("\nYear Of Joining : %d",stud[i].yearOfJoining);
    }
}


// function for printing names based on joining year
void printNamesByYear(struct Student stud[], int size, int year)
{
    printf("\nStudents who joined in %d:\n", year);
    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (stud[i].yearOfJoining == year)
        {
            printf("%s\n", stud[i].name);
            found = 1;
        }
    }

    if (found == 0)
    {
        printf("\nNo students found for %d year.\n",year);
    }
}

//function for user choice
void userChoice(struct Student stud[],int size,int choice)
{
    int year,rollNo;
    switch(choice)
    {
        case 1:
            displayStudentInfo(stud,size);
            break;

        case 2:
            printf("\nEnter the year you want joined students name\n");
            scanf("%d",&year);
            printNamesByYear(stud,size,year);
            break;

        case 3:
            printf("\nEnter the roll no of student you want to display data\n");
            scanf("%d",&rollNo);
            displayByRollNo(stud,size,rollNo);
            break;

        default:
            printf("\nEnter the valid option");
    }
}
int main() {
    int size,year,rollNo;
    printf("\nEnter the numbers of students ");
    scanf("%d",&size);
    struct Student stud[size];  // created and array of size students and named it as stud
    getUserInput(size, stud);

    int choice=1;
    do
    {
        printf("----------------------Options-------------------");
        printf("\n 1.Display all students info");
        printf("\n 2.Display student name by joining year");
        printf("\n 3.Display student info by roll no\n");
        scanf("%d",&choice);
        userChoice(stud,size,choice);
        printf("\n-------------------------------------------------\n");
        printf("\nPress 1 to continue\nPress 0 to exit\n");
        scanf("%d",&choice);

    }while(choice!=0);

    return 0;
}

