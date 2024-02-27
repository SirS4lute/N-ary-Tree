#include <stdio.h>
#include <stdlib.h>
#include "arv_n_aria.h"
#include "arv_n_aria.c"

int main(){
    ArvNaria noh, noh2;
    noh = inicializa(10);
    
    insere(noh, 11, 10);
    insere(noh, 12, 10);
    insere(noh, 13, 10);
    
    noh2 = inicializa(20);
    
    adicionaArvNaria(noh, noh2); //os parentes indincam os primogenitos e irmãos
    exibirArvore(noh); //ex: 10(11()12()) 10 possuí como primogenito 11 e tem como filho e irmão de 11 o número 12
    
    if(estaNaArv(noh, 11))
        printf("\ntrue\n");
    
    destruirArvNaria(noh);
    exibirArvore(noh);
        
    
    
    
    return 0;
}