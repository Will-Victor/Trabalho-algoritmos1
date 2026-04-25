#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float a, b, c, delta, x1, x2;

    while (1) {
        printf("\n=== MENU PRINCIPAL ===\n");
        printf("1 - Resolver equacao do primeiro grau (mostrar passos)\n");
        printf("2 - Resolver equacao do segundo grau (mostrar passos)\n");
        printf("3 - Sobre o Programa\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;
        }

        if (opcao == 1) {
            printf("\n--- EQUACAO DO 1 GRAU (ax + b = 0) ---\n");
            printf("Digite o valor de a: "); scanf("%f", &a);
            printf("Digite o valor de b: "); scanf("%f", &b);

            if (a == 0) {
                printf("Erro: 'a' nao pode ser zero em uma equacao do 1 grau.\n");
            } else {
                printf("\nPasso 1: Isolar o termo com x -> %.2fx = %.2f\n", a, -b);
                printf("Passo 2: Passar o %.2f dividindo -> x = %.2f / %.2f\n", a, -b, a);
                printf("Resultado: x = %.2f\n", -b / a);
            }
        } 
        else if (opcao == 2) {
            printf("\n--- EQUACAO DO 2 GRAU (ax^2 + bx + c = 0) ---\n");
            printf("Digite a: "); scanf("%f", &a);
            printf("Digite b: "); scanf("%f", &b);
            printf("Digite c: "); scanf("%f", &c);

            if (a == 0) {
                printf("Erro: Se 'a' e zero, a equacao e do 1 grau.\n");
            } else {
                delta = (b * b) - (4 * a * c);
                printf("\nPasso 1: Calcular o Delta\n");
                printf("Delta = (%.2f)^2 - 4 * %.2f * %.2f = %.2f\n", b, a, c, delta);

                if (delta < 0) {
                    printf("Como o Delta e negativo (%.2f), nao existem raizes reais.\n", delta);
                } else {
                    printf("Passo 2: Calcular as raizes usando Bhaskara\n");
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    
                    printf("x1 = (-%.2f + %.2f) / %.2f = %.2f\n", b, sqrt(delta), 2*a, x1);
                    printf("x2 = (-%.2f - %.2f) / %.2f = %.2f\n", b, sqrt(delta), 2*a, x2);
                    printf("Resultado: x1 = %.2f e x2 = %.2f\n", x1, x2);
                }
            }
        }
        else if (opcao == 3) {
            printf("\n=== SOBRE O PROGRAMA ===\n");
            printf("Nomes: William Boava, Abraão Lira\n");
            printf("Disciplina: Algoritmos I\n");
            printf("Instituicao: UNIAVAN\n");
        }
        else {
            printf("\nOpcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}

