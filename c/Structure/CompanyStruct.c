

struct Company {
    char companyName[50];
    int foundedYear;
    int numberOfEmployees;
    char founder[50];
    char CEO[50];
    double turnover;
    char origin[50];
};

void displayCompanyInfo(struct Company c) {
    printf("\n--------------Company Details----------------");
    printf("\nCompany Name     : %s", c.companyName);
    printf("\nFounded Year     : %d", c.foundedYear);
    printf("\nNo. of Employees : %d", c.numberOfEmployees);
    printf("\nFounder          : %s", c.founder);
    printf("\nCEO              : %s", c.CEO);
    printf("\nTurnover (B USD) : %.2f", c.turnover);
    printf("\nOrigin           : %s", c.origin);
    printf("\n---------------------------------------------\n");
}

int main() {
    struct Company c1 = {
        "Apple Inc.",
        1976,
        164000,
        "Steve Jobs",
        "Tim Cook",
        394.3,
        "USA"
    };
    displayCompanyInfo(c1);

    struct Company c2;
    strcpy(c2.companyName, "Samsung Electronics");
    c2.foundedYear = 1938;
    c2.numberOfEmployees = 267937;
    strcpy(c2.founder, "Lee Byung-chul");
    strcpy(c2.CEO, "Han Jong-hee");
    c2.turnover = 236.8;
    strcpy(c2.origin, "South Korea");

    displayCompanyInfo(c2);

    return 0;
}
