int somaVetor(int* vetor, int tamanho){
	int soma = 0;
	for(int i = 0; i < tamanho; i++){
		soma = soma + vetor[i];
	}
	return soma;
}
