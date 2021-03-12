#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int n;
    printf("\t----------Conjectura de Collatz----------\n\n");
    printf("Esta conjectura aplica-se a qualquer numero natural, e afirma: Para, se este numero for par, o dividir por 2 (/2),");
    printf("e se for impar, para multiplicar por 3 e adicionar 1 (*3+1). Desta forma, por exemplo, se a sequencia iniciar com o numero 5 teremos: 5; 16; 8; 4; 2; 1. A conjectura apresenta uma regra dizendo que, qualquer numero natural, quando aplicado a esta regra, eventualmente sempre chegara a 4, que se converte em 2 e termina em 1. Essa sequencia em questao tambem pode ser chamada de Numeros de Granizo ou Numeros Maravilhosos. A explicaçao destes ultimos nomes esta em -como o granizo nas nuvens antes de cair, os números saltam de um lugar ao outro antes de chegar ao 4, 2, 1-\n\n");
    printf("Escreva seu numero (limite 15 digitos): ");
    scanf("%lld",&n);
    if (n>999999999999999){
                    printf("Numero demasiadamente grande. Pressione para sair.");
                return -1;
            }
    while (n!=1){
        if (n%2==0){
            n = n/2;
        printf("Par(n/2)     = %lld\n",n);
        }else{
            n = n*3+1;
            printf("Impar(n*3+1) = %lld\n",n);
        }
    }
    return 0;
}
