#include <stdio.h>
#include <stdlib.h>

typedef struct hospede{
	int quarto; // número do quarto
	char nome[80];
	int acompanhante; // quantidade de acompanhantes
	char categoria; // [S]olteiro / [F]amiliar
	int dias; // tempo de permanência – em dias
} hospede;

typedef struct quarto{
	int num; // número do quarto
	char categoria; // [S]olteiro / [F]amiliar
	char status; // [L]ivre / [O]cupado
} quarto;

void iniciador_quarto(quarto **main_ptr, int qtd_quartos, int qtd_quartos_solteiro);

void exibir_quartos(quarto *pQuartos, int qtd);

void analisar_espaco(quarto *pQuarto, int qtd);


int main(){
    int quantidade_quartos = 15;
    int quantidade_quartos_solteiros = 5;
    int menu;

    quarto *pQuartos = NULL; // Inicializar o ponteiro

    iniciador_quarto(&pQuartos, quantidade_quartos, quantidade_quartos_solteiros);

    while(menu != 4){
        printf("****** MENU ******");
        printf("\n[1]Check-in\n[2]Check-out\n[3]Ver Quartos\n[4]Sair");
        printf("\nEscolha a opcao... ");
        scanf("%d", &menu);

        if(menu == 1){
            analisar_espaco(pQuartos, quantidade_quartos);
        }
        else if(menu == 2){

        }
        else if(menu == 3){
            exibir_quartos(pQuartos, quantidade_quartos);
        }
    }


}

void iniciador_quarto(quarto **main_ptr, int qtd_quartos, int qtd_quartos_solteiro){
    quarto *pQuartos = NULL;
    int i;
    char categoria;

    pQuartos = (quarto *)realloc(pQuartos, sizeof(quarto) * qtd_quartos);

    for(i = 0; i < qtd_quartos; i++){
        if(i < qtd_quartos_solteiro){
            categoria = 'S';
        }
        else{
            categoria = 'F';
        }
    (pQuartos + i)->num = i + 1;
    (pQuartos + i)->categoria = categoria;
    (pQuartos + i)->status = 'L';
    }
    *main_ptr = pQuartos;

}

void exibir_quartos(quarto *pQuartos, int qtd){
    int i;
    for(i = 0; i < qtd; i++){
        printf("\nQuarto N: %d", (pQuartos + i)->num);
        printf("\nStatus: %c", (pQuartos + i)->status);
        printf("\nCategoria: %c", (pQuartos + i)->categoria);
        printf("\n**************\n");
    }
}

void analisar_espaco(quarto *pQuarto, int qtd, hospede *pHospede){
    hospede *pPessoas = NULL;
    int i;

    printf("Quantas pessoas irao se hospedar: ");
    scanf("%d", &(pPessoas - 1)->acompanhante);

}
