//  Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
//    Percentage >= 90% : Grade A
//    Percentage >= 80% : Grade B
//    Percentage >= 70% : Grade C
//    Percentage >= 60% : Grade D
//    Percentage >= 40% : Grade F

float findPercentage(int s1,int s2,int s3,int s4,int s5)
{
    int total = s1+s2+s3+s4+s5;
    printf("\nTotal :- %d",total);
    float per = (total*100)/500;
    printf("\nPercentage :- %f\n",per);
    return per;

}
void getGrade(int s1,int s2,int s3,int s4,int s5)
{
    float per = findPercentage(s1,s2,s3,s4,s5);
    if(per >=90 && per<=100)
    {
        printf("Grade A");
    }
    else if(per >=80 && per<90)
    {
        printf("Grade B");
    }
    else if(per >=70 && per<80)
    {
        printf("Grade C");
    }
    else if(per >=60 && per<70)
    {
        printf("Grade D");
    }
    else if(per >=40 && per<60)
    {
        printf("Grade E");
    }
    else{
        printf("Fail");
    }
}
void main()
{
    int phy, chem, bio, math ,computer;
    printf("Enter marks of physics : ");
    scanf("%d",&phy);

    printf("Enter marks of chemistry : ");
    scanf("%d",&chem);

    printf("Enter marks of biology : ");
    scanf("%d",&bio);

    printf("Enter marks of mathematics : ");
    scanf("%d",&math);

    printf("Enter marks of computer : ");
    scanf("%d",&computer);

    getGrade(phy, chem, bio, math ,computer);
}
