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
#define MAX_Menu_Usuario 4
#define TEMPO_print_coriqueiro 700
#define MAX_Menu_Servicos 3

//EQUIPE:
//Allan
//Eli
//DANIEL GAMEPLAYS
//Pe_brauler
//Arthur

//Objetivo: Construir uma simulação de um site de uma funeraria (o mais complleta possivel)

enum{
	
	Chave_TAB = 9,	
	CHAVE_ESC = 27,
	CHAVE_ENTER = 13,
	SETA_CIMA = 256 +72,
	SETA_BAIXO = 256 + 80,
	SETA_ESQUERDA = 256 + 75,
	SETA_DIREITA = 256 + 77
	
};


static int Get_Code(void){
	int Code = getch();
	if(Code == 0 || Code == 224){
		Code = 256 +getch();
	}
	return Code;
}


void Aberrtura_Entrada(void){ 


	int Recepcao_Tecla;
	do{
		
	Sleep(100);
	system("Cls");
	printf("\033[5;37m\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n     ooooooooo                       cccccccccc  uuuu         uuuu  rrrrrrrrr        sssssssssssss        ooooooooo     ");
	printf("\n   ooooooooooooo                  ccccccccccccc  uuuu         uuuu  rrrrrrrrrrr    ssssssssssssssss     ooooooooooooo   ");
	printf("\n oooo         oooo              ccccccccc        uuuu         uuuu  rrrr     rrrr  ssss         ssss  oooo         oooo ");
	printf("\n oooo         oooo            ccccccc            uuuu         uuuu  rrrrr    rrrr   sssss             oooo         oooo ");
	printf("\n oooo         oooo            cccc               uuuu         uuuu  rrrrrrrrrrr        ssssss         oooo         oooo ");
	printf("\n oooo         oooo            cccc               uuuu         uuuu  rrrr rrrr              ssss       oooo         oooo ");
	printf("\n oooo         oooo            ccccccc            uuuu         uuuu  rrrr  rrrr               ssss     oooo         oooo ");
	printf("\n oooo         oooo              ccccccccc        uuuu         uuuu  rrrr   rrrr    ssss        ssss   oooo         oooo ");
	printf("\n   ooooooooooooo                  ccccccccccccc    uuuuuuuuuuuuu    rrrr    rrrr    ssssssssssssssss    ooooooooooooo   ");
	printf("\n     ooooooooo                       cccccccccc      uuuuuuuuuu     rrrr     rrrr     sssssssssssss       ooooooooo     ");
	printf("\n                                                                                                                        ");
	printf("\n                                                                                                                        ");
	printf("\n                                                      \033[5;35mTE APRESENTA\033[5;37m                                                      ");
	printf("\n                                                                                                                        ");
	printf("\n                                                     \033[0m\033[1;32m==============                                                     ");
	printf("\n                                                     |            |                                                     ");	
	printf("\n                                                     |  \033[1;34mDE ENTER\033[1;32m  |                                                     ");
	printf("\n                                                     |            |                                                     ");	
	printf("\n                                                     ==============\033[0m                                                     ");
	printf("\n                                                                                                                        ");


	}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
	

	/*
	        cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc          
 
 	|		       ooooooooo                       cccccccccc  uuuu         uuuu  rrrrrrrrr        sssssssssssss        ooooooooo     
	|		     ooooooooooooo                  ccccccccccccc  uuuu         uuuu  rrrrrrrrrrr    ssssssssssssssss     ooooooooooooo   
	|		   oooo         oooo              ccccccccc        uuuu         uuuu  rrrr     rrrr  ssss         ssss  oooo         oooo 
	|		   oooo         oooo            ccccccc            uuuu         uuuu  rrrrr    rrrr   sssss             oooo         oooo 
	|		   oooo         oooo            cccc               uuuu         uuuu  rrrrrrrrrrr        ssssss         oooo         oooo 
	|		   oooo         oooo            cccc               uuuu         uuuu  rrrr rrrr              ssss       oooo         oooo 
	|		   oooo         oooo            ccccccc            uuuu         uuuu  rrrr  rrrr               ssss     oooo         oooo 
	|		   oooo         oooo              ccccccccc        uuuu         uuuu  rrrr   rrrr    ssss        ssss   oooo         oooo 
	|		     ooooooooooooo                  ccccccccccccc    uuuuuuuuuuuuu    rrrr    rrrr    ssssssssssssssss    ooooooooooooo   
	|		       ooooooooo                       cccccccccc      uuuuuuuuuu     rrrr     rrrr     sssssssssssss       ooooooooo     
	
*/
		
}

void Codigo_Chave(int qtd_chave){
	char parte_codigo[6][qtd_chave+2], Codigo_Chave_completo[1000];
	int randomico_do_codigo[5];
	int rand_auxiliar;
	srand(time(NULL));
	
	for(int i=0;i<qtd_chave;i++){
		randomico_do_codigo[i] = rand() % 26+1;
		//a ou 0 ou A
		if(randomico_do_codigo[i]==1){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "A");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "0");
			}else if(parte_codigo==3){
				strcpy(parte_codigo[i], "a");
			}
		}
		//b ou 1 ou B
		if(randomico_do_codigo[i]==2){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "B");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "1");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "b");
			}
		}
		//c ou 2 ou C
		if(randomico_do_codigo[i]==3){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "C");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "2");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "c");
			}
		}		
		//d ou 3 ou D
		if(randomico_do_codigo[i]==4){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "D");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "3");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "d");
			}
		}		
		//e ou 4 ou E
		if(randomico_do_codigo[i]==5){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "E");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "4");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "e");
			}
		}		
		//f ou 5 ou F
		if(randomico_do_codigo[i]==6){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "F");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "5");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "f");
			}
		}		
		//g ou 6 ou G
		if(randomico_do_codigo[i]==7){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "G");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "6");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "g");
			}
		}
		//h ou 7 ou H
		if(randomico_do_codigo[i]==8){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "H");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "7");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "h");
			}
		}
		//i ou 8 ou I
		if(randomico_do_codigo[i]==9){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "I");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "8");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "i");
			}
		}
		//j ou 9 ou J
		if(randomico_do_codigo[i]==10){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "J");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "9");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "j");
			}
		}
		//k ou ! ou K
		if(randomico_do_codigo[i]==11){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "K");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "!");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "k");
			}
		}
		//l ou @ ou L
		if(randomico_do_codigo[i]==12){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "L");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "@");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "l");
			}
		}
		//m ou # ou M
		if(randomico_do_codigo[i]==13){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "M");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "#");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "m");
			}
		}
		//n ou $ ou N
		if(randomico_do_codigo[i]==14){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "N");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "$");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "n");
			}
		}
		//o ou % ou O
		if(randomico_do_codigo[i]==15){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "O");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "%");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "o");
			}
		}
		//p ou & ou P
		if(randomico_do_codigo[i]==16){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "P");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "&");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "p");
			}
		}
		//q ou * ou Q
		if(randomico_do_codigo[i]==17){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "Q");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "*");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "p");
			}
		}
		//r ou ? ou R
		if(randomico_do_codigo[i]==18){
			rand_auxiliar = rand() % 3+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "R");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "?");
			}else if(rand_auxiliar==3){
				strcpy(parte_codigo[i], "r");
			}
		}
		//s ou S
		if(randomico_do_codigo[i]==19){
			rand_auxiliar = rand() % 2+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "S");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "s");
			}
		}
		//t ou T
		if(randomico_do_codigo[i]==20){
			rand_auxiliar = rand() % 2+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "T");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "t");
			}
		}		
		//u ou U
		if(randomico_do_codigo[i]==21){
			rand_auxiliar = rand() % 2+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "U");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "u");
			}
		}
		//v ou V
		if(randomico_do_codigo[i]==22){
			rand_auxiliar = rand() % 2+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "V");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "v");
			}
		}
		//w ou W
		if(randomico_do_codigo[i]==23){
			rand_auxiliar = rand() % 2+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "W");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "w");
			}
		}
		//x ou X
		if(randomico_do_codigo[i]==24){
			rand_auxiliar = rand() % 2+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "X");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "x");
			}
		}
		//y ou Y
		if(randomico_do_codigo[i]==25){
			rand_auxiliar = rand() % 2+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "Y");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "y");
			}
		}
		//z ou Z
		if(randomico_do_codigo[i]==26){
			rand_auxiliar = rand() % 2+1;
			if(rand_auxiliar==1){
				strcpy(parte_codigo[i], "Z");
			}else if(rand_auxiliar==2){
				strcpy(parte_codigo[i], "z");
			}
		}
	}
	for(int i=1;i<qtd_chave;i++){
		strcat(parte_codigo[0], parte_codigo[i]);
	}
	
	strcpy(Codigo_Chave_completo, parte_codigo[0]);
	//printf("%s", Codigo_Chave_completo);
}

int main(void){
	
	system("title Funeraria Team EQ4");
	
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
	char Tentativa_UserName[1000], Retirada_UserNames[100][1000];
	char Tentativa_Senha[1000], Retirada_Senhas[100][1000];
	char Retirada_Donos[100][1000];
	
	
	//Variavel dos MENUS
	char MENU_PRINCIPAL[5][1000] = {"Configurações", "Assitencia", "Sign Up", "Log In", "Sair"};	
	char MENU_USUARIO[4][1000] = {"Assistencia para o(a) Usuário(a)", "Configurações", "Serviços", "Sair/Log Out"};
	char MENU_SERVIÇOS[3][1000] = {"Procurar Confirmação de Pedido", "Criar confirmação de Pedidos", "Serviços Post Mortem"};
	
	//Crinado variaveis auxiliares
	int Contador_de_Casas_inicial[10], Contador_de_Casas_Usuario[10], Contador_de_Casas_Other_servico[10];
	int escolha_do_Menu = 0;
	int Contador_ch_SingUp, Contador_ch_LogIn;
	int Verificador_1V_2F=0;
	int Contador_do_Dono;
	int Recepcao_Tecla;
	//criando variavel para  receber arquivos
	FILE *Arquivo_Senhas; // caso for usar o nome do arquivo é "Cofre_de_Senhas_O_Curso.txt"
	FILE *Arquivo_UserNames; //  caso for usar o nome do arquivo é "Cofre_de_Users_O_Curso.txt"
	FILE *Arquivo_Donos; //  caso for usar o nome do arquivo é  "Cofre_de_Donos_O_Curso.txt"
	
	//criando variavel para evento fechado ou aberto
	int convidados,contador;
	char evento[10];
//INÍCIO CÓDIGO
	Aberrtura_Entrada();
	//INFO FUNERÁRIA
		//nome da funeraria
		//telefone da funeraria
		//endereço funeraria
		//horaria de trabalho
	do{
		system("Cls");
		
		printf("           funeraria santa maria\n          sua morte nossa alegria\n              desde 1986 a.C\n\n          horario de funcionamento:\n               00:00 a 23:59\n\n                 telefone:\n              -12 93774-84639\n\n     rua marcindo de sima na rua de baixo");
		printf("\n\n\n==============================================\n");
		printf("|                                            |\n");
		printf("|   \033[1;34mDe Enter para ir para O Menu_do_Inicio\033[0m   |\n");
		printf("|                                            |\n");
		printf("==============================================\n\n");
	}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
	system("Cls");
	
	do{
		printf("Ao criar sua conta você poderá utizá-la a qualquer momento\n\tGraças ao nosso sistema de salvamento\n");
		printf("\n\n\n==============================================\n");
		printf("|                                            |\n");
		printf("|   \033[1;34mDe Enter para ir para O Menu_do_Inicio\033[0m   |\n");
		printf("|                                            |\n");
		printf("==============================================\n\n");
	}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
	
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
		printf("\n\n\t\033[1;34mFornece acesso às configurações personalizadas do programa\033[0m\n\n");
	}else if(escolha_do_Menu==1){
		printf("\n\n\t\033[1;34mFornece Ajuda para entender melhor como esse programa funciona\033[0m\n\n");
	}else if(escolha_do_Menu==2){
		printf("\n\n\t\033[1;34mFornece acesso à Criação de Conta\033[0m\n\n");
	}else if(escolha_do_Menu==3){
		printf("\n\n\t\033[1;34mFornece acesso para conectar com uma conta já existente\033[0m\n\n");
	}else if(escolha_do_Menu==4){
		printf("\n\n\t\033[1;34mFornece acesso para Sair do programa\033[0m\n\n");
	}
	
	
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
					printf("\n\n\t\033[1;34mFornece acesso às configurações personalizadas do programa\033[0m\n\n");
				}else if(escolha_do_Menu==1){
					printf("\n\n\t\033[1;34mFornece Ajuda para entender melhor como esse programa funciona\033[0m\n\n");
				}else if(escolha_do_Menu==2){
					printf("\n\n\t\033[1;34mFornece acesso à Criação de Conta\033[0m\n\n");
				}else if(escolha_do_Menu==3){
					printf("\n\n\t\033[1;34mFornece acesso para conectar com uma conta já existente\033[0m\n\n");
				}else if(escolha_do_Menu==4){
					printf("\n\n\t\033[1;34mFornece acesso para Sair do programa\033[0m\n\n");
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
					printf("\n\n\t\033[1;34mFornece acesso às configurações personalizadas do programa\033[0m\n\n");
				}else if(escolha_do_Menu==1){
					printf("\n\n\t\033[1;34mFornece Ajuda para entender melhor como esse programa funciona\033[0m\n\n");
				}else if(escolha_do_Menu==2){
					printf("\n\n\t\033[1;34mFornece acesso à Criação de Conta\033[0m\n\n");
				}else if(escolha_do_Menu==3){
					printf("\n\n\t\033[1;34mFornece acesso para conectar com uma conta já existente\033[0m\n\n");
				}else if(escolha_do_Menu==4){
					printf("\n\n\t\033[1;34mFornece acesso para Sair do programa\033[0m\n\n");
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
						
						do{
							system("Cls");
							printf("\nAgora Você entrará na área de criação de conta\n");
							printf("na hora de criar a conta você dará três informações:\n");
							printf("\n\033[1;32mQuem é o Dono da conta que está criando\nUm UserName que servirá exclusivamente para Log In\nA Senha que Utilizará para Logar sua Conta\033[0m\n\n");
							printf("É aconselhado usar dados faceis de se Lembrar\n");
							printf("Tanto na Senha como no UserName podem ser usados Caracteres especiais\n");
							printf("Na hora de indicar quem será o Dono da Conta Não use Espaços\n\n");
							
							printf("\n\n\t======================================");
							printf("\n\t|                                    |");
							printf("\n\t|   \033[1;34mDe 2 ENTER para seguir adiante\033[0m   |");
							printf("\n\t|                                    |");
							printf("\n\t======================================\n\n\n");
							getch();
						}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
	
						system("Cls");
						printf("Agora que você concorda com os nossos Termos\n");
						Sleep(2000);
						printf("Vamos criar a sua conta");
						Sleep(2000);
						system("Cls");
						
						printf("\n\n\t\t\033[2;37mConectando a Criação de conta\033[0m");
						for(int i=0;i<3;i++){
							Sleep(500);
							printf("\033[1;34m.\033[0m");
						}
						Sleep(rand() % 3000+1);
						system("Cls");
						printf("\n\n\t\tConectado a Criação de conta\n\n");
						Sleep(2000);
						
						system("Cls");
						Arquivo_Donos = fopen("Cofre_de_Donos_O_Curso.txt", "a");
						Arquivo_UserNames = fopen("Cofre_de_Users_O_Curso.txt", "a");
						Arquivo_Senhas = fopen("Cofre_de_Senhas_O_Curso.txt", "a");
						
						printf("\n\n______________________________________________________\n");
						printf("\nDigite Somente o Primeiro Nome do Dono dessa Conta: ");
						scanf("%s", Cadastro_Dono);
						printf("\n____________________________________________________\n\n");
						
						printf("\n\n_________________________________________\n");
						printf("\nAgora Crie o nome de Usuario para Logar: ");
						scanf("%s", Cadastro_UserName);
						printf("\n_________________________________________\n\n");
						
						printf("\n\n_______________________________________");
						Contador_ch_SingUp = strlen(Cadastro_Dono);
						for(int i=0;i<Contador_ch_SingUp;i++){
							printf("_");
						}
						printf("\n");
						printf("\nFeito isso Crie uma senha para a conta com dono chamado(a) %s: ", Cadastro_Dono);
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
						
						do{
							system("Cls");
							printf("\n\nParabens por criar uma Nova Conta\n");
							printf("\n\n===========================================");
							printf("\n|                                         |");
							printf("\n|   \033[1;34mDe Enter para ir ao menu do Usuário\033[0m   |");
							printf("\n|                                         |");
							printf("\n===========================================\n\n\n");							
						}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
						
						system("Cls");
						printf("\n\t        \033[1;32m====\033[1;35mMENU  PRINCIPAL\033[1;32m====\033[0m\n");
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
							printf("\n\n\t\033[1;34mFornece acesso às configurações personalizadas do programa\033[0m\n\n");
						}else if(escolha_do_Menu==1){
							printf("\n\n\t\033[1;34mFornece Ajuda para entender melhor como esse programa funciona\033[0m\n\n");
						}else if(escolha_do_Menu==2){
							printf("\n\n\t\033[1;34mFornece acesso à Criação de Conta\033[0m\n\n");
						}else if(escolha_do_Menu==3){
							printf("\n\n\t\033[1;34mFornece acesso para conectar com uma conta já existente\033[0m\n\n");
						}else if(escolha_do_Menu==4){
							printf("\n\n\t\033[1;34mFornece acesso para Sair do programa\033[0m\n\n");
						}
						
						break;
					case 3:
						//Log In
						system("Cls");
						
						Arquivo_Donos = fopen("Cofre_de_Donos_O_Curso.txt", "r");
						Arquivo_UserNames = fopen("Cofre_de_Users_O_Curso.txt", "r");
						Arquivo_Senhas = fopen("Cofre_de_Senhas_O_Curso.txt", "r");
						
						
						printf("\n\n------------------------\n");
						printf("\nDigite o  seu UserName: ");
						scanf("%s", Tentativa_UserName);
						printf("\n--------------------------\n\n");
						
						printf("\n\n----------------------------------");
						Contador_ch_LogIn = strlen(Tentativa_UserName);
						for(int i=0;i<Contador_ch_LogIn;i++){
							printf("-");
						}
						printf("---\n");
						printf("\nAgora Digite a senha com UserName %s: ", Tentativa_UserName);
						scanf("%s", Tentativa_Senha);
						printf("\n----------------------------------");
						Contador_ch_LogIn = strlen(Tentativa_UserName);
						for(int i=0;i<Contador_ch_LogIn;i++){
							printf("-");
						}
						printf("---\n\n");						
						
						//checagem de conta
						for(int i=0;i<100;i++){
							fscanf(Arquivo_UserNames, "%s", Retirada_UserNames[i]);
							fscanf(Arquivo_Senhas, "%s", Retirada_Senhas[i]);
							fscanf(Arquivo_Donos, "%s", Retirada_Donos[i]);
							if(strcmp(Retirada_UserNames[i], Tentativa_UserName)==0 && strcmp(Retirada_Senhas[i], Tentativa_Senha)==0){
								Verificador_1V_2F = 1;
								Contador_do_Dono =i;
								
							}
						}
						
						if(Verificador_1V_2F){
							//menu do Usuario TOTAL 41
							do{
							printf("CONTA LOGADA COM SUCESSO");
							//colocar confirmação
							printf("\n\n===========================================");
							printf("\n|                                         |");
							printf("\n|   \033[1;34mDe Enter para ir ao menu do Usuário\033[0m   |");
							printf("\n|                                         |");
							printf("\n===========================================");							
							
							
							}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
							
							do{
								system("Cls");
								Sleep(TEMPO_print_coriqueiro);
								printf("Caso seja a sua primeira vez Logando, aqui vai um Micro Tutorial\n");
								Sleep(TEMPO_print_coriqueiro);
								printf("Aparecerá um MENU parecido com o MENU PRINCIPAL\n");
								Sleep(TEMPO_print_coriqueiro);
								printf("E será divertido se você fuça-lo\n");
								Sleep(TEMPO_print_coriqueiro);
								printf("Porém\n");
								Sleep(TEMPO_print_coriqueiro);
								printf("Entretanto\n");
								Sleep(TEMPO_print_coriqueiro);
								printf("Todavia\n");
								Sleep(TEMPO_print_coriqueiro);
								printf("Se quiser dar um bom cuidado ao corpo de seu Ente querido\n");
								Sleep(TEMPO_print_coriqueiro);
								printf("Vá na parte que diz Serviços\n");
								Sleep(TEMPO_print_coriqueiro);
								printf("Dentro disso Dê enter em Serviços Post Mortem\n");
								printf("\n\n============================");
								printf("\n|                          |");
								printf("\n|   \033[1;34mDe Enter para Seguir\033[0m   |");
								printf("\n|                          |");
								printf("\n============================");								
							}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
							system("Cls");
							
							printf("\n\n\t\t\033[2;37mConectando A conta do(a) %s\033[0m", Retirada_Donos[Contador_do_Dono]);
							for(int i=0;i<3;i++){
								Sleep(500);
								printf("\033[1;34m.\033[0m");
							}
							Sleep(rand() % 3000+1);
							system("Cls");
							printf("\n\n\t\tConectado a Conta do(a) %s\n\n", Retirada_Donos[Contador_do_Dono]);
							Sleep(2000);						
							system("Cls");
							
							printf("\n\n\t\t\033[2;37mConectando ao MENU DO USUÁRIO\033[0m");
							for(int i=0;i<3;i++){
								Sleep(500);
								printf("\033[1;34m.\033[0m");
							}
							Sleep(rand() % 3000+1);
							system("Cls");
							printf("\n\n\t\tConectado ao MENU DO USUÁRIO\n\n");
							Sleep(2000);
							
							system("Cls");
							for(int i=0;i<MAX_Menu_Usuario;i++){
								Contador_de_Casas_Usuario[i] = strlen(MENU_USUARIO[i]);
								Contador_de_Casas_Usuario[i] = Contador_de_Casas_Usuario[i] + 3;
								Contador_de_Casas_Usuario[i] = 41 - Contador_de_Casas_Usuario[i];
								Contador_de_Casas_Usuario[i] = Contador_de_Casas_Usuario[i] - 3;
							}
							
							
							escolha_do_Menu = 0;
							printf("\t        \033[1;32m==============\033[1;35mMENU DO USUÁRIO\033[1;32m==============\033[0m\n");
							for(int i=0;i<MAX_Menu_Usuario;i++){
								if(escolha_do_Menu==i){
									printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_USUARIO[i]);
									for(int j=0;j<Contador_de_Casas_Usuario[i];j++){
										printf(" ");
									}
									printf("\033[1;32m|\033[0m\n");
								}else{
									printf("\t\t\033[1;32m|\033[0m      %s", MENU_USUARIO[i]);
									for(int j=0;j<Contador_de_Casas_Usuario[i];j++){
										printf(" ");
									}
									printf("\033[1;32m|\033[0m\n");
								}	
							}
							printf("\t        \033[1;32m===========================================\033[0m\n");
							if(escolha_do_Menu==0){
								printf("\n\n\t\033[1;34mFornece acesso para assistencia sobre o programa de forma que você entenda melhor como ele funciona\033[0m\n\n");
							}else if(escolha_do_Menu==1){
								printf("\n\n\t\033[1;34mFornece Acesso às configurações personalizadas do programa\n\tTanto a configuração do seu perfil como uma configuração geral\033[0m\n\n");
							}else if(escolha_do_Menu==2){
								printf("\n\n\t\033[1;34mAcessa os Serviços que a Nossa funeraria disponibiliza\033[0m\n\n");
							}else if(escolha_do_Menu==3){
								printf("\n\n\t\033[1;34mSai desse programa e ao mesmo tempo faz Log Out\033[0m");
							}
							while((Recepcao_Tecla = Get_Code()) != CHAVE_ESC){
								switch (Recepcao_Tecla) {
									case SETA_CIMA:
										system("Cls");
										if(escolha_do_Menu>0){
											escolha_do_Menu -= 1;
										}
										printf("\t        \033[1;32m==============\033[1;35mMENU DO USUÁRIO\033[1;32m==============\033[0m\n");
										for(int i=0;i<MAX_Menu_Usuario;i++){
											if(escolha_do_Menu==i){
												printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_USUARIO[i]);
												for(int j=0;j<Contador_de_Casas_Usuario[i];j++){
													printf(" ");
												}
												printf("\033[1;32m|\033[0m\n");
											}else{
												printf("\t\t\033[1;32m|\033[0m      %s", MENU_USUARIO[i]);
												for(int j=0;j<Contador_de_Casas_Usuario[i];j++){
													printf(" ");
												}
												printf("\033[1;32m|\033[0m\n");
											}	
										}
										printf("\t        \033[1;32m===========================================\033[0m\n");			
										if(escolha_do_Menu==0){
											printf("\n\n\t\033[1;34mFornece acesso para assistencia sobre o programa de forma que você entenda melhor como ele funciona\033[0m\n\n");
										}else if(escolha_do_Menu==1){
											printf("\n\n\t\033[1;34mFornece Acesso às configurações personalizadas do programa\n\tTanto a configuração do seu perfil como uma configuração geral\033[0m\n\n");
										}else if(escolha_do_Menu==2){
											printf("\n\n\t\033[1;34mAcessa os Serviços que a Nossa funeraria disponibiliza\033[0m\n\n");
										}else if(escolha_do_Menu==3){
											printf("\n\n\t\033[1;34mSai desse programa e ao mesmo tempo faz Log Out\033[0m");
										}				
										break;
									case SETA_BAIXO:
										system("Cls");
										if(escolha_do_Menu<3){
											escolha_do_Menu +=1;
										}
										printf("\t        \033[1;32m==============\033[1;35mMENU DO USUÁRIO\033[1;32m==============\033[0m\n");
										for(int i=0;i<MAX_Menu_Usuario;i++){
											if(escolha_do_Menu==i){
												printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_USUARIO[i]);
												for(int j=0;j<Contador_de_Casas_Usuario[i];j++){
													printf(" ");
												}
												printf("\033[1;32m|\033[0m\n");
											}else{
												printf("\t\t\033[1;32m|\033[0m      %s", MENU_USUARIO[i]);
												for(int j=0;j<Contador_de_Casas_Usuario[i];j++){
													printf(" ");
												}
												printf("\033[1;32m|\033[0m\n");
											}	
										}
										printf("\t        \033[1;32m===========================================\033[0m\n");	
										if(escolha_do_Menu==0){
											printf("\n\n\t\033[1;34mFornece acesso para assistencia sobre o programa de forma que você entenda melhor como ele funciona\033[0m\n\n");
										}else if(escolha_do_Menu==1){
											printf("\n\n\t\033[1;34mFornece Acesso às configurações personalizadas do programa\n\tTanto a configuração do seu perfil como uma configuração geral\033[0m\n\n");
										}else if(escolha_do_Menu==2){
											printf("\n\n\t\033[1;34mAcessa os Serviços que a Nossa funeraria disponibiliza\033[0m\n\n");
										}else if(escolha_do_Menu==3){
											printf("\n\n\t\033[1;34mSai desse programa e ao mesmo tempo faz Log Out\033[0m");
										}					
										break;
									case CHAVE_ENTER:
										// "Assistencia para o(a) Usuário(a)", "Configurações", "Serviços", "Log Out", "Sair"
										switch (escolha_do_Menu) {
											case 0:
												//Assistencia para o(a) Usuário(a)
												break;
											case 1:
												//Configurações
												break;
											case 2:
												//Serviços
												system("Cls");
												
												for(int i=0;i<MAX_Menu_Servicos;i++){
													Contador_de_Casas_Other_servico[i] = strlen(MENU_SERVIÇOS[i]);
													Contador_de_Casas_Other_servico[i] = Contador_de_Casas_Other_servico[i] + 3;
													Contador_de_Casas_Other_servico[i] = 39 - Contador_de_Casas_Other_servico[i];
													Contador_de_Casas_Other_servico[i] = Contador_de_Casas_Other_servico[i] -3;													
												}
												escolha_do_Menu = 0;
												printf("\t        \033[1;32m============\033[1;35mMENU DOS SERVIÇOS\033[1;32m============\033[0m\n");
												for(int i=0;i<MAX_Menu_Servicos;i++){
													if(escolha_do_Menu==i){
														printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_SERVIÇOS[i]);
														for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
															printf(" ");
														}
														printf("\033[1;32m|\033[0m\n");
													}else{
														printf("\t\t\033[1;32m|\033[0m      %s", MENU_SERVIÇOS[i]);
														for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
															printf(" ");
														}
														printf("\033[1;32m|\033[0m\n");	
													}
												}
												printf("\t        \033[1;32m=========================================\033[0m\n");
												
												if(escolha_do_Menu==0){
													printf("\n\n\t\033[1;34mTe permite pesquisar entre os pedidos já existentes usando a palavra chave\033[0m\n\n");
												}else if(escolha_do_Menu==1){
													printf("\n\n\t\033[1;34mTe permite criar uma confirmação de pedido usando a chave recebica na criação desse pedido\033[0m\n\n");
												}else if(escolha_do_Menu==2){
													printf("\n\n\t\033[1;34mTe permite criar um Pedido de cerimonia chamado de Post Mortem\033[0m\n\n");
												}
												
												while((Recepcao_Tecla = Get_Code()) != CHAVE_ESC){
													switch (Recepcao_Tecla) {
														case SETA_CIMA:
															system("Cls");
															if(escolha_do_Menu>0){
																escolha_do_Menu -= 1;
															}
															printf("\t        \033[1;32m============\033[1;35mMENU DOS SERVIÇOS\033[1;32m============\033[0m\n");
															for(int i=0;i<MAX_Menu_Servicos;i++){
																if(escolha_do_Menu==i){
																	printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_SERVIÇOS[i]);
																	for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																		printf(" ");
																	}
																	printf("\033[1;32m|\033[0m\n");
																}else{
																	printf("\t\t\033[1;32m|\033[0m      %s", MENU_SERVIÇOS[i]);
																	for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																		printf(" ");
																	}
																	printf("\033[1;32m|\033[0m\n");	
																}
															}
															printf("\t        \033[1;32m=========================================\033[0m\n");
															
															if(escolha_do_Menu==0){
																printf("\n\n\t\033[1;34mTe permite pesquisar entre os pedidos já existentes usando a palavra chave\033[0m\n\n");
															}else if(escolha_do_Menu==1){
																printf("\n\n\t\033[1;34mTe permite criar uma confirmação de pedido usando a chave recebica na criação desse pedido\033[0m\n\n");
															}else if(escolha_do_Menu==2){
																printf("\n\n\t\033[1;34mTe permite criar um Pedido de cerimonia chamado de Post Mortem\033[0m\n\n");
															}
																											
															break;
														case SETA_BAIXO:
															system("Cls");
															if(escolha_do_Menu<2){
																escolha_do_Menu += 1;
															}
															printf("\t        \033[1;32m============\033[1;35mMENU DOS SERVIÇOS\033[1;32m============\033[0m\n");
															for(int i=0;i<MAX_Menu_Servicos;i++){
																if(escolha_do_Menu==i){
																	printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_SERVIÇOS[i]);
																	for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																		printf(" ");
																	}
																	printf("\033[1;32m|\033[0m\n");
																}else{
																	printf("\t\t\033[1;32m|\033[0m      %s", MENU_SERVIÇOS[i]);
																	for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																		printf(" ");
																	}
																	printf("\033[1;32m|\033[0m\n");	
																}
															}
															printf("\t        \033[1;32m=========================================\033[0m\n");
															
															if(escolha_do_Menu==0){
																printf("\n\n\t\033[1;34mTe permite pesquisar entre os pedidos já existentes usando a palavra chave\033[0m\n\n");
															}else if(escolha_do_Menu==1){
																printf("\n\n\t\033[1;34mTe permite criar uma confirmação de pedido usando a chave recebica na criação desse pedido\033[0m\n\n");
															}else if(escolha_do_Menu==2){
																printf("\n\n\t\033[1;34mTe permite criar um Pedido de cerimonia chamado de Post Mortem\033[0m\n\n");
															}
																											
															break;
														case CHAVE_ENTER:
															//"Procurar Confirmação de Pedido", "Criar confirmação de Pedidos", "Serviços Post Mortem"}
															switch (escolha_do_Menu) {
																case 0:
																	//Procurar Confirmação de Pedido
																	
																		//imprimir nota fiscal
																	
																	break;
																case 1:
																	//Criar confirmação de Pedidos
																	
																	
																	break;
																case 2:
																	//Serviços Post Mortem
																	//adicionar arquivo fopen "a" append
																	system("Cls");
																	for(int i=0;i<5;i++){
																		//TODO
																		system("Cls");
																		printf("\n\n\t\t\033[2;37mConectando ao Cadastro do Post Mortem");
																		for(int j=0;j<4;j++){
																			Sleep(500);
																			printf(".");
																		}
																	}
																	Sleep(rand() % 3000+1);
																	system("Cls");
																	printf("\n\n\t\t\033[0mConectado ao Cadastro do Post Mortem\n");
																	printf("\n\n\t\tDe enter\n\n");
																	getch();
																	system("Cls");
																	//CADASTRO PESSOA FÍSICA
																	Sleep(rand() % 3000+1);
																	fflush(stdin);
																	system("Cls");
																	printf("\nCADASTRO DO ORGANIZADOR\n\n");
																	printf("Nome: ");//nome pessoa
																	//scanf("%s", nome);
																	fgets(nome , 40, stdin);
																	fflush(stdin);
																	printf("CPF: ");//cpf pessoa
																	//scanf("%s", cpf);
																	fgets(cpf,20,stdin);
																	fflush(stdin);
																	printf("Ano de nascimento: ");//data nascimento pessoa (se de menor cancelar cadastro)
																	scanf("%d",&ano);
																	idade=2023-ano;
																		if(idade<18){
																			//adicionar fclose
																			do{
																				printf("Menor de idade. Cadastro Indisponível.\n");
																			// fazer um Getch e adicionar menu
																				printf("\n\n===========================================");
																				printf("\n|                                         |");
																				printf("\n|   \033[1;34mDe Enter para ir ao menu do Usuário\033[0m   |");
																				printf("\n|                                         |");
																				printf("\n===========================================");
																			}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
																			//Adicionar Menu aqui
																			system("Cls");
																			printf("\t        \033[1;32m============\033[1;35mMENU DOS SERVIÇOS\033[1;32m============\033[0m\n");
																			for(int i=0;i<MAX_Menu_Servicos;i++){
																				if(escolha_do_Menu==i){
																					printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_SERVIÇOS[i]);
																					for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																						printf(" ");
																					}
																					printf("\033[1;32m|\033[0m\n");
																				}else{
																					printf("\t\t\033[1;32m|\033[0m      %s", MENU_SERVIÇOS[i]);
																					for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																						printf(" ");
																					}
																					printf("\033[1;32m|\033[0m\n");	
																				}
																			}
																			printf("\t        \033[1;32m=========================================\033[0m\n");
																			
																			if(escolha_do_Menu==0){
																				printf("\n\n\t\033[1;34mTe permite pesquisar entre os pedidos já existentes usando a palavra chave\033[0m\n\n");
																			}else if(escolha_do_Menu==1){
																				printf("\n\n\t\033[1;34mTe permite criarr uma confirmação de pedido usando a chave recebica na criação desse pedido\033[0m\n\n");
																			}else if(escolha_do_Menu==2){
																				printf("\n\n\t\033[1;34mTe permite criar um Pedido de cerimonia chamado de Post Mortem\033[0m\n\n");
																			}
																																																								
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
																			printf("Nome Do Organizador: %s",nome);//nome
																			printf("Idade: %d anos\n",idade);//idade
																			printf("CPF: %s",cpf);//cpf
																			printf("Relação com o falecido: %s",relacao);//relação com o falecido
																			printf("\nEmail para contato: %s",email);//email
																	
																		//confirmar cadastro
																			printf("\n\nConfirmar Cadastro?\nSim-1\tNão-2\n");
																			scanf("%d",&confirma);
																		
																			if(confirma==2){
																				//adicionar fclose
																				do{
																					system("Cls");
																					printf("\nPor favor, refaça seu cadastro.\n\n");
																					printf("\n\n===========================================");
																					printf("\n|                                         |");
																					printf("\n|   \033[1;34mDe Enter para ir ao menu do Usuário\033[0m   |");
																					printf("\n|                                         |");
																					printf("\n===========================================");
																				}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
																				//Adicionar Menu aqui
																				system("Cls");
																				printf("\t        \033[1;32m============\033[1;35mMENU DOS SERVIÇOS\033[1;32m============\033[0m\n");
																				for(int i=0;i<MAX_Menu_Servicos;i++){
																					if(escolha_do_Menu==i){
																						printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_SERVIÇOS[i]);
																						for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																							printf(" ");
																						}
																						printf("\033[1;32m|\033[0m\n");
																					}else{
																						printf("\t\t\033[1;32m|\033[0m      %s", MENU_SERVIÇOS[i]);
																						for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																							printf(" ");
																						}
																						printf("\033[1;32m|\033[0m\n");	
																					}
																				}
																				printf("\t        \033[1;32m=========================================\033[0m\n");
																				
																				if(escolha_do_Menu==0){
																					printf("\n\n\t\033[1;34mTe permite pesquisar entre os pedidos já existentes usando a palavra chave\033[0m\n\n");
																				}else if(escolha_do_Menu==1){
																					printf("\n\n\t\033[1;34mTe permite criarr uma confirmação de pedido usando a chave recebica na criação desse pedido\033[0m\n\n");
																				}else if(escolha_do_Menu==2){
																					printf("\n\n\t\033[1;34mTe permite criar um Pedido de cerimonia chamado de Post Mortem\033[0m\n\n");
																				}
																			}
																			else{
																				
																				//adicionar fprintf 
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
																					
																				sleep(3000);
																				system("Cls");
																				printf("O evento será fechado?: ");
																				scanf("%s", evento);
																				
																				if(strcmp(evento, "Sim")==0 || strcmp(evento, "sim")==0 || strcmp(evento, "S")==0 || strcmp(evento, "s")==0){
																					printf("\n\nO preço por individuo é de R$ 10,00");
																					printf("\n\nQuantos individuos atenderão o evento?: ");
																					scanf("%d", &convidados);
																					
																					char nome_dos_convidados[20][convidados];
																					
																					for(int i=0;i<convidados;i++){
																						contador = i + 1;
																						printf("\n\nDigite o nome do %dº convidado: ", contador);
																						scanf("%s", nome_dos_convidados[i]);
																					}
																					int convidadosvalor = convidados * 10;
																							printf("O custo total dos convidados é R$%d,00", convidadosvalor);
																				}
																				else{
																					printf("\n\nA cerimônia aberta possui um custo fixo de R$2500,00\n\n");
																					int cerimonia_aberta = 2500;
																				}
																				
																				
																				//calcular o valor total da cerimonia (Usando Juros e extras)																	
																			}	
																		}
																		
																
																		
																
																	
	
																	break;
															}
															break;
														default:
															system("Cls");
															printf("\t        \033[1;32m============\033[1;35mMENU DOS SERVIÇOS\033[1;32m============\033[0m\n");
															for(int i=0;i<MAX_Menu_Servicos;i++){
																if(escolha_do_Menu==i){
																	printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_SERVIÇOS[i]);
																	for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																		printf(" ");
																	}
																	printf("\033[1;32m|\033[0m\n");
																}else{
																	printf("\t\t\033[1;32m|\033[0m      %s", MENU_SERVIÇOS[i]);
																	for(int j=0;j<Contador_de_Casas_Other_servico[i];j++){
																		printf(" ");
																	}
																	printf("\033[1;32m|\033[0m\n");	
																}
															}
															printf("\t        \033[1;32m=========================================\033[0m\n");
															
															if(escolha_do_Menu==0){
																printf("\n\n\t\033[1;34mTe permite pesquisar entre os pedidos já existentes usando a palavra chave\033[0m\n\n");
															}else if(escolha_do_Menu==1){
																printf("\n\n\t\033[1;34mTe permite criar uma confirmação de pedido usando a chave recebica na criação desse pedido\033[0m\n\n");
															}else if(escolha_do_Menu==2){
																printf("\n\n\t\033[1;34mTe permite criar um Pedido de cerimonia chamado de Post Mortem\033[0m\n\n");
															}
															
															printf("\n\n\tTecla Não reconhecida\n");
															break;
													}
												}
												
												break;
											case 3:
												//Sair
												system("Cls");
												printf("\n\n\t\tSaindo da Conta");
												for(int i=0;i<=3;i++){
													Sleep(500);
													printf(".");
												}
												system("Cls");
												Sleep(500);
												printf("\n\n\t\t\033[2;37mConta sendo Finalizada\033[0m\n\n");
												Sleep(rand() % 5000);
												system("Cls");
												printf("\n\n\t\tConta Finalizada\n\n");
												Sleep(rand() % 5000);
												system("Cls");
												printf("Agora:\n");
												printf("\n\n\t\tSaindo");
												for(int i=0;i<=3;i++){
													Sleep(500);
													printf(".");
												}
												system("Cls");
												Sleep(500);
												printf("\n\n\t\t\033[2;37mSessão sendo Finalizada\033[0m\n\n");
												Sleep(rand() % 5000);
												system("Cls");
												printf("\n\n\t\tSessão Finalizada\n\n");
												exit(0);
												return 0;						
												break;
										}
										break;
									default:
										printf("\t        \033[1;32m==============\033[1;35mMENU DO USUÁRIO\033[1;32m==============\033[0m\n");
										for(int i=0;i<MAX_Menu_Usuario;i++){
											if(escolha_do_Menu==i){
												printf("\t\t\033[1;32m|\033[0m   \033[4;31m-> %s\033[0m", MENU_USUARIO[i]);
												for(int j=0;j<Contador_de_Casas_Usuario[i];j++){
													printf(" ");
												}
												printf("\033[1;32m|\033[0m\n");
											}else{
												printf("\t\t\033[1;32m|\033[0m      %s", MENU_USUARIO[i]);
												for(int j=0;j<Contador_de_Casas_Usuario[i];j++){
													printf(" ");
												}
												printf("\033[1;32m|\033[0m\n");
											}	
										}
										printf("\t        \033[1;32m===========================================\033[0m\n");	
										if(escolha_do_Menu==0){
											printf("\n\n\t\033[1;34mTe dá acesso a assistencia sobre o programa de forma que você entenda melhor como ele funciona\033[0m\n\n");
										}else if(escolha_do_Menu==1){
											printf("\n\n\t\033[1;34mTe da Acesso as configurações personalizadas do programa\n\tTanto a configuração do seu perfil como uma configuração geral\033[0m\n\n");
										}else if(escolha_do_Menu==2){
											printf("\n\n\t\033[1;34mAcessa os Serviços que a Nossa funeraria disponibiliza\033[0m\n\n");
										}else if(escolha_do_Menu==3){
											printf("\n\n\t\033[1;34mSai desse programa e ao mesmo tempo faz Log Out\033[0m");
										}
										printf("\t        Tecla Não Correspondente");									
										break;
								}
							}
							
						}else{
							
							do{
							system("Cls");
							printf("\n\n\n\033[1;32mInfelizmente a senha ou o UserName estão incorretos\n");
							printf("Verifique se a Conta que esta tentando acessar exista\n");
							printf("Se essa conta for inexistente faça o \033[4;97mSign Up\033[0m\n\n");
							
							printf("\n\n\t==========================================");
							printf("\n\t|                                        |");
							printf("\n\t|   \033[1;34mDe ENTER para ir ao MENU PRINCIPAL\033[0m   |");
							printf("\n\t|                                        |");
							printf("\n\t==========================================");
							}while((Recepcao_Tecla = Get_Code()) != CHAVE_ENTER);
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
						}
					
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
						printf("\n\n\t\t\033[2;37mSessão sendo Finalizada\033[0m\n\n");
						Sleep(rand() % 5000);
						system("Cls");
						printf("\n\n\t\tSessão Finalizada\n\n");
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
	

	
	
		
	return 0;
}
