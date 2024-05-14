#include <stdio.h>
#include <stdlib.h>

int main(){
    
    printf("#######--Economy Mode(Modo Economia)--####### \n");
    
    float precoGasolina, precoEtanol;
    
    printf("Digite o preço da Gasolina: ");
    scanf(" %f", &precoGasolina);
    
    printf("Digite o preço do Etanol: ");
    scanf(" %f", &precoEtanol);
    
    float resultado = 0.70;
    
    if((precoGasolina * resultado) > precoEtanol){
        printf("A melhor opção é o Etanol!");
    }else if((precoGasolina * resultado) < precoEtanol){
        printf("A melhor opção é a Gasolina!");
    }else{
        printf("Os valores são equivalente!");
    }
    
    return 0;
}
