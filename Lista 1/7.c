#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int k=0;

int printlista(int n){
	
	printf("%d ",k);
	if(n>k){
		k++;
		return printlista(n);
	}	
	else{
		return 0;
	}
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n);	
	printf("\nN�meros de 0 at� %d em ordem crescente: ",n);
	printlista(n);
	
	getch();
	return 0;
}
