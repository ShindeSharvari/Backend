

struct Country {
    char countryName[50];
    char countryCode[5];
    char capital[50];
    char famousFor[100];
    char presidentName[50];
    int numberOfStates;
    long population;
    char currency[30];
    char officialLanguage[30];
    char continent[30];
};

void displayCountryInfo(struct Country c) {
    printf("\n--------------Country Details----------------");
    printf("\nCountry Name      : %s", c.countryName);
    printf("\nCountry Code      : %s", c.countryCode);
    printf("\nCapital           : %s", c.capital);
    printf("\nFamous For        : %s", c.famousFor);
    printf("\nPresident         : %s", c.presidentName);
    printf("\nNumber of States  : %d", c.numberOfStates);
    printf("\nPopulation        : %ld", c.population);
    printf("\nCurrency          : %s", c.currency);
    printf("\nOfficial Language : %s", c.officialLanguage);
    printf("\nContinent         : %s", c.continent);
    printf("\n----------------------------------------------\n");
}

int main() {
    struct Country india = {
        "India",
        "IN",
        "New Delhi",
        "Taj Mahal, Diverse Culture, Cricket",
        "Droupadi Murmu",
        28,
        1428627663,
        "Indian Rupee",
        "Hindi",
        "Asia"
    };
    displayCountryInfo(india);

    struct Country china;
    strcpy(china.countryName, "China");
    strcpy(china.countryCode, "CN");
    strcpy(china.capital, "Beijing");
    strcpy(china.famousFor, "Great Wall, Pandas, Tea");
    strcpy(china.presidentName, "Xi Jinping");
    china.numberOfStates = 23;
    china.population = 1411778724;
    strcpy(china.currency, "Renminbi (Yuan)");
    strcpy(china.officialLanguage, "Mandarin");
    strcpy(china.continent, "Asia");

    displayCountryInfo(china);

    return 0;
}
