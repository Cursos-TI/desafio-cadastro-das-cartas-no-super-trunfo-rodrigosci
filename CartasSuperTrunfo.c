#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigodacarta[2]; // Código da carta (3 dígitos)
    char nomecidade[50];
    char estado[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da carta (2 dígitos): ");
    scanf("%2s", codigodacarta);

    printf("Digite o nome da cidade: ");
    scanf("%49s", nomecidade);

    printf("Digite o estado da cidade (UF): ");
    scanf("%49s", estado);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n--- Dados da Carta Cadastrada ---\n");
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomecidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("-------------------------------\n");
    // Sugestão: Após exibir os dados, você pode adicionar uma opção para o usuário cadastrar outra carta ou encerrar o programa.
    char continuar;
    printf("Deseja cadastrar outra carta? (s/n): ");
    scanf(" %c\n", &continuar);
    if (continuar == 's' || continuar == 'S') {
        main();  // Chama a função main novamente para cadastrar outra carta
    }
    // Caso contrário, encerra o programa.
    printf("Programa encerrado.\n");

    
    printf("Obrigado por usar o sistema de cadastro de cartas!\n");
    printf("Até logo!\n");
    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
