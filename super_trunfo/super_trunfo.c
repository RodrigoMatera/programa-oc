#include <stdio.h>

int main() {

// Definição de Variáveis Para a Primeira Carta do Jogo Super Trunfo
    char Estado [30];
    char Codigo [10];
    char Cidade [30];
    int Populacao;
    float Extensao;
    float Pib;
    int Turismo;

// Início do Processo de Interação com o Usuário
// Solicitação do Estado Escolhido

    printf("Digite o Estado escolhido: \n");
    scanf("%s", &Estado);

// Solicitação do Código da Carta

    printf("Digite o Código da carta: \n");
    scanf("%s", &Codigo);

// Solicitação da Cidade Escolhida

    printf("Digite a Cidade escolhida: \n");
    scanf("%s", &Cidade);

// Solicitação do Número de Habitantes

    printf("Digite o tamanho da População: \n");
    scanf("%d", &Populacao);

// Solicitação da Extensão da Cidade em KM

    printf("Digite a Extensão em quilômetros da cidade: \n");
    scanf("%f", &Extensao);

// Solicitação do Pib da Cidade

    printf("Digite o Pib da Cidade: \n");
    scanf("%f", &Pib);

// Solicitação do Número de Pontos Turísticos da Cidade

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo);

// Início do Processo de Demonstração dos Dados Inseridos Pelo Usuário
// Demonstrar o Estado Escolhido

    printf("Estado escolhido: %s", Estado);

// Demonstrar o Código da Carta Escolhido

    printf("Codigo escolhido: %s", Codigo);

// Demonstrar a Cidade Escolhida

    printf("Cidade escolhida: %s", Cidade);

// Demonstrar a População da Cidade

    printf("Populacao da cidade: %d", Cidade);

// Demonstrar a Extensão da Cidade em KM

    printf("Extensão da cidade: %f", Extensao);

// Demonstrar o PIB da Cidade

    printf("Pib da cidade: %f", Pib);

// Demonstrar o Número de Pontos Turísticos da Cidade

    printf("Pontos turisticos da cidade: %d", Turismo);

    return 0





}