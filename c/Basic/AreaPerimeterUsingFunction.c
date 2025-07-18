void findAreaOfCircle(float r)
{
    float area = 3.14*r*r;
    printf("\n\nArea of circle with radius %f = %f",r,area);
}
void findAreaOfRectangle(float l,float b)
{
    float area = l*b;
    printf("\n\nArea of rectangle with length %f and breadth %f = %f",l,b,area);
}
void findAreaOfTriangle(float b,float h )
{
    float area =0.5*b*h;
    printf("\n\nArea of triangle with base %f and height %f = %f",b,h,area);
}
void findAreaOfSquare(float s)
{
    float area = s*s;
    printf("\n\nArea of square with side %f = %f",s,area);
}


void findPerimeterOfCircle(float r)
{
    float perimeter = 2*3.14*r;
    printf("\n\nPerimeter of circle with radius %f = %f",r,perimeter);
}
void findPerimeterOfRectangle(float l,float b)
{
    float perimeter = 2*(l+b);
    printf("\n\nPerimeter of rectangle with length %f and breadth %f = %f",l,b,perimeter);
}
void findPerimeterOfTriangle(float a,float b,float c )
{
    float perimeter =a+b+c;
    printf("\n\nPerimeter of triangle with sides %f %f %f = %f",a,b,c,perimeter);
}
void findPerimeterOfSquare(float s)
{
    float perimeter = 4*s;
    printf("\n\nPerimeter of square with side %f = %f",s,perimeter);
}

void main()
{
   float radius,length,breadth,base,height,side,ts1,ts2,ts3;

   printf("\nEnter the radius of a circle : ");
   scanf("%f",&radius);

   printf("\nEnter length and breadth of a rectangle : ");
   scanf("%f%f",&length,&breadth);

   printf("\nEnter base and height of a triangle : ");
   scanf("%f%f",&base,&height);

   printf("\nEnter 3 sides of a triangle : ");
   scanf("%f%f%f",&ts1,&ts2,&ts3);

   printf("\nEnter side of square : ");
   scanf("%f",&side);

   printf("\n--------------------------------------AREA--------------------------------------------\n");
   findAreaOfCircle(radius);
   findAreaOfRectangle(length,breadth);
   findAreaOfTriangle(base,height);
   findAreaOfSquare(side);
   printf("\n\n------------------------------------PERIMETER-----------------------------------------\n");
   findPerimeterOfCircle(radius);
   findPerimeterOfRectangle(length,breadth);
   findPerimeterOfTriangle(ts1,ts2,ts3);
   findPerimeterOfSquare(side);
   printf("\n--------------------------------------------------------------------------------------");
}
