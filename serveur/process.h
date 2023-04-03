//Gestion de la taille du tableau
struct pollfd *reallocPoll(struct pollfd *tabPoll, User *userList, int socketEcoute, int * size);
//Lecture de commande
void readCommand(char *messageRecu, char *messageEnvoi,Matrix *m, User *user);
//Intialiser le server avec les paramètres
void setServer(int argc, char *argv[], int *PORT, Matrix *matrix);
//Le minteur pour poser les pixels
void timeOut( User *userList, Matrix *matrix);
