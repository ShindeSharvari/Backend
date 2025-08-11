

// Structure for Account
struct Account {
    char accountHolderName[50];
    int accountNo;
    char accountType[20];
    char accountBankName[30];
    float balance;
    char branchName[30];
    char ifscCode[15];
};

// Function to display Account info
void displayAccountInfo(struct Account a) {
    printf("\n--------------Account Details----------------");
    printf("\nAccount Holder : %s", a.accountHolderName);
    printf("\nAccount No     : %d", a.accountNo);
    printf("\nAccount Type   : %s", a.accountType);
    printf("\nBank Name      : %s", a.accountBankName);
    printf("\nBranch Name    : %s", a.branchName);
    printf("\nIFSC Code      : %s", a.ifscCode);
    printf("\nBalance        : %.2f", a.balance);
    printf("\n---------------------------------------------\n");
}

int main() {
    struct Account a1 = {
        "Sharvari Shinde",
        123456789,
        "Savings",
        "State Bank of India",
        25000.50,
        "Pune Main Branch",
        "SBIN0000456"
    };
    displayAccountInfo(a1);


    struct Account a2;
    strcpy(a2.accountHolderName, "Shravan Shinde");
    a2.accountNo = 987654321;
    strcpy(a2.accountType, "Current");
    strcpy(a2.accountBankName, "Canara Bank");
    a2.balance = 50000.75;
    strcpy(a2.branchName, "Mumbai Fort Branch");
    strcpy(a2.ifscCode, "CNRB0001234");

    displayAccountInfo(a2);

    return 0;
}
