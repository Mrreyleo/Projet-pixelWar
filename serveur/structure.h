typedef struct User{
    int socketClient;
    struct sockaddr_in *sockin;
    int pixel;
    time_t time;
    struct User *suivant;
    struct User *precedent;
} User;

typedef struct Matrix{
    int width;
    int height;
    int pixel_min;
    char ***pixels;
} Matrix;

typedef struct DisconnectedUser{
    int pixel;
    time_t time;
    char *ip;
    struct DisconnectedUser *suivant;
    struct DisconnectedUser *precedent;

} DisconnectedUser;

//Mise à 0 de la matrice
Matrix initMatrix(Matrix m);
//Réglage par taille
void initPixelsMatrix(Matrix *m);
//free pour éviter les fuites de mémoires
void freeMatrix(Matrix m);
