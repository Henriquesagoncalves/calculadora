#include <stdio.h> //incluindo biblioteca de comunica��o com o usu�rio
#include <locale.h> // incluindo biblioteca de idiomas para colocar acentos

int main()//menu principal
{
	
	setlocale(LC_ALL, "Portuguese");// definindo o idioma
	
	float nota1, nota2,nota3, media;// criando variaveis
	
	printf("\n\nBem vindo, �sta � sua calculadora de notas!\n\n\n");
	printf("Digite a Primeira Nota.");
	scanf("%f", &nota1);
	printf("Digite a Segunda Nota.");
	scanf("%f", &nota2);
	printf("Digite a Terceira Nota.");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3)/3;//calculando a media
	
	printf("\n\nA sua m�dia �\n\n");
	
	printf("Total = %1f\n", media);//mostrando o resultado da media
	
	if (media >=7)
	printf("\nAprovado");
	else
	printf("\nReprovado");
	
	return 0;
		
}
