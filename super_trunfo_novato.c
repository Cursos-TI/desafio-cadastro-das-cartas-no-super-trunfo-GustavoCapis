#include <stdio.h>

int main()
{

    // Variáveis para a Carta 1

    char estado1;     // Armazena inicial do Estado
    char codigo1[4];  // Armazena código da carta: letra do Estado+número
    char cidade1[50]; // Armazena o nome da cidade

    int população1, turismo1; // Armazena o nºde habitantes da cidade e nº de pontos turisticos

    float pib1, area1; // Armazena PIB e Area em km2 da cidade

    // Variáveis para a Carta 2

    char estado2;     // Armazena inicial do Estado
    char codigo2[4];  // Armazena código da carta: letra do Estado+número
    char cidade2[50]; // Armazena o nome da cidade

    int população2, turismo2; // Armazena o nºde habitantes da cidade e nº de pontos turisticos

    float pib2, area2; // Armazena PIB e Area em km2 da cidade

    // Leitura dos dados da carta 1

    printf("Carta 1: \n");

    // Quero que o usuário digite na mesma linha da pergunta, então não utilizarei \n
    printf("Estado: ");
    scanf(" %c", &estado1); // %c imprime um unico caractere

    printf("Código: ");
    scanf("%s", codigo1); // %s é usado para strings (+ de 1 caracter) e não precisa de & antes da variável

    printf("Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &população1); // o especificador %d é usado p/ números inteiros

    printf("Área: ");
    scanf("%f", &area1); // especificador %f é para números decimais

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &turismo1);

    // Leitura dos dados da carta 2

    printf("Carta 2: \n");

    // Quero que o usuário digite na mesma linha da pergunta, então não utilizarei \n
    printf("Estado: ");
    scanf(" %c", &estado2); // %c imprime um unico caractere

    printf("Código: ");
    scanf("%s", codigo2); // %s é usado para strings (+ de 1 caracter) e não precisa de & antes da variável

    printf("Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &população2); // o especificador %d é usado p/ números inteiros

    printf("Área: ");
    scanf("%f", &area2); // especificador %f é para números decimais

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turisticos: ");
    scanf("%d", &turismo2);

    // Exibição dos dados da Carta 1

    printf("\n Carta 1: \n");

    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", população1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turismo1);

    // Exibição dos dados da Carta 2

    printf("\n Carta 2: \n");

    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", população2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);

    return 0;
}
