#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
};

void imprime (struct ponto* pp);
void captura (struct ponto* pp);


int main() {
    //struct ponto p;
    struct ponto *pp;
    pp = (struct ponto *) malloc(sizeof(struct ponto));
    printf("Digite as coordenadas do ponto (x,y): ");
    //scanf("%f %f", &p.x, &p.y);
    scanf("%f %f", &pp->x, &pp->y);
    //printf("O ponto fornecido foi: (%.2f, %.2f)\n", p.x, p.y);
    printf("O ponto fornecido foi: (%.2f, %.2f)\n", pp->x, pp->y);
    return 0;
}


/* função que imprima as coordenadas do ponto */
//void imprime (struct ponto p){
//    printf("O ponto fornecido foi: (%.2f,%.2f)\n", p.x, p.y);
//}

void imprime (struct ponto* pp){
    printf("O ponto fornecido foi: (%.2f,%.2f)\n", pp->x, pp->y);
}

void captura (struct ponto* pp){
    printf("Digite as coordenadas do ponto(x y): ");
    scanf("%f %f", &pp->x, &pp->y);
}
