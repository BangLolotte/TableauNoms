#include <stdio.h>
#include <string.h>
/***********************************variable******************************/
char cTabname[6][255];
int choix =0;
int x, y;
/***********************************Prototype*****************************/
void saisienom ();
void affichage();
int menu ();
int action ();

/**********************************Définition***************************/


/*********************************saisinom**************************/
void saisienom() {
    char cTabsaisi[255];
    printf("veuillez saisir un nom. \n");
    scanf("%s", cTabsaisi);
    for (y = 0; y <= 5; y++) {
        cTabname[x][y] = cTabsaisi[y];
        choix = -1;
    }
    x++;
}

/**********************************menu *****************************************/
int menu() {
printf("quelle action voulez-vous faire ?\n 1-ajouter un nom\n 2-Afficher la liste\n");
scanf("%i", &choix);
return choix;
}

/**************************affichage*************************/

void affichage() {
    for (x = 0; x<=5 ; x++) {
        for (y = 0; y <= strlen(cTabname[x]); y++) {
            printf ("%c",  cTabname[x][y]);
            choix = -1;
        }
    }
}
/***************************action *****************************/
int action() {
        switch (choix) {
            case 1 :
                saisienom();
                break;
            case 2 :
                affichage();
                break;
        }
            return 0;
}


int main() {

    for (int i = 0; i<=6 ; i++)
    {
        menu();
        action();
    }
    return 0;
}