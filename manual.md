
## Manual - Selection Sort

### Menu

No menu o usuário tem 3 opções de vetores, sendo
- O primeiro ordenado {1,2,3,4,5};
- O segundo invertido {5,4,3,2,1};
- O terceiro aleatório {3,4,1,5,2};

## 

- Em ambos, será impresso em tela os elementos na ordem atual.
- É chamado a função *selection_sort*;
- Será passado como parâmetro o vetor e número de elementos;
- Função executa a comparação e apresenta o resultado;

### Descrição do algorítmo

É composto por dois laços, um laço externo e outro interno. O laço externo serve para controlar o índice inicial e o interno percorre todo o vetor. Na primeira iteração do laço externo o índice começa de 0 e cada iteração ele soma uma unidade até o final do vetor e o laço mais interno percorre o vetor começando desse índice externo + 1 até o final do vetor. Isso ficará mais explícito no exemplo.

O primeiro laço o índice inicial é 0. O laço mais interno começa do índice 1 (índice_inicial_externo + 1) e percorre o vetor até achar o menor elemento, neste caso o número zero. O zero passa para a posição inicial do vetor que na primeira iteração do laço é 0.

Ao fim do laço interno, o laço externo incrementa uma unidade, agora a posição inicial do vetor passa a ser 1, pois o zero já se encontra no lugar dele, não é preciso mais fazer verificações pois ele é o menor elemento deste vetor. Agora o processo se repete, buscando o segundo menor elemento, neste caso o um.

Consequentemente o terceiro menor, quarto menor,...assim sucessivamente até o vetor está ordenado.
