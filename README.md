
# Sistema de Gestão de Hospedagem
Este programa em C implementa um sistema simples de gestão de hospedagem em um hotel. O sistema inclui funções para realizar check-in, check-out e visualizar o estado dos quartos.

## Estruturas de Dados
### quarto
```C
typedef struct quarto {
    int num;        // número do quarto
    char categoria; // [S]olteiro / [F]amiliar
    char status;    // [L]ivre / [O]cupado
} quarto;
```
Representa as informações de um quarto, incluindo número, categoria e status.

### hospede

```C
typedef struct hospede {
    int quarto;         // número do quarto
    char nome[80];
    int acompanhante;   // quantidade de acompanhantes
    char categoria;     // [S]olteiro / [F]amiliar
    int dias;           // tempo de permanência – em dias
} hospede;
```
Representa as informações de um hóspede, incluindo o quarto ocupado, nome, quantidade de acompanhantes, categoria e tempo de permanência.

## Funções
`void iniciador_quarto(quarto **main_ptr, int qtd_quartos, int qtd_quartos_solteiro)`
Inicializa a lista de quartos, alocando memória dinamicamente e configurando as informações dos quartos com base na quantidade total e na quantidade de quartos solteiros.

`void exibir_quartos(quarto *pQuartos, int qtd)`
Exibe as informações de todos os quartos, incluindo número, status e categoria.

`void analisar_espaco(quarto *pQuarto, int qtd, hospede *pHospede)`
Solicita a quantidade de pessoas que irão se hospedar e realiza algumas operações de análise de espaço (ainda não totalmente implementado).

## Menu de Opções
**Check-in**: Permite ao usuário realizar um check-in e analisar a disponibilidade de quartos.

**Check-out**: Ainda não implementado.

**Ver Quartos**: Exibe as informações de todos os quartos.

**Sair**: Encerra o programa.

## Como usar
- Compile o programa usando um compilador C.
- Execute o programa.
- Escolha uma opção do menu para interagir com o sistema de gestão de hospedagem.
