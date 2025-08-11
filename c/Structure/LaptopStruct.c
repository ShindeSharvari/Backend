

struct Laptop {
    char modelName[30];
    char processor[20];
    char generation[10];
    char operatingSystem[20];
    float screenSize;
    float memory;
};

void displayLaptopInfo(struct Laptop l) {
    printf("\n--------------Laptop Details----------------");
    printf("\nModel Name      : %s", l.modelName);
    printf("\nProcessor       : %s", l.processor);
    printf("\nGeneration      : %s", l.generation);
    printf("\nOperating System: %s", l.operatingSystem);
    printf("\nScreen Size     : %.1f inches", l.screenSize);
    printf("\nMemory          : %.1f GB", l.memory);
    printf("\n---------------------------------------------\n");
}

int main() {
    struct Laptop l1 = {
        "Dell XPS 15",
        "Intel i7",
        "12th Gen",
        "Windows 11",
        15.6,
        16
    };
    displayLaptopInfo(l1);

    struct Laptop l2;
    strcpy(l2.modelName, "Apple MacBook Air M2");
    strcpy(l2.processor, "Apple M2");
    strcpy(l2.generation, "2022");
    strcpy(l2.operatingSystem, "macOS Ventura");
    l2.screenSize = 13.6;
    l2.memory = 8;
    displayLaptopInfo(l2);

    return 0;
}
