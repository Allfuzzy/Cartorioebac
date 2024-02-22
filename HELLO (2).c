#include <stdio.h> //biblioteca de comunicação com usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca responsável por cuidar dos strings

int registro() //Função responsável cadastrar os usuários no sistema
{
	//inicio criação de variaveis/strings
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //final criação de variaveis/strings
    
    printf("Digite o CPF a ser cadastrado "); //coletando informações do usuários
    scanf("%s", cpf); //referece a salvar uma string

    strcpy(arquivo, cpf); //Responsavél por copiar os valores das strings
    
    FILE *file;
    file = fopen(arquivo, "w"); // cria o arquivo e a "w" significa escrever
    fprintf(file,cpf);
    fclose(file); // fecha o arquivo
    
    file = fopen(arquivo,  "a");
    fprintf(file,",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);

    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
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
   
   printf("Digite o CPF a ser consultado");
   scanf("%s",cpf);

    FILE *file;
    file = fopen(cpf, "r");

   if(file == NULL)
   {
   	    printf("Não foi possivel abrir o arquivo, não localizado! . \n");
   }
   
   while(fgets(conteudo, 200, file) != NULL)
   {
   	    printf("\nEssas são as informações dos usuários: ");
   	    printf("%s", conteudo);
   	    printf("\n\n");
   }
   
   system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digitar o CPF a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
	{
   	    printf("O usuário não se encontra no sistema!.\n");
   	    system("pause");
   }
}

int main()
{
	int opcao=0;
	
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("### CARTÓRIO da EBAC ###\n\n");
	printf("Escolha a opção desejada do menu: \n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("\t4 - Sair do sistema\n\n");
	printf("Opção: ");
	
	scanf ("%d", &opcao);
	
	system("cls"); //Responsável por limpar a tela
	
	switch(opcao)
	{
		case 1:
		registro();
		system("pause"); //chamada de funções
		break;
		
		case 2:
		consulta();
    	break;
    	
    	case 3:
    	deletar();
    	break;
    	
    	case 4:
        printf("Obrigado por utilizar o sistema!\n");     
    	return 0;
    	break;
        	
    	default:
    	printf("essa opção não está disponivel!\n");
    	system("pause");
    	break;
    		
	}
	
	if(opcao==1)
	{
		printf("Você escolheu o registro de nomes!\n");
		system("pause");
	}
    if(opcao==2)
    {
    	printf("Você escolheu consultar os nomes!\n");
    	system("pause");
	}
	    if(opcao==3)
    {
    	printf("Você escolheu deletar os nomes!\n");
    	system("pause");

}
if(opcao>=4 || opcao<=0)
{
	printf("essa opção não está disponivel!\n");
	system("pause");
}


}
}
