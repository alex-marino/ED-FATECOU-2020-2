#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};

//typedef struct ponto {
//    float x;
//    float y;
//} Ponto;

typedef struct ponto Ponto;
typedef struct ponto *PPonto;

struct circulo {
    Ponto p;
    float r;
};

typedef struct circulo Circulo;

int interior (Circulo* c, Ponto* p);
float distancia (Ponto* p, Ponto* q);

int main (void){
    Circulo c;
    Ponto p;
    printf("Digite as coordenadas do centro e o raio do circulo:\n");
    scanf("%f %f %f", &c.p.x, &c.p.y, &c.r);
    printf("Digite as coordenadas do ponto:\n");
    scanf("%f %f", &p.x, &p.y);
    if (interior(&c,&p)){
        printf("Pertence ao interior do circulo\n");
    } else {
        printf("Não pertence ao interior do circulo\n");
    }

    return 0;
}


/* Função para determinar se um ponto está ou n~ao dentro de um círculo:
entrada: ponteiros para um círculo e para um ponto
saída:
1 = ponto dentro do círculo
0 = ponto fora do círculo
*/
int interior (Circulo* c, Ponto* p){
    float d = distancia(&c->p, p);
    return (d < c->r);
}
/* Fuunção para a calcular distância entre 2 pontos:
entrada: ponteiros para os pontos
saída: distância correspondente
*/
//sqrt da biblioteca math.h
float distancia (Ponto* p, Ponto* q){
    float d = sqrt((q->x - p->x)*(q->x - p->x) + (q->y - p->y)*(q->y - p->y));
    return d;
}
