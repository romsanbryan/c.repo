#include <stdio.h>
#include <string.h>

void bucle(char *lista, char *valor, int replace);
int main() {

    char palou[] = "E"; 
    int valoru = 1;

    if (((valoru > 0 && valoru<8) || (valoru>9 && valoru < 13)) && (strcmp(palou, "O")== 0 || strcmp(palou, "B")== 0 || strcmp(palou, "C")== 0 || strcmp(palou, "E")== 0)){
       
        char p[8] =  "";
        char cabecera[50] =  "+------------+\n";
        char hueco[50] =  "|            |\n";
        char v[8] = "";

        char huecoNumero[50];
        strcpy (huecoNumero,hueco);

        char huecoPalo[50];
        strcpy (huecoPalo,hueco);

        char huecoNumeroR[50];
        strcpy (huecoNumeroR,hueco);


        if (strcmp(palou, "B") == 0) {
            strcpy(p, "BASTOS");
        }
        if (strcmp(palou, "O") == 0) {
            strcpy(p, "OROS");
        }
        if (strcmp(palou, "C") == 0) {
            strcpy(p, "COPAS");
        }
        if (strcmp(palou, "E") == 0) {
            strcpy(p, "ESPADAS");
        }

        switch (valoru)
        {
        case 1:
            strcpy(v, "AS");
            break;
        case 10:
            strcpy(v, "SOTA");
            break;
        case 11:
            strcpy(v, "CABALLO");
            break;
        case 12:
            strcpy(v, "REY");
            break;
        default:
            v[0] = valoru+'0';
            break;
        }

        printf("%s", cabecera);
        bucle(huecoNumero, v, 1);
        bucle(huecoPalo, p, 1);
        for (int i = 0; i < 4; i++){
            printf("%s", hueco);
        }
        bucle(huecoNumeroR,v, 11-strlen(v));
        printf("%s", cabecera);

        printf("\n\n\n\n\n\n\n");
    } else
        printf("Pero pon valores de la baraja española animal....\n\n\n\n\n\n\n");
    


    return 26;
}

void bucle(char *lista , char *valor, int replace){
        for (int i = 0; i < strlen(valor); i++)  {
        replace ++;
            lista[replace] = valor[i];
        }
        printf("%s",lista);
}
