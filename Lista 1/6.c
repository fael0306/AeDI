#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int multrec(int a, int b){
	if(b==0){
		return b;
	}
	return a+multrec(a,b-1);
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
	int a,b,r;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&a);
	printf("\nDigite o segundo n�mero: ");
	scanf("%d",&b);
	
	r = multrec(a,b);
	
	printf("\n\nO resultado �: %d",r);
	
	getch();
	return 0;
}
