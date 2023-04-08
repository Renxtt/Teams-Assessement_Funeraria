#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
//EQUIPE:
//Allan
//Eli
//DANIEL GAMEPLAYS
//Pe_brauler
//Arthur

//Objetivo: Construir uma simulação de um site de uma funeraria (o mais complleta possivel)

enum{
		
	TECLA_ESC = 27,
	TECLA_ENTER = 13,
	SETA_CIMA = 256 +72,
	SETA_BAIXO = 256 + 80,
	SETA_ESQUERDA = 256 + 75,
	SETA_DIREITA = 256 + 77
	
};

static GET_CODE(void){
	
	int GET_CH = getch();
	if(GET_CH ==0 || GET_CH ==224){
		GET_CH = 256 +getch();
	}
	return GET_CH;
}

int main(void){
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//VARIÁVEIS
	//Variaveis para cadastro pessoa física
	char nome[40],email[40],relacao[20],cpf[20];
	int ano,idade,confirma;
	//Variavel dos MENUS
	char 
	
//INÍCIO CÓDIGO

	//INFO FUNERÁRIA
		//nome da funeraria
		//telefone da funeraria
		//endereço funeraria
		//horaria de trabalho
	printf("           funeraria santa maria\n          sua morte nossa alegria\n              desde 1986 a.C\n\n          horario de funcionamento:\n               00:00 a 23:59\n\n                 telefone:\n              -12 93774-84639\n\n     rua marcindo de sima na rua de baixo");
	printf("\n\n\n==============================================\n");
	printf("|                                            |\n");
	printf("|   \033[1;34mDe Enter para ir para O Menu_do_Inicio\033[0m   |\n");
	printf("|                                            |\n");
	printf("==============================================\n\n");
	getch();
	//CADASTRO
	
	
		
	
	//CADASTRO PESSOA FÍSICA
	printf("\nCADASTRO DO ORGANIZADOR\n\n");
	printf("Nome: ");//nome pessoa
	fgets(nome,40,stdin);
	printf("CPF: ");//cpf pessoa
	fgets(cpf,20,stdin);
	printf("Ano de nascimento: ");//data nascimento pessoa (se de menor cancelar cadastro)
	scanf("%d",&ano);
	idade=2023-ano;
		if(idade<18){
			printf("Menor de idade. Cadastro Indisponível.\n");
			// fazer um Getch e adicionar menu
		}
		else{
			printf("Relação com o falecido: ");//relação com morto
			fgets(relacao,20,stdin);
			scanf("%s",&relacao);
			printf("Email para contato: ");//email pessoa
			fgets(email,40,stdin);
			scanf("%s",&email);
		
		//print informação
			printf("\n\nCONFIRMAÇÃO CADASTRO\n\n");
			printf("%s",nome);//nome
			printf("%s",cpf);//cpf
			printf("%d anos",idade);//idade
			printf("\nRelação com o falecido: %s",relacao);//relação com o falecido
			printf("\nEmail para contato: %s",email);//email
	
		//confirmar cadastro
			printf("\n\nConfirmar Cadastro?\nSim-1\tNão-2\n");
			scanf("%d",&confirma);
		
			if(confirma==2){
				printf("\nPor favor, refaça seu cadastro.");
				//Adicionar Menu aqui
			}
			else{
				//Falta Coisa Paola
			}	
		}
		

		

	
	//CADASTRO MORTO
		//cpf do morto (para checar se ele realmente esta morto)
		//nome do morto
		//altura morto
		//largura morto
		//peso morto
	
	//SELEÇÃO CERIMONIA
		//local
		//data(dia)
		//numero convidados - informar preço por convidado
	
	//decoração - opcional
		//flores e velas
		//retrato do morto
		
	//serviços
		//padre
		//cortejo
	
	//enterro
		//modelos pré prontos de caixão com P M G e personalizado
		//local do enterro
	//cremação
		//informar estilos pré-prontos de potes para as cinzas
		
	//transporte
		//mortuário->local
		//local->enterro/cremação
				
	
	//calcular o valor total da cerimonia (Usando Juros e extras)
	
	//imprimir nota fiscal
		
	return 0;
}
