//  Write a C program to input all sides of a triangle and check whether triangle is valid or not.


void checkTriangleSide(int s1,int s2,int s3)
{
    if((s1+s2)>s3 && (s1+s3)>s2  && (s2+s3)>s1)
    {
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
}
void main()
{
    int s1,s2,s3;
    printf("Enter three sides of a triangle : ");
    scanf("%d%d%d",&s1,&s2,&s3);

    checkTriangleSide(s1,s2,s3);

}
