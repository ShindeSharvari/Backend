
// Structure for Room
struct Room
{
    int roomNo;
    int totalBalcony;
    float area;
    int floor;
    char color[10];
};

// Function to display Room info
void displayRoomInfo(struct Room r)
{
    printf("\n--------------Room Details----------------");
    printf("\nRoom No       : %d", r.roomNo);
    printf("\nTotal Balcony : %d", r.totalBalcony);
    printf("\nArea          : %.2f sq.ft", r.area);
    printf("\nFloor         : %d", r.floor);
    printf("\nColor         : %s", r.color);
    printf("\n------------------------------------------\n");
}

int main()
{
    struct Room r1 = {101, 2, 450.5, 3, "Blue"};
    displayRoomInfo(r1);


    struct Room r2;
    r2.roomNo = 202;
    r2.totalBalcony = 1;
    r2.area = 300.0;
    r2.floor = 2;
    strcpy(r2.color, "White");
    displayRoomInfo(r2);

    return 0;
}



