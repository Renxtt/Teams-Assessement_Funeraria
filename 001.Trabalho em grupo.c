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
int main(void){
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//VARIÁVEIS
	//cadastro pessoa física
	char nome[40],email[40],relacao[20],cpf[20];
	int ano,idade,confirma;
	//outras
	
//INÍCIO CÓDIGO
	
	//CADASTRO	
	
	//INFO FUNERÁRIA
		//nome da funeraria
		//telefone da funeraria
		//endereço funeraria
		//horaria de trabalho	
	
	//CADASTRO PESSOA FÍSICA
	printf("\nCADASTRO\n\n");
	printf("Nome: ");//nome pessoa
	fgets(nome,40,stdin);
	printf("CPF: ");//cpf pessoa
	fgets(cpf,20,stdin);
	printf("Ano de nascimento: ");//data nascimento pessoa (se de menor cancelar cadastro)
	scanf("%d",&ano);
	idade=2023-ano;
		if(idade<18){
			printf("Menor de idade. Cadastro Indisponível.\n");
			system("exit");
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
			system("exit");
		}
		else{
			return 0;
		}
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
				
	
	//calcular o valor total da cerimonia
	
	//imprimir nota fiscal
		
	return 0;
}
