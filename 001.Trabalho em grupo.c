#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#include <time.h>
//EQUIPE:
//Allan
//Eli
//DANIEL GAMEPLAYS
//Pe_brauler

main(void){
	setlocale(LC_ALL, "portuguese");
	unsigned int cp = 1252;
	unsigned int cpin = GetConsoleCP();
	unsigned int cpout = GetConsoleOutputCP();
	SetConsoleCP(cp);
	SetConsoleOutputCP(cp);
	
//VARIÁVEIS

//INÍCIO CÓDIGO
	
	//CADASTRO	
	
	//INFO FUNERÁRIA
		//nome da funeraria
		//telefone da funeraria
		//endereço funeraria
		//horaria de trabalho	
	
	//CADASTRO PESSOA FÍSICA
		//nome pessoa
		//data nascimento pessoa (se de menor cancelar cadastro)
		//cpf pessoa
		//email pessoa
		//comprovação de relação com morto
	
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
