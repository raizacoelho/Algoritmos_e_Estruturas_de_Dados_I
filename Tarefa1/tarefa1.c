# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/* A tabela ASCII foi utilizada como base -> A:65 a:97 -> 0 a 31. O approach foi a utilização de operações binárias, 
   que pareceu ser o meio mais simples de fazer o que foi pedido. */

char * longestNiceSubstring(char * s) {
    char *LNS = NULL; // LNS = longest nicest substring
    int tamanho = strlen(s), minuscula = 0, maiuscula = 0, and = 0, shift_esq = 0, comprimento = 0, indice = -1;
        
    for (int i = 0; i < tamanho; i++) {

        minuscula = maiuscula = 0; // zera os auxiliares de posição de caracteres.            

        for (int j = i; j < tamanho; j++){

            if (s[j] >= 'A' && s[j] <= 'Z') { // encontra a posição das letras maíusculas e guarda em 'maiuscula'
                and = s[j] & 31; // bitwise AND entre s[j] (string) e 31 (ASCII)
                shift_esq = 1 << and; // deslocamento a esquerda de 1 em 'and' posições (resultado da operação anterior)
                maiuscula = maiuscula | shift_esq; // bitwise OR entre 'maiuscula' e shift_esq
                //printf("%d", maiuscula);
            }

            if (s[j] >= 'a' && s[j] <= 'z') { // encontra a posição das letras minusculas e guarda em 'minuscula'
                and = s[j] & 31; 
                shift_esq = 1 << and;
                minuscula = minuscula | shift_esq;
                //printf("%d", minuscula);
            }
            
            /* bitwise XOR entre o resultado das operações maiuscula e minuscula. só será executada se ambos operandos tiverem resultado em 0, 
               significando que o caractere está presente tando maiasculo quanto minusculo.*/
            if ((maiuscula ^ minuscula) == 0) { 
                if (comprimento < j - i + 1) {
                    comprimento = j - i + 1;
                    indice = i; // "incrementa" o indice, que iniciou em -1, para servir como flag de que não será retornada string vazia.
                }
            }
        }
    }
    
    // no caso de não existir nenhuma substring adequada, retorna uma string vazia.
    if (indice == -1) { // o indice inicializado em -1 serviu de controle para esse caso e também para servir como 'starting point' 
        return "\0";                        // na copia da substring para outro ponteiro.
    }    
        
    LNS = (char *) malloc((comprimento)*sizeof(char)); // aloca espaço para a substring gerada (comprimento +1 para garantir espaço para o '\0');

    if (LNS == NULL) { // confere se é possível alocar memória para o ponteiro.
        printf("Não foi possível alocar memória.\n");
        return 0;
    }

    // utiliza a função strncpy para copiar para LNS a porção de 's' que contem a substring.
    strncpy(LNS, &s[indice], (comprimento));

    // esse pedaço de código é um teste para conferir o tamanho da substring gerada e a própria string.
    /*int teste = strlen(LNS);
    printf("teste: %d\n", teste);
    printf("teste2: %s\n", LNS);*/

    return LNS;
}

int main() {
    char s[100], *p = NULL, tamanho = 0; // string com limite de tamanho 100, como indicado.

    p = s; // link do ponteiro *p com a string s;

    printf("Entre com a frase (max 99 caracteres): ");
    gets(s);

    printf("A frase eh: %s\n", p);
 
    // printf("A substring mais longa e 'nice' dessa frase eh: %s", longestNiceSubstring(p));
    
    p = longestNiceSubstring(p);
    tamanho = strlen(p);

    printf("A substring mais longa e 'nice' dessa frase eh: ");
    for (int i = 0; i < tamanho - 1; i++){
        printf("%c", p[i]);
    }

    free(p); 

    return 0;
}

