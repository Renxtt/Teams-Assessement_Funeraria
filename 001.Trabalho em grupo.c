#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>
#include <stdbool.h>


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
//Rafael (Renxtt)
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

char Codigo_Chave_completo[1000];

	char Recebendo_arq_cpf_morto[1000][1000];
	char Recebendo_arq_nome_morto[1000][1000];
	
	
	char Recebendo_arq_cerimonia_local[100][100];
	char Recebendo_arq_cerimonia_data[100][100];

	
	//decoração
	
	char Recebendo_arq_Tipo_Passagem[100][100];
	float servico_padre;
	char Dat_falecimento[100];
	char Recebendo_Dat_falecimento[100][100];
	
	
	char Recebendo_arq_deco_retrato[100][100];
	
	
	//serviços

	char Recebendo_arq_Codigo[100][100]; //"Arquivo_Codigo_Busca.txt"
	
	
	//preço total do serviço

	char Recebendo_arq_Nome_vivo[100][100]; //"Arquivo_Nome_Vivo.txt", "a"
	char Recebendo_arq_cpf_vivo[100][000]; //"Arquivo_cpf_vivo.txt", "a"
	char Recebendo_arq_relacao_vivo[100][100]; //"Arquivo_relacao_vivo.txt", "a"
	char Recebendo_arq_email_vivo[1000][100]; //"Arquivo_email_vivo.txt", "a"
	int Recebendo_arq_qtd_Convidados[100]; 	
	float Recebendo_Valor_Total_XD[100];



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
	char parte_codigo[6][qtd_chave+2];
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
	system("color 02");
	system("Cls");
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
	char Pesquisa[100];
	
	
	//Variavel dos MENUS
	char MENU_PRINCIPAL[5][1000] = {"Configurações", "Assitencia", "Sign Up", "Log In", "Sair"};	
	char MENU_USUARIO[4][1000] = {"Assistencia para o(a) Usuário(a)", "Configurações", "Serviços", "Sair/Log Out"};
	char MENU_SERVIÇOS[3][1000] = {"Procurar Confirmação de Pedido", "Configurações", "Serviços Post Mortem"};
	
	//Crinado variaveis auxiliares
	int Contador_de_Casas_inicial[10], Contador_de_Casas_Usuario[10], Contador_de_Casas_Other_servico[10];
	int escolha_do_Menu = 0;
	int Contador_ch_SingUp, Contador_ch_LogIn;
	int Verificador_1V_2F=0;
	int Contador_do_Dono;
	int Recepcao_Tecla;
	float valor_transporte = 0;
	int cerimonia_aberta=0;
	//criando variavel para  receber arquivos
	FILE *Arquivo_Senhas; // caso for usar o nome do arquivo é "Cofre_de_Senhas_O_Curso.txt"
	FILE *Arquivo_UserNames; //  caso for usar o nome do arquivo é "Cofre_de_Users_O_Curso.txt"
	FILE *Arquivo_Donos; //  caso for usar o nome do arquivo é  "Cofre_de_Donos_O_Curso.txt"
	
	//criando variavel para evento fechado ou aberto
	int convidados,contador;
	char evento[10];
	float preco_flores=0;
	int convidadosvalor=0;
	float valor_velas=0;
	
	//arquivo do Morto
	FILE *arq_cpf_morto;
	FILE *arq_nome_morto;
	FILE *arq_altura_morto;
	FILE *arq_largura_morto;
	FILE *arq_peso_morto;
	
	
	
	FILE *arq_cerimonia_local;
	FILE *arq_cerimonia_data;
	
	//decoração
	
	FILE *arq_Tipo_Passagem;
	
	
	FILE *arq_deco_retrato;
	FILE *arq_valor_Total;
	
	//serviços
	
	FILE *arq_Codigo; //"Arquivo_Codigo_Busca.txt"
	
	
	//preço total do serviço

	FILE *arq_Nome_vivo; //"Arquivo_Nome_Vivo.txt", "a"
	FILE *arq_ano_vivo; //"Arquivo_Ano_Vivo.txt", "a" 
	FILE *arq_cpf_vivo; //"Arquivo_cpf_vivo.txt", "a"
	FILE *arq_relacao_vivo; //"Arquivo_relacao_vivo.txt", "a"
	FILE *arq_email_vivo; //"Arquivo_email_vivo.txt", "a"
	FILE *arq_qtd_Convidados; 
	FILE *arq_falecimento_morto;
	
	

	
	
	
	///////////////////////////////////////////////////////////////////////////
	
	//variaveis para 
	char cpf_morto[100],nome_morto[100];
	float  altura_morto,peso_morto,largura_morto;
	char cerimo_local[100], cerimo_data[100];
	char deco[15];
	char cores[15];
	int velas=0;
	char retrato[10];
	int padre=0;
	char cortico[10];
	char tam_caixao;
	char tipo_pote[70];
	int t_ent=0, transp=0;
	char local_ent[70];
	float Valor_Total_XD=0;
//	int calculo;
		

	
	
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
						system("Cls");
						printf("Infelizmente esse sistema está fora de ar\nVolte mais tarde");
						printf("\n\n\n============================\n");
						printf("|                          |\n");
						printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
						printf("|                          |\n");
						printf("============================\n\n");
						getch();
						fflush(stdin);
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
					case 1:
						//Assitencia
						printf("Esse trabalho foi feito para construir uma simulação de um site de uma funeraria feita em linguagem C\nPelos seguintes autores: \n\tDaniel Langner Jager\n\tArthur De Mattos Colodel\n\tPaola Romeu Bronzatti\n\tRafael Lemos Nunes\n\tMaria Luiza de Oliveira Batistel\n\tAllan Takeshi Morimoto");
						printf("\n\n\n============================\n");
						printf("|                          |\n");
						printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
						printf("|                          |\n");
						printf("============================\n\n");
						getch();
						fflush(stdin);
						
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
												system("Cls");
												printf("Infelizmente esse sistema está fora de ar\nVolte mais tarde");
												printf("\n\n\n============================\n");
												printf("|                          |\n");
												printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
												printf("|                          |\n");
												printf("============================\n\n");
												getch();
												fflush(stdin);
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
																	
																	system("Cls");
																	arq_cpf_morto = fopen("cpf_morto_base.txt", "r");
																	arq_nome_morto = fopen("nome_morto_base.txt","r");
																	
																	for(int i=0;i<100;i++){
																		fgets(Recebendo_arq_nome_morto[i], 100, arq_nome_morto);
																		fgets(Recebendo_arq_cpf_morto[i], 100, arq_cpf_morto);
																	}																	
							
																	arq_cerimonia_local = fopen("cerimonia_local.txt","r");
																	arq_cerimonia_data = fopen("cerimonia_data.txt","r");
																	
																	//decoração
																	
																	arq_Tipo_Passagem = fopen("Arquivo_De_Passagem.txt", "r");
																	arq_deco_retrato = fopen("decoracao_morto_retrato.txt","r");
																	arq_falecimento_morto = fopen("Arquivo_de_Data_Falecimento.txt", "r");	
																	arq_valor_Total = fopen("Arquivo_De_Valor_Total.txt", "r");
																	
																	//serviços
																	
																	arq_Codigo = fopen("Arquivo_Codigo_Busca.txt", "r"); //"Arquivo_Codigo_Busca.txt"
																	
																	
																	//preço total do serviço
																
																	arq_Nome_vivo = fopen("Arquivo_Nome_Vivo.txt", "r"); //"Arquivo_Nome_Vivo.txt", "a"
																	arq_cpf_vivo = fopen("Arquivo_cpf_vivo.txt", "r"); //"Arquivo_cpf_vivo.txt", "a"
																	arq_relacao_vivo = fopen("Arquivo_relacao_vivo.txt", "r"); //"Arquivo_relacao_vivo.txt", "a"
																	arq_email_vivo = fopen("Arquivo_email_vivo.txt", "r"); //"Arquivo_email_vivo.txt", "a"
																	arq_qtd_Convidados = fopen("Arquivo_qtd_Convidados", "r");
																	
																	
																	for(int i=0;i<100;i++){
																			
																		fgets(Recebendo_arq_cpf_morto[i], 100, arq_cpf_morto);
																		fgets(Recebendo_arq_nome_morto[i], 100, arq_nome_morto);
																			
																			
																		fgets(Recebendo_arq_cerimonia_local[i], 100, arq_cerimonia_local);
																		fgets(Recebendo_arq_cerimonia_data[i], 100, arq_cerimonia_data);
																			
																		//decoração
																		
																		fgets(Recebendo_arq_Tipo_Passagem[i], 100, arq_Tipo_Passagem);
																					
																		//                        V passar para int
																		fgets(Recebendo_arq_deco_retrato[i], 100, arq_deco_retrato);
																		fscanf(arq_valor_Total, "%f", Recebendo_Valor_Total_XD[i]);	
																		
																				
																		//serviços
																		
																		fgets(Recebendo_arq_Codigo[i], 100, arq_Codigo); //"Arquivo_Codigo_Busca.txt"
																			
																			
																		//preço total do serviço
																		
																		fgets(Recebendo_arq_Nome_vivo[i], 100, arq_Nome_vivo); //"Arquivo_Nome_Vivo.txt", "a"
															//			fprintf(arq_ano_vivo, "%d", Recebendo_arq_ano_vivo[i]); //"Arquivo_Ano_Vivo.txt", "a" 
																		fgets(Recebendo_arq_cpf_vivo[i], 100, arq_cpf_vivo); //"Arquivo_cpf_vivo.txt", "a"
																		fgets(Recebendo_arq_relacao_vivo[i], 100, arq_relacao_vivo); //"Arquivo_relacao_vivo.txt", "a"
																		fgets(Recebendo_arq_email_vivo[i], 100, arq_email_vivo); //"Arquivo_email_vivo.txt", "a"
																		scanf(Recebendo_arq_qtd_Convidados[i], 100, arq_qtd_Convidados);
																		fgets(Recebendo_Dat_falecimento[i], 100, arq_falecimento_morto); 	
																	}											


																	fclose(arq_cpf_morto);
																	fclose(arq_nome_morto);
																	
																	
							
																	fclose(arq_cerimonia_local);
																	fclose(arq_cerimonia_data);
																	
																	//decoração
																	
																	fclose(arq_Tipo_Passagem);
																	fclose(arq_deco_retrato);
																	fclose(arq_falecimento_morto);	
																	fclose(arq_valor_Total);
																	
																	//serviços
																	
																	fclose(arq_Codigo); //"Arquivo_Codigo_Busca.txt"
																	
																	
																	//preço total do serviço
																
																	fclose(arq_Nome_vivo); //"Arquivo_Nome_Vivo.txt", "a"
																	fclose(arq_cpf_vivo); //"Arquivo_cpf_vivo.txt", "a"
																	fclose(arq_relacao_vivo); //"Arquivo_relacao_vivo.txt", "a"
																	fclose(arq_email_vivo); //"Arquivo_email_vivo.txt", "a"
																	fclose(arq_qtd_Convidados); 
																		//imprimir nota fiscal
															
															
																	printf("Digite o Código que deseja Buscar: ");
																	fgets(Pesquisa, 100, stdin);
																	fflush(stdin);
																	strtok(Pesquisa, "\n");
																	
																	//criando variavel para evento fechado ou aberto
																					
																					
																	arq_Nome_vivo = fopen("Arquivo_Nome_Vivo.txt", "r");
																	
																																															
																	//arquivo do Morto
																			
																	
																	for(int i=0;i<10;i++){
																		printf("\n%s", Recebendo_arq_Codigo[i]);	
																		if(strcmp(Recebendo_arq_Codigo[i], Pesquisa)==0){
																			
																			system("Cls");
																			printf("\n__________________________________________________________");
																			printf("\nCODIGO PESQUISADO: %s", Recebendo_arq_Codigo[i]);
																			printf("\n----------------------------------------------------------");
																			printf("\nNOME DO ORGANIZADOR: %s", Recebendo_arq_Nome_vivo[i]);
																			printf("\n----------------------------------------------------------");
																			printf("\nNOME DO MORTO: %s", Recebendo_arq_nome_morto[i]);
																			printf("\n----------------------------------------------------------");
																			printf("\nFOI DADA A MORTE DO(A) %s NA DATA: %s", Recebendo_arq_nome_morto[i], Recebendo_Dat_falecimento[i]);
																			printf("\n----------------------------------------------------------");
																			printf("\nCPF DO MORTO: %s \nCONFIRMADO QUE MORREU", Recebendo_arq_cpf_morto[i]);
																			printf("\n----------------------------------------------------------");
																			printf("\nA CERIMÔNIA SERÁ REALIZADA NO LOCAL: %s", Recebendo_arq_cerimonia_local[i]);
																			printf("\n----------------------------------------------------------");
																			printf("\nNA SEGUINTE DATA: %s", Recebendo_arq_cerimonia_data[i]);
																			printf("\n----------------------------------------------------------");
																			printf("\nO TIPO DE PASSAGEM ESCOLHIDO PARA O %s FOI O: %s", Recebendo_arq_nome_morto[i], Recebendo_arq_Tipo_Passagem[i]);
																			printf("\n----------------------------------------------------------");
																			printf("\nO %s É SEU OU SUA: %s", Recebendo_arq_nome_morto[i], Recebendo_arq_relacao_vivo[i]);
																			printf("\n----------------------------------------------------------");
																			if(Recebendo_arq_qtd_Convidados[i]>0){
																				printf("\nA QUANTIDADE DE PESSOAS QUE COMPARECERÃO É: %d", Recebendo_arq_qtd_Convidados[i]);
																			}else{
																				printf("\nO ENTERRO SERÁ ABERTO A TODOS QUE QUISEREM IR");
																			}
																			printf("\n----------------------------------------------------------");
																			printf("\nO VALOR TOTAL DE TUDO OQUE FOI PEDIDO É DE: %.2f", Recebendo_Valor_Total_XD[i]);
																			printf("\n__________________________________________________________");
																			printf("\n");
																			
																			
																		}
																		
																	}																								
																	
																	
																	
																	break;
																case 1:
																	// confi
																	printf("Infelizmente esse sistema está fora de ar\nVolte mais tarde");
																	printf("\n\n\n============================\n");
																	printf("|                          |\n");
																	printf("|   \033[1;34mDe Enter para Seguir\033[0;32m   |\n");
																	printf("|                          |\n");
																	printf("============================\n\n");
																	getch();
																	fflush(stdin);
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
																case 2:
																	//Serviços Post Mortem
																	//adicionar arquivo fopen "a" append
																	
																	//nome do vivo
																	//cpf do vivo
																	//ano de nascimento
																	//relação do vivo e morto
																	//email do vivo
																//	FILE *arq_Nome_vivo; //"Arquivo_Nome_Vivo.txt", "a"
																//	FILE *arq_ano_vivo; //"Arquivo_Ano_Vivo.txt", "a" 
																//	FILE *arq_cpf_vivo; //"Arquivo_cpf_vivo.txt", "a"
																//	FILE *arq_relacao_vivo; //"Arquivo_relacao_vivo.txt", "a"
																//	FILE *arq_email_vivo;//"Arquivo_email_vivo.txt", "a"
																					
																	
																	arq_Nome_vivo = fopen("Arquivo_Nome_Vivo.txt", "a");
																	arq_ano_vivo = fopen("Arquivo_Ano_Vivo.txt", "a" );
																	arq_cpf_vivo = fopen("Arquivo_cpf_vivo.txt", "a");
																	arq_relacao_vivo = fopen("Arquivo_relacao_vivo.txt", "a");
																	arq_email_vivo = fopen("Arquivo_email_vivo.txt", "a");
																	
																	
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
																	strtok(nome, "\n");
																	printf("CPF: ");//cpf pessoa
																	//scanf("%s", cpf);
																	fgets(cpf,20,stdin);
																	fflush(stdin);
																	strtok(cpf, "\n");
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
																			scanf("%s", relacao);
																			printf("Email para contato: ");//email pessoa
																			scanf("%s", email);
																		

																			
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

																			fprintf(arq_Nome_vivo, "%s\n", nome);
																			fprintf(arq_ano_vivo, "%d\n", ano);
																			fprintf(arq_cpf_vivo, "%s\n", cpf);
																			fprintf(arq_relacao_vivo, "%s\n", relacao);
																			fprintf(arq_email_vivo, "%s\n", email);
																			
																			fclose(arq_Nome_vivo);
																			fclose(arq_ano_vivo);
																			fclose(arq_cpf_vivo);
																			fclose(arq_relacao_vivo);
																			fclose(arq_email_vivo); 
																			
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
																				
																				arq_qtd_Convidados = fopen("Arquivo_qtd_Convidados", "a");
																				
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
																				arq_cpf_morto = fopen("cpf_morto_base.txt", "a");
																				
																				
																					if(arq_cpf_morto==0){
																					printf("Erro de leitura do cpf do falecido" ); 
																					exit(0);
																					
																				}
																					printf("\nDigite o cpf do falecido: ");
																					scanf("%s",cpf_morto);
																				
																				fprintf(arq_cpf_morto,"%s\n",cpf_morto);	
																				fclose(arq_cpf_morto);
																				
																				arq_nome_morto = fopen("nome_morto_base.txt","a");
																				
																					if(arq_nome_morto ==0){
																					printf("Erro de leitura do nome do falecido");
																					exit(0);
																				}
																					printf("\nDigite o nome do falecido: ");
																					fflush(stdin);
																					fgets(nome_morto, 100, stdin);
																				
																				
																				arq_falecimento_morto = fopen("Arquivo_de_Data_Falecimento.txt", "a");
																				
																				printf("Digite a data de Felecimento: ");
																				fgets(Dat_falecimento, 100, stdin);
																				fflush(stdin);
																				strtok(Dat_falecimento, "\n");
																				
																				
																				fprintf(arq_falecimento_morto, "%s\n", Dat_falecimento);
																				fprintf(arq_nome_morto,"%s\n",nome_morto); 
																				fclose(arq_nome_morto);
																				fclose(arq_falecimento_morto);
																				
																				
																				arq_altura_morto = fopen("altura_morto_base.txt","a");
																				
																					if(arq_altura_morto ==0){
																					printf("Erro de leitura na altura do falecido.");
																					
																				}
																					printf("\nDigite aqui a altura do falecido: ");
																					scanf("%f",&altura_morto);
																					
																				
																				fprintf(arq_altura_morto,"%.2f\n",altura_morto);
																				fclose(arq_altura_morto);
																				
																				
																				
																				arq_peso_morto = fopen("peso_morto_base.txt","a");
																				
																					if(arq_peso_morto ==0){
																					printf("Erro de leitura no peso do falecido.");
																				}
																				
																					printf("\nDigite aqui o peso do falecido em kg: ");
																					scanf("%f",&peso_morto);
																				
																				fprintf(arq_peso_morto,"%.2f\n",peso_morto);
																				fclose(arq_peso_morto);
																				
																				
																				
																				arq_largura_morto = fopen("largura_morto_base.txt","a");
																				
																					if(arq_largura_morto ==0){
																					printf("Erro de leitura na largura do falecido.");
																				}
																				
																					printf("\nDigite a largura do falecido: ");
																					scanf("%f",&largura_morto);
																				
																				fprintf(arq_largura_morto,"%.2f\n",largura_morto);
																				fclose(arq_altura_morto);
																				
																				
																				system("Cls");
																				arq_cerimonia_local = fopen("cerimonia_local.txt","a");
																				
																					if(arq_cerimonia_local == 0){
																					printf("Erro de leitura em cerimonia local");
																					
																				}
	
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
																						fflush(stdin);
																						printf("\n\nDigite o nome do %dº convidado: ", contador);
																						fgets(nome_dos_convidados[i], 100, stdin);
																						fflush(stdin);
																						strtok(nome_dos_convidados[i], "\n");
																					}
																					
																					
																					
																					convidadosvalor = convidados * 10;
																					cerimonia_aberta = 0;
																							printf("O custo total dos convidados é R$%d,00", convidadosvalor);
																				}
																				
																				else{
																					printf("\n\nA cerimônia aberta possui um custo fixo de R$2500,00\n\n");
																					convidados = 0;
																					convidadosvalor = 0;
																					cerimonia_aberta = 2500;
																				}	
																				
																				fprintf(arq_qtd_Convidados, "%d\n", convidados);
																				fclose(arq_qtd_Convidados);
																				
																				arq_Tipo_Passagem = fopen("Arquivo_De_Passagem.txt", "a");
																				
																				//cremar ou enterrar?
																					printf("O cliente será cremado ou enterrado?\n1- Cremado\n2- Enterrado\n\nInsira o número correspondente:");
																					scanf("%d", &t_ent);
																					fflush(stdin);
																				
																				//enterro
																					//modelos pré prontos de caixão com P M G e personalizado
																					if(t_ent == 2){
																						
																						fprintf(arq_Tipo_Passagem, "Enterro\n");
																						fclose(arq_Tipo_Passagem);
																						
																						printf("\nQual será o tamanho do caixão desejado?\nP- pequeno\nM- Médio\nG- Grande\n\nInsira o tamanho correspondente: ");
																						scanf("%c", &tam_caixao);
																						fflush(stdin);

																						system("Cls");
		
																						printf("O Senhor gostaria uma decoração personalizada?");
																						printf("\n S/N");
																						
																						printf("\n\nOpção: ");
																						scanf("%s",deco);
																						
																						if(strcmp(deco,"Sim") == 0|| strcmp(deco,"sim") == 0|| strcmp(deco,"s") == 0 || strcmp(deco,"S") ==0) {
																							
																								printf("\nNo caixão, oferecemos um menu de algumas flores para a decoração: ");
																								Sleep(1000);
																								printf("\n Rosas \n Margarida \n Lirio  \n  Todas");
																								printf("\n");
																								Sleep(1000);
																								printf("\nUma porção de 40 rosas vale R$ 98,50\nUma porção de 40 margaridas vale R$ 110,20.\nUma porção de 40  Lirias vale R$136,80");
																								Sleep(1000);
																								printf("\n\nCaso o Senhor queira todas as flores, terá um desconto de 25%c", 37);
																								printf("\n");
																								
																								Sleep(2000);
																								printf("\n\nQuais tipos de flores você deseja no funeral? \n");		
																								scanf("%s",cores);	
																								
																						
																									 	if(strcmp(cores,"Rosas")== 0){
																											preco_flores = 98.50;																 		 
																											printf("\nSelecionado opção rosas. ");
																										}
																														
																										else if(strcmp(cores,"Margarita")== 0){						 
																											preco_flores = 110.20;								 		 
																											printf("\nSelecionado opção Margarida. ");
																										}
																														
																									
																										else if(strcmp(cores,"Lirio") ==0){	
																											preco_flores = 136.80;							 		 																															
																											printf("\nSelecionado opção Lirio. ");
																										}
																						
								
																						
																						Sleep(1000);
																						system("Cls");
																						printf("\n");
																						
																						
																						
																						
																						printf("Quantos pacotes de velas você deseja, lembrando que um pacote de 6 velas custam R$ 11,55?\n");
																						scanf("%d",&velas);
																						
																						valor_velas = velas *1.55;
																								
																															
																								
																						}else if(strcmp(deco,"Não") ==0 || strcmp(deco,"nao") == 0 || strcmp(deco,"não") == 0 || strcmp(deco,"Nao")  == 0 || strcmp(deco,"N") == 0|| strcmp(deco,"n") ==0){
																							printf("Certo! Sem decoração personalizada.");
																						
																						}
																				
																					}
																				
																				//cremação
																					//informar estilos pré-prontos de potes para as cinzas
																					if(t_ent == 1){
																						
																						fprintf(arq_Tipo_Passagem, "Cremação\n");
																						fclose(arq_Tipo_Passagem);
																						printf("\nQual será o estilo de pote?\n1- Aço inoxidável\n2- Madeira\n3- Bronze\n4- Biodegradável\n5- Hidrossolúvel\n\nInsira o material:");
																						fgets(tipo_pote,70,stdin);
																						strtok(tipo_pote, "\n");
																						fflush(stdin);
																						
																					}
																				
																				//transporte
																					//mortuário->local
																					printf("\nO cliente vai precisar do transporte?\nO serviço terá um custo extra de R$1000,00\n1- Sim\n2- Não\n\nInsira o número correspondente: ");
																					scanf("%d", &transp);
																					fflush(stdin);
																				
																					if(transp == 1){
																						
																						valor_transporte = 1000;
																						
																						printf("\nOnde o cliente será buscado?\nInsira o local:");
																						fgets(local_ent,70,stdin);
																						strtok(local_ent, "\n");
																						fflush(stdin);
																						
																						}
																		
																					printf("\nOnde o Senhor desejaria o local da cerimônia? ");
																					printf("\n");
																					printf("\n ");
																					fgets(cerimo_local,100,stdin);
																					fflush(stdin);
																					strtok(cerimo_local, "\n");
																					
																					fprintf(arq_cerimonia_local,"%s\n",cerimo_local);
																					fclose(arq_cerimonia_local);																				
																					
																					arq_cerimonia_data = fopen("cerimonia_data.txt","a");
																					
																						if(arq_cerimonia_data == 0){
																						printf("Erro de leitura em cerimonia data. ");
																						
																					}
																						printf("\nDigite a data da cerimônia do falecido: ");
																						fgets(cerimo_data,100,stdin);
																						fflush(stdin);
																						strtok(cerimo_data, "\n");
																					
																					fprintf(arq_cerimonia_data,"%s\n",cerimo_data);
																					fclose(arq_cerimonia_data);
																					
																					system("Cls");
																					
																																				
																						arq_deco_retrato = fopen("decoracao_morto_retrato.txt","a");
																							
																							if(arq_deco_retrato == 0){
																								printf("Erro de leitura do retrato");
																							}
																						
																						system("Cls");
																						
																						printf("Quais são as dimensões do retrato do falecido? Exemplo: 5X5\nDigite: ");
																						scanf("%s",retrato);
																						
																						fprintf(arq_deco_retrato,"%s\n",retrato);
																						fclose(arq_deco_retrato);
																						
																						system("Cls");
																						
																						
																						
																					
																					
																						
																					
																						printf("\nO serviço do padre varia de acordo com o serviço desejado.");
																						printf("\nDigite a númeração que desejar");
																						Sleep(1000);
																						printf("\n1-Leitura de passagens biblicas R$65,41.");
																						Sleep(1000);
																						printf("\n2-A oração pelo falecido(a) R$ 51,90.");
																						Sleep(1000);
																						printf("\n3-Ambas as opções acima");
																						Sleep(1000);
																						
																						
																						Sleep(1000);
																						printf("\nOpção: ");
																						scanf("%d", &padre);
																						
																						switch (padre) {
																							case 1:
																								//TODO
																								servico_padre = 65.41;
																								break;
																							case 2:
																								//TODO
																								servico_padre = 51.90;
																								break;
																							case 3:
																								//TODO
																								servico_padre = 117.31;
																								break;

																						}

																					arq_Codigo = fopen("Arquivo_Codigo_Busca.txt", "a");
																					arq_valor_Total = fopen("Arquivo_De_Valor_Total.txt", "a");
																					
																					Codigo_Chave(4);
																					Valor_Total_XD = valor_transporte + valor_velas + preco_flores + servico_padre + cerimonia_aberta + convidadosvalor;
																					
																					
																					do{
																						printf("O valor total que deu como preço do seu evento é: R$%.2f", Valor_Total_XD);

	
																						printf("\n\n\n==============================\n");
																						printf("|                            |\n");
																						printf("|   \033[1;34mDe 3 Enter para Seguir\033[0;32m   |\n");
																						printf("|                            |\n");
																						printf("==============================\n\n");		
																						
																						
																					}while((Recepcao_Tecla=Get_Code()) !=CHAVE_ENTER);
																					
																				
																				do{
																					system("Cls");
																					
																					printf("O Codigo de Acesso do seu Pedido é: %s", Codigo_Chave_completo);
																					
																					printf("\n\n\n==============================\n");
																					printf("|                            |\n");
																					printf("|   \033[1;34mDe 3 Enter para Seguir\033[0;32m   |\n");
																					printf("|                            |\n");
																					printf("==============================\n\n");		
																						
																				}while((Recepcao_Tecla=Get_Code()) !=CHAVE_ENTER);	
																							
																					printf("\n\n\n========================================\n");
																					printf("|                                      |\n");
																					printf("|   \033[1;34mDe Enter para Seguir para o MENU\033[0;32m   |\n");
																					printf("|                                      |\n");
																					printf("========================================\n\n");		
																					
																					printf("\nOU");

																					printf("\n\n\n==================================================\n");
																					printf("|                                                |\n");
																					printf("|   \033[1;34mDe Enter para Seguir para o proximo pedido\033[0;32m   |\n");
																					printf("|                                                |\n");
																					printf("==================================================\n\n");		
																					
																					fprintf(arq_valor_Total, "%f\n", Valor_Total_XD);
																					fprintf(arq_Codigo, "%s\n", Codigo_Chave_completo);
																					fclose(arq_Codigo);
																					fclose(arq_valor_Total);
																					
																					
																				if((Recepcao_Tecla=Get_Code()) == CHAVE_ENTER){
																					
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
																		
																				Sleep(3000);


																				
																				//calcular o valor total da cerimonia (Usando Juros e extras)
				
																				arq_cpf_morto = fopen("cpf_morto_base.txt", "r");
																				arq_nome_morto = fopen("nome_morto_base.txt","r");
																				
																				for(int i=0;i<100;i++){
																					fgets(Recebendo_arq_nome_morto[i], 100, arq_nome_morto);
																					fgets(Recebendo_arq_cpf_morto[i], 100, arq_cpf_morto);
																				}																	
										
																				fclose(arq_cpf_morto);
																				fclose(arq_nome_morto);
																																					
																				
																				
																																	
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
