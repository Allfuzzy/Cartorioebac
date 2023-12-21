#include <stdio.h> //biblioteca de comunica��o com usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em memoria
#include <locale.h> //biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar dos strings

int registro()
{
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
    printf("Digite o CPF a ser cadastrado: ");
    
    scanf("%s", cpf);
    
    strcpy(arquivo, cpf);
    
    FILE *file;
    file = fopen(arquivo, "w");
    fprintf(file,cpf);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)
    {
    printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200,file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio");
		printf("%s", conteudo);
		printf("\n\n"); 
	}
	
	system("pause");
}

int deletar()
{
	printf("Voc� escolheu deletar os nomes!\n");
    system("pause");
}

int main()
{
	int opcao=0;
	
	int laco=1;
	
	for(laco=1;laco=1;)
    {
		setlocale(LC_ALL, "Portuguese");
		
	system("cls");
	printf("### CART�RIO da EBAC ###\n\n");
	printf("Escolha a op��o desejada do menu: \n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("Op��o: ");
	
	scanf ("%d", &opcao);
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
		
		case 2:
		consulta();
    	break;
    	
    	case 3:
        deletar();
    	break;
		
		default:
    	printf("esta op��o n�o esta dispon�vel!\n");
    	system("pause");
    	break;
	}
	/*
	
	if(opcao==1)
	{
		printf("Voc� escolheu o registro de nomes!\n");
		system("pause");
	}
    if(opcao==2)
    {
    	printf("Voc� escolheu consultar os nomes!\n");
    	system("pause");
	}
	    if(opcao==3)
    {
    	printf("Voc� escolheu deletar os nomes!\n");
    	system("pause");

}
if(opcao>=4 || opcao<=0)
{
	printf("essa op��o n�o est� disponivel!\n");
	system("pause");
}
*/

}
}