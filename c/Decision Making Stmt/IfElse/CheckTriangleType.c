//Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle


void checkTriangleSide(int s1,int s2,int s3)
{
    if((s1+s2)>s3 && (s1+s3)>s2  && (s2+s3)>s1)
    {
           checkTriangleType(s1,s2,s3);
    }
    else{
        printf("Triangle is not valid");
    }
}

void checkTriangleType(int s1,int s2,int s3)
{
    if(s1==s2 && s2==s3)
    {
        printf("It's an equilateral triangle");
    }
    else if(s1==s2 || s1==s3 || s2==s3)
    {
        printf("It's an isosceles triangle");
    }
    else
    {
        printf("It's an scalene triangle");
    }

}
void main()
{
    int s1,s2,s3;
    printf("Enter three sides of a triangle : ");
    scanf("%d%d%d",&s1,&s2,&s3);

    checkTriangleSide(s1,s2,s3);

}
