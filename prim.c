#include <stdio.h>

void helloworld(void);

int somaVetor(int*, int);

int validarCPF(int*);

int* converterCPF(char*);

int main(void){
	/*
	 * helloworld();
	 */

	/*
	 * int x, tamanho;
	 * int vetor[] = {1, 2, 3, 4, 5, 6};
	 * tamanho = sizeof(vetor)/sizeof(vetor[0]);
	 * x = somaVetor(vetor, tamanho);
	 * printf("%d", x);
	 */

	char str[12];
	int r;
	printf("Coloque o cpf");
	scanf("%11s",str);
	r = validarCPF(converterCPF(str));
	if(r == 0){
		printf("CPF INVALIDO");
	}else{
		printf("CPF VALIDO");
	}

	return 0;
}
