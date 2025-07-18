void main()
{
    int s1,s2,s3,s4,s5;
    float total,average,percentage;

    printf("Enter marks of 5 subjects : ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    total= s1+s2+s3+s4+s5;
    average=total/5;
    percentage= (total/500)*100;


    printf("\nTotal of 5 subject = %f",total);
    printf("\nAverage of 5 subject = %f",average);
    printf("\nPercentage of 5 subject = %f",percentage);

}
