#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool primo(int n){
	
	int k;
	
	for(k=2;k<n;k++){
		if (n%k==0){
			return false;	
		}
	}
	return true;
}

int main(int argc, char *argv[]) {

	setlocale(LC_ALL,"portuguese");
	
	int n,k;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n);
	
	printf("\nN�meros primos at� %d: ",n);
	
	for(k=2;k<n;k++){
		if(primo(k)){
		printf("%d ",k);
		}
	}
	
	getch();
	return 0;
}