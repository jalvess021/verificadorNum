#include <stdio.h>
#include <stdbool.h>

bool status; //status do numero

//verificar o numero
int verify(int num) {
     status = (num % 2 == 0) ? true : false;
     return status;
}

int main() {

    int numInicial, numFinal, num, par = 0;
    printf("Digite o número inicial: ");
    scanf("%d", &numInicial);
    printf("Digite o número final: ");
    scanf("%d", &numFinal);

    do {
	    for (num = numInicial; num <= numFinal; num++) {
            if (verify(num) == true) {
                printf("%d é par\n", num);
                par++; //conta o número de par
            } else {
                printf("%d é ímpar\n", num);
            }
        }

        if (numInicial > numFinal){
            printf("Sem registros! O número inicial não pode ser menor que o número final.\n");
        } else{
            printf("Foram encontrados %d números pares.\n", par);
        }

    return 0;
	} while(numFinal >= numInicial);
    
   
}

