

struct Circle {
    float radius;
    char color[20];
    float thicknessBorder;
    char borderStyle[20];
};

void displayCircleInfo(struct Circle c) {
    printf("\n--------------Circle Details----------------");
    printf("\nRadius          : %.2f", c.radius);
    printf("\nColor           : %s", c.color);
    printf("\nBorder Thickness: %.2f", c.thicknessBorder);
    printf("\nBorder Style    : %s", c.borderStyle);
    printf("\nArea            : %.2f", 3.1416 * c.radius * c.radius);
    printf("\nCircumference   : %.2f", 2 * 3.1416 * c.radius);
    printf("\n---------------------------------------------\n");
}

int main() {
    struct Circle c1 = {5.0, "Red", 2.5, "Solid"};
    displayCircleInfo(c1);

    struct Circle c2;
    c2.radius = 7.5;
    strcpy(c2.color, "Blue");
    c2.thicknessBorder = 1.8;
    strcpy(c2.borderStyle, "Dashed");
    displayCircleInfo(c2);

    return 0;
}
