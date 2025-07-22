//Write a C program to input angles of a triangle and check whether triangle is valid or not.


void checkTriangleAngle(int a1,int a2,int a3)
{
    if((a1+a2+a3 == 180 ) && (a1>0 && a2>0 && a3>0))
    {
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
}
void main()
{
    int a1,a2,a3;
    printf("Enter three angles of a triangle : ");
    scanf("%d%d%d",&a1,&a2,&a3);

    checkTriangleAngle(a1,a2,a3);

}
