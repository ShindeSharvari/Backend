



struct Book {
    char bookName[30];
    char author[50];
    char publisher[50];
    int pages;
    int price;
    char isbnCode[30];
    char eBookAvailability;
    char bookType[30];
    int publishedYear;
};

// Function to display Book info
void displayBookInfo(struct Book b) {
    printf("\n--------------Book Details----------------");
    printf("\nBook Name       : %s", b.bookName);
    printf("\nAuthor          : %s", b.author);
    printf("\nPublisher       : %s", b.publisher);
    printf("\nPages           : %d", b.pages);
    printf("\nPrice           : %d", b.price);
    printf("\nISBN Code       : %s", b.isbnCode);
    printf("\nE-Book Available: %c", b.eBookAvailability);
    printf("\nBook Type       : %s", b.bookType);
    printf("\nPublished Year  : %d", b.publishedYear);
    printf("\n------------------------------------------\n");
}

int main() {
    struct Book b1 = {
        "The C Programming Language",
        "Brian W. Kernighan",
        "Prentice Hall",
        274,
        450,
        "978-0131103627",
        'Y',
        "Programming",
        1988
    };
    displayBookInfo(b1);


    struct Book b2;
    strcpy(b2.bookName, "Let Us C");
    strcpy(b2.author, "Yashavant Kanetkar");
    strcpy(b2.publisher, "BPB Publications");
    b2.pages = 400;
    b2.price = 500;
    strcpy(b2.isbnCode, "978-8176561062");
    b2.eBookAvailability = 'N';
    strcpy(b2.bookType, "Programming");
    b2.publishedYear = 2016;

    displayBookInfo(b2);

    return 0;
}

