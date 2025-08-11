

struct Bike {
    char bikeName[30];
    char model[30];
    int price;
    float average;
    char type[10];
    char color[20];
    int engineCapacity;
};

void displayBikeInfo(struct Bike b) {
    printf("\n--------------Bike Details----------------");
    printf("\nBike Name       : %s", b.bikeName);
    printf("\nModel           : %s", b.model);
    printf("\nPrice           : %d", b.price);
    printf("\nAverage         : %.2f km/l or km/charge", b.average);
    printf("\nType            : %s", b.type);
    printf("\nColor           : %s", b.color);
    printf("\nEngine Capacity : %d cc", b.engineCapacity);
    printf("\n------------------------------------------\n");
}

int main() {
    struct Bike bullet = {
        "Royal Enfield",
        "Classic 350",
        190000,
        35.0,
        "Petrol",
        "Black",
        346
    };
    displayBikeInfo(bullet);

    struct Bike scooty;
    strcpy(scooty.bikeName, "Honda Activa");
    strcpy(scooty.model, "6G");
    scooty.price = 75000;
    scooty.average = 45.0;
    strcpy(scooty.type, "Petrol");
    strcpy(scooty.color, "Red");
    scooty.engineCapacity = 109;
    displayBikeInfo(scooty);

    return 0;
}
