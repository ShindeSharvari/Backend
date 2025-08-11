
// Structure for Watch
struct Watch {
    char brand[20];
    int price;
    float dialSize;
    char color[10];
    char material[20];
};

// Function to display Watch info
void displayWatchInfo(struct Watch w) {
    printf("\n--------------Watch Details----------------");
    printf("\nBrand     : %s", w.brand);
    printf("\nPrice     : %d", w.price);
    printf("\nDial Size : %.2f inches", w.dialSize);
    printf("\nColor     : %s", w.color);
    printf("\nMaterial  : %s", w.material);
    printf("\n--------------------------------------------\n");
}

int main() {

    struct Watch w1 = {"Titan", 4999, 1.75, "Black", "Leather"};
    displayWatchInfo(w1);

    struct Watch w2;
    strcpy(w2.brand, "Fastrack");
    w2.price = 2999;
    w2.dialSize = 1.5;
    strcpy(w2.color, "Silver");
    strcpy(w2.material, "Metal");

    displayWatchInfo(w2);

    return 0;
}
