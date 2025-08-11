
struct Mobile {
    char mobileModel[30];
    int price;
    float displaySize;
    char color[20];
    char storage[20];
    char operatingSystem[30];
    char waterProof;
};

// Function to display Mobile info
void displayMobileInfo(struct Mobile m) {
    printf("\n--------------Mobile Details----------------");
    printf("\nModel           : %s", m.mobileModel);
    printf("\nPrice           : %d", m.price);
    printf("\nDisplay Size    : %.2f inches", m.displaySize);
    printf("\nColor           : %s", m.color);
    printf("\nStorage         : %s", m.storage);
    printf("\nOperating System: %s", m.operatingSystem);
    printf("\nWaterproof      : %c", m.waterProof);
    printf("\n---------------------------------------------\n");
}

int main() {

    struct Mobile m1 = {
        "iPhone 14 Pro",
        129900,
        6.1,
        "Space Black",
        "256GB",
        "iOS 16",
        'Y'
    };
    displayMobileInfo(m1);

    struct Mobile m2;
    strcpy(m2.mobileModel, "Samsung Galaxy S23 Ultra");
    m2.price = 124999;
    m2.displaySize = 6.8;
    strcpy(m2.color, "Phantom Black");
    strcpy(m2.storage, "512GB");
    strcpy(m2.operatingSystem, "Android 13");
    m2.waterProof = 'Y';

    displayMobileInfo(m2);

    return 0;
}
