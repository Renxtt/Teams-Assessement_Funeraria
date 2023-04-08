#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>

#define MAX_Menu_Inicial 5

//EQUIPE:
//Allan
//Eli
//DANIEL GAMEPLAYS
//Pe_brauler
//Arthur

//Objetivo: Construir uma simulação de um site de uma funeraria (o mais complleta possivel)

enum{
		
	CHAVE_ESC = 27,
	CHAVE_ENTER = 13,
	SETA_CIMA = 256 +72,
	SETA_BAIXO = 256 + 80,
	SETA_ESQUERDA = 256 + 75,
	SETA_DIREITA = 256 + 77
	
};

static Get_Code(void){
	int Code = getch();
	if(Code == 0 || Code == 224){
		Code = 256 +getch();
	}
	return Code;
}

int main(void){
	
	time_t tempo;
	srand((unsigned) time(&tempo));
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
	//Variaveis para cadastro de conta
	char Cadastro_Dono[1000], Cadastro_UserName[1000];
	char Cadastro_Senha[1000];
	char Tentativa_UserName[1000];
	char Tentativa_Senha[1000];
	
	//Variavel dos MENUS
	char MENU_PRINCIPAL[5][1000] = {"Configurações", "Assitencia", "Sing Up", "Log In", "Sair"};
	
	
	//Crinado variaveis auxiliares
	int Contador_de_Casas_inicial[10];
	int escolha_do_Menu = 0;
	int Contador_ch_SingUp, Contador_ch_LogIn;
	
	//criando variavel para  receber arquivos
	FILE *Arquivo_Senhas; // caso for usar o nome do arquivo é "Cofre_de_Senhas_O_Curso.txt"
	FILE *Arquivo_UserNames; //  caso for usar o nome do arquivo é "Cofre_de_Users_O_Curso.txt"
	FILE *Arquivo_Donos; //  caso for usar o nome do arquivo é  "Cofre_de_Donos_O_Curso.txt"
	
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
	system("Cls");
	//CADASTRO
	
		//Definindo Menu principal
	for(int i=0;i<MAX_Menu_Inicial;i++){
		Contador_de_Casas_inicial[i] = strlen(MENU_PRINCIPAL[i]);
		Contador_de_Casas_inicial[i] = Contador_de_Casas_inicial[i] + 3;
		Contador_de_Casas_inicial[i] = 21 - Contador_de_Casas_inicial[i];
		Contador_de_Casas_inicial[i] = Contador_de_Casas_inicial[i] - 1;
	}
	
	// criação deo Menu
	printf("\t        \033[1;32m====\033[1;35mMENU  PRINCIPAL\033[1;32m====\033[0m\n");
	for(int i=0;i<MAX_Menu_Inicial;i++){
		if(escolha_do_Menu==i){
			printf("\t\t\033[1;32m|\033[0m\033[4;31m -> %s\033[0m", MENU_PRINCIPAL[i]);
			for(int j=0;j<Contador_de_Casas_inicial[i];j++){
				printf(" ");
			}
			printf("\033[1;32m|\033[0m\n");
		}else{
			printf("\t\t\033[1;32m|\033[0m    %s", MENU_PRINCIPAL[i]);
			for(int j=0;j<Contador_de_Casas_inicial[i];j++){
				printf(" ");
			}
			printf("\033[1;32m|\033[0m\n");
		}
	}
	printf("\t        \033[1;32m=======================\033[0m\n\n\n");
	if(escolha_do_Menu==0){
		printf("\n\n\t\033[1;34mTe da Acesso as configurações personalizadas do programa\033[0m\n\n");
	}else if(escolha_do_Menu==1){
		printf("\n\n\t\033[1;34mTe da Ajuda a entender melhor como esse programa funciona\033[0m\n\n");
	}else if(escolha_do_Menu==2){
		printf("\n\n\t\033[1;34mTe da acesso a Criação de Conta\033[0m\n\n");
	}else if(escolha_do_Menu==3){
		printf("\n\n\t\033[1;34mTe da acesso a conectar com uma conta já existente\033[0m\n\n");
	}else if(escolha_do_Menu==4){
		printf("\n\n\t\033[1;34mTe da acesso a Sair do programa\033[0m\n\n");
	}
	
	int Recepcao_Tecla;
	while((Recepcao_Tecla = Get_Code()) != CHAVE_ESC){
		switch (Recepcao_Tecla) {
			case SETA_CIMA:
				system("Cls");
				if(escolha_do_Menu>0){
					escolha_do_Menu -= 1;	
				}
				printf("\t        \033[1;32m====\033[1;35mMENU  PRINCIPAL\033[1;32m====\033[0m\n");
				for(int i=0;i<MAX_Menu_Inicial;i++){
					if(escolha_do_Menu==i){
						printf("\t\t\033[1;32m|\033[0m\033[4;31m -> %s\033[0m", MENU_PRINCIPAL[i]);
						for(int j=0;j<Contador_de_Casas_inicial[i];j++){
							printf(" ");
						}
						printf("\033[1;32m|\033[0m\n");
					}else{
						printf("\t\t\033[1;32m|\033[0m    %s", MENU_PRINCIPAL[i]);
						for(int j=0;j<Contador_de_Casas_inicial[i];j++){
							printf(" ");
						}
						printf("\033[1;32m|\033[0m\n");
					}
				}
				printf("\t        \033[1;32m=======================\033[0m\n\n\n");
				if(escolha_do_Menu==0){
					printf("\n\n\t\033[1;34mTe da Acesso as configurações personalizadas do programa\033[0m\n\n");
				}else if(escolha_do_Menu==1){
					printf("\n\n\t\033[1;34mTe da Ajuda a entender melhor como esse programa funciona\033[0m\n\n");
				}else if(escolha_do_Menu==2){
					printf("\n\n\t\033[1;34mTe da acesso a Criação de Conta\033[0m\n\n");
				}else if(escolha_do_Menu==3){
					printf("\n\n\t\033[1;34mTe da acesso a conectar com uma conta já existente\033[0m\n\n");
				}else if(escolha_do_Menu==4){
					printf("\n\n\t\033[1;34mTe da acesso a Sair do programa\033[0m\n\n");
				}
				break;
			case SETA_BAIXO:
				system("Cls");
				if(escolha_do_Menu<4){
					escolha_do_Menu += 1;
				}
				printf("\t        \033[1;32m====\033[1;35mMENU  PRINCIPAL\033[1;32m====\033[0m\n");
				for(int i=0;i<MAX_Menu_Inicial;i++){
					if(escolha_do_Menu==i){
						printf("\t\t\033[1;32m|\033[0m\033[4;31m -> %s\033[0m", MENU_PRINCIPAL[i]);
						for(int j=0;j<Contador_de_Casas_inicial[i];j++){
							printf(" ");
						}
						printf("\033[1;32m|\033[0m\n");
					}else{
						printf("\t\t\033[1;32m|\033[0m    %s", MENU_PRINCIPAL[i]);
						for(int j=0;j<Contador_de_Casas_inicial[i];j++){
							printf(" ");
						}
						printf("\033[1;32m|\033[0m\n");
					}
				}
				printf("\t        \033[1;32m=======================\033[0m\n\n\n");
				if(escolha_do_Menu==0){
					printf("\n\n\t\033[1;34mTe da Acesso as configurações personalizadas do programa\033[0m\n\n");
				}else if(escolha_do_Menu==1){
					printf("\n\n\t\033[1;34mTe da Ajuda a entender melhor como esse programa funciona\033[0m\n\n");
				}else if(escolha_do_Menu==2){
					printf("\n\n\t\033[1;34mTe da acesso a Criação de Conta\033[0m\n\n");
				}else if(escolha_do_Menu==3){
					printf("\n\n\t\033[1;34mTe da acesso a conectar com uma conta já existente\033[0m\n\n");
				}else if(escolha_do_Menu==4){
					printf("\n\n\t\033[1;34mTe da acesso a Sair do programa\033[0m\n\n");
				}
				break;
			case CHAVE_ENTER:
				switch (escolha_do_Menu) {
					case 0:
						//Configurações
						
						break;
					case 1:
						//Assitencia
						break;
					case 2:
						//Sing Up
						system("Cls");
						
						Arquivo_Donos = fopen("Cofre_de_Donos_O_Curso.txt", "a");
						Arquivo_UserNames = fopen("Cofre_de_Users_O_Curso.txt", "a");
						Arquivo_Senhas = fopen("Cofre_de_Senhas_O_Curso.txt", "a");
						
						printf("\n\n______________________________________________________\n");
						printf("\nDigite Somente o Primeiro Nome do Dono dessa Conta: ");
						fgets(Cadastro_Dono, 1000, stdin);
						printf("\n____________________________________________________\n\n");
						
						printf("\n\n_________________________________________\n");
						printf("\nAgora Crie o nome de Usuario para Logar: ");
						fgets(Cadastro_UserName, 1000, stdin);
						printf("\n_________________________________________\n\n");
						
						printf("\n\n_______________________________________");
						Contador_ch_SingUp = strlen(Cadastro_Dono);
						for(int i=0;i<Contador_ch_SingUp;i++){
							printf("_");
						}
						printf("\n");
						printf("\nFeito isso Crie uma senha para a conta %s ", Cadastro_Dono);
						scanf("%s", Cadastro_Senha);
						printf("\n_______________________________________");
						Contador_ch_SingUp = strlen(Cadastro_Dono);
						for(int i=0;i<Contador_ch_SingUp;i++){
							printf("_");
						}
						printf("\n\n");
						
						fprintf(Arquivo_Donos, "%s\n", Cadastro_Dono);
						fprintf(Arquivo_UserNames, "%s\n", Cadastro_UserName);
						fprintf(Arquivo_Senhas, "%s\n", Cadastro_Senha);
										
						fclose(Arquivo_Donos);
						fclose(Arquivo_UserNames);
						fclose(Arquivo_Senhas);
						
						break;
					case 3:
						//Log In
						system("Cls");
						
						Arquivo_Donos = fopen("Cofre_de_Donos_O_Curso.txt", "r");
						Arquivo_UserNames = fopen("Cofre_de_Users_O_Curso.txt", "r");
						Arquivo_Senhas = fopen("Cofre_de_Senhas_O_Curso.txt", "r");
						
						printf("Digite o  seu UserName: ");
						
					
						break;
					case 4:
						//Sair
						system("Cls");
						printf("\n\n\t\tSaindo");
						for(int i=0;i<=3;i++){
							Sleep(500);
							printf(".");
						}
						system("Cls");
						Sleep(500);
						printf("\n\n\t\t\033[2;37mSeção sendo Finalizada\033[0m\n\n");
						Sleep(rand() % 5000);
						system("Cls");
						printf("\n\n\t\tSeção Finalizada\n\n");
						exit(0);
						return 0;
						break;
				}
				break;
			default:
				system("Cls");
				printf("\t        \033[1;32m====\033[1;35mMENU  PRINCIPAL\033[1;32m====\033[0m\n");
				for(int i=0;i<MAX_Menu_Inicial;i++){
					if(escolha_do_Menu==i){
						printf("\t\t\033[1;32m|\033[0m\033[4;31m -> %s\033[0m", MENU_PRINCIPAL[i]);
						for(int j=0;j<Contador_de_Casas_inicial[i];j++){
							printf(" ");
						}
						printf("\033[1;32m|\033[0m\n");
					}else{
						printf("\t\t\033[1;32m|\033[0m    %s", MENU_PRINCIPAL[i]);
						for(int j=0;j<Contador_de_Casas_inicial[i];j++){
							printf(" ");
						}
						printf("\033[1;32m|\033[0m\n");
					}
				}
				printf("\t        \033[1;32m=======================\033[0m\n\n\n");
				if(escolha_do_Menu==0){
					printf("\n\n\t\033[1;34mTe da Acesso as configurações personalizadas do programa\033[0m\n\n");
				}else if(escolha_do_Menu==1){
					printf("\n\n\t\033[1;34mTe da Ajuda a entender melhor como esse programa funciona\033[0m\n\n");
				}else if(escolha_do_Menu==2){
					printf("\n\n\t\033[1;34mTe da acesso a Criação de Conta\033[0m\n\n");
				}else if(escolha_do_Menu==3){
					printf("\n\n\t\033[1;34mTe da acesso a conectar com uma conta já existente\033[0m\n\n");
				}else if(escolha_do_Menu==4){
					printf("\n\n\t\033[1;34mTe da acesso a Sair do programa\033[0m\n\n");
				}	
				printf("\t        Tecla Não Correspondente");
				
		}
	}
	
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
