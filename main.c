#include<stdio.h>
#include<conio.h>

int main(){
    int num, i, resto;
    
    printf("Escreve o n£mero do qual queres os dividores: ");
    scanf("%d",&num); // Lê a variável num
    for(i=1; i<=num; i++){ // Comando de repetição
        resto = num & i; // Módulo de 'num' por 'i'
        if(resto==0) printf("%d ",i);
        // Se o resto for igual a zero, 'i' é divisor de 'num'
    }
    getch(); // Para pausar o programa
}
