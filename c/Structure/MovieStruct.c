

struct Movie {
    char movieName[50];
    char directorName[50];
    char movieType[30];
    char movieActor[30];
    char movieActress[30];
    int movieReleasedYear;
    float movieBudget;
    char language[20];
    int duration;
    float imdbRating;
};

void displayMovieInfo(struct Movie m) {
    printf("\n--------------Movie Details----------------");
    printf("\nMovie Name     : %s", m.movieName);
    printf("\nDirector       : %s", m.directorName);
    printf("\nType           : %s", m.movieType);
    printf("\nActor          : %s", m.movieActor);
    printf("\nActress        : %s", m.movieActress);
    printf("\nRelease Year   : %d", m.movieReleasedYear);
    printf("\nBudget (Cr)    : %.2f", m.movieBudget);
    printf("\nLanguage       : %s", m.language);
    printf("\nDuration (min) : %d", m.duration);
    printf("\nIMDb Rating    : %.1f", m.imdbRating);
    printf("\n-------------------------------------------\n");
}

int main() {
    struct Movie m1 = {
        "Sholay",
        "Ramesh Sippy",
        "Action/Drama",
        "Amitabh Bachchan",
        "Hema Malini",
        1975,
        3.0,
        "Hindi",
        204,
        8.2
    };
    displayMovieInfo(m1);

    struct Movie m2;
    strcpy(m2.movieName, "Kakan");
    strcpy(m2.directorName, "Kranti Redkar");
    strcpy(m2.movieType, "Romantic Drama");
    strcpy(m2.movieActor, "Jitendra Joshi");
    strcpy(m2.movieActress, "Urmila Kanitkar");
    m2.movieReleasedYear = 2015;
    m2.movieBudget = 2.5;
    strcpy(m2.language, "Marathi");
    m2.duration = 122;
    m2.imdbRating = 7.4;
    displayMovieInfo(m2);

    return 0;
}
