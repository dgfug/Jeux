#include <stdio.h>
#include <stdlib.h>

int main()
{
    int heureTravail = 0, verif = 5;
    printf("=== Bienvenue sur le site de la SNCF ===\n=== Combien d'heure allez vous travailler aujourd'hui ? ===\n");
    scanf("%d", &heureTravail);
    printf("Etes vous sur de travailler %d heure(s) ?\n1 => Oui.\n0 => Non.\n", heureTravail);
    scanf("%d", &verif);

while ( verif == 0 )
{
    if (verif == 0 && verif != 1)
    {
        printf("Bah verifie tes heures debile ! Entre les a nouveau !\n");
        scanf("%d", &heureTravail);
        printf("Etes vous sur de travailler %d heure(s) ?\n1 => Oui.\n0 => Non.\n", heureTravail);
        scanf("%d", &verif);
    }
    
    else if (verif == 1)
    {
        printf("Très bien, tu est donc en greve a partir de maintenant :)\n\n");
    }

}
return 0;
}