
struct Person
{
    char fname[20];
    char lname[20];
    int age;
    char gender;
};

void displayPersonInfo(struct Person a)
{
    printf("\n--------------Person Details----------------");
    printf("\nFirst name : %s\nLast name: %s\nAge : %d\nGender : %c",a.fname,a.lname,a.age,a.gender);
}
int main()
{
   struct Person p1={"Sharvari","Shinde",24,'F'};
   displayPersonInfo(p1);

   struct Person p2;
   strcpy(p2.fname,"Shravan");
   strcpy(p2.lname,"Shinde");
   p2.age=20;
   p2.gender='M';
   displayPersonInfo(p2);
}
