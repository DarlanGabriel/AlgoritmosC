#include <stdio.h>
#include <stdlib.h>

int validarCPF(int *cpf){
	int result1 = 0, result2 = 0;
	int i = 0;
	while(i < 9){
		result1 = result1 + cpf[i] * (10 - i);
		result2 = result2 + cpf[i] * (11 - i);
		i++;
	}
	result2 = result2 + cpf[i] * (10 - i);
	printf("%d \n", result1);
	printf("%d \n", result2);
	result1 = result1 % 11;
	result2 = result2 % 11;
	printf("%d \n", result1);
	printf("%d \n", result2);
	if(cpf[9] == 0){
		if(result1 > 1){
			printf("Primeiro");
			return 0;
		}
	}else{
		result1 = 11 - result1;
		if(result1 != cpf[9]){
			printf("Segundo");
			return 0;
		}
	}
	if(cpf[10] == 0){
		if(result2 > 1){
			printf("Terceiro");
			return 0;
		}
	}else{
		result2 = 11 - result2;
		if(result2 != cpf[10]){
			printf("%d \n %d \n", result2, cpf[10]);
			return 0;
		}
	}
	return 1;
}

int* converterCPF(char *cpf){
	int *vetor;
	vetor = (int*) malloc(11*sizeof(int));
	for(int i = 0; i < 11; i++){
		vetor[i] = (cpf[i] - '0');
	}
	return vetor;
}
