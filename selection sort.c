#include <stdio.h>
#include <stdlib.h>
#define n 5

void selection_sort(int num[], int tam) {
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++){
     min = i;
     for (j = (i+1); j < tam; j++) {
        printf("\n\nFixado o elemento %d para trocar por menor", num[i]);
        sleep(1);
        printf("\nComparando se atual menor %d e menor que %d", num[min], num[j]);
        sleep(2);
        if(num[j] < num[min]){
            printf("\n\nO menor passa a ser %d", num[j]);
            sleep(1);
            min = j;
        }
     }
     if (i != min) {
        aux = num[i];
        num[i] = num[min];
        num[min] = aux;
     }
  }
}

int main(){
    int escolha;
    int vetorAleatorio[n] = {3,4,1,5,2};
    int vetorOrdenado[n] = {1,2,3,4,5};
    int vetorInvertido[n] = {5,4,3,2,1};

    do{
        printf("============= MESA DE TESTE ============\n");
        printf("| 0 .............................. SAIR |\n");
        printf("| 1 .......... Vetor em Ordem Crescente |\n");
        printf("| 2 ........ Vetor em Ordem Decrescente |\n");
        printf("| 3 .......... Vetor em Ordem Aleatória |\n");
        printf("========================================\n");
        scanf("%d", &escolha);
        system("cls");
        switch (escolha)
        {
        case 0:
            printf("Obrigado!\n");
            break;
        case 1:
            printf("O vetor ordenado sera: ");
            for(int i = 0;i < n; i++){
                printf("%d -", vetorOrdenado[i]);
            }
            selection_sort(vetorOrdenado,n);
            printf("\n");
            for(int i = 0;i < n; i++){
                printf("%d -", vetorOrdenado[i]);
            }

            printf("\n\n\n");
            break;
        case 2:
            printf("O vetor ordenado sera: ");
            for(int i = 0;i < n; i++){
                printf("%d -", vetorInvertido[i]);
            }
            selection_sort(vetorInvertido,n);
            printf("\n");
            for(int i = 0;i < n; i++){
                printf("%d -", vetorInvertido[i]);
            }

            printf("\n\n\n");
            break;
        case 3:
            printf("O vetor ordenado sera: ");
            for(int i = 0;i < n; i++){
                printf("%d -", vetorAleatorio[i]);
            }
            selection_sort(vetorAleatorio,n);
            printf("\n");
            for(int i = 0;i < n; i++){
                printf("%d -", vetorAleatorio[i]);
            }

            printf("\n\n\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }

    }while(escolha != 0);

    system("pause");
    return 0;
}
