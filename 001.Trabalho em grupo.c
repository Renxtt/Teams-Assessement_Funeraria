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
	
//VARI�VEIS

//IN�CIO C�DIGO
	
	//CADASTRO	
	
	//INFO FUNER�RIA
		//nome da funeraria
		//telefone da funeraria
		//endere�o funeraria
		//horaria de trabalho	
	
	//CADASTRO PESSOA F�SICA
		//nome pessoa
		//data nascimento pessoa (se de menor cancelar cadastro)
		//cpf pessoa
		//email pessoa
		//comprova��o de rela��o com morto
	
	//CADASTRO MORTO
		//cpf do morto (para checar se ele realmente esta morto)
		//nome do morto
		//altura morto
		//largura morto
		//peso morto
	
	//SELE��O CERIMONIA
		//local
		//data(dia)
		//numero convidados - informar pre�o por convidado
	
	//decora��o - opcional
		//flores e velas
		//retrato do morto
		
	//servi�os
		//padre
		//cortejo
	
	//enterro
		//modelos pr� prontos de caix�o com P M G e personalizado
		//local do enterro
	//crema��o
		//informar estilos pr�-prontos de potes para as cinzas
		
	//transporte
		//mortu�rio->local
		//local->enterro/crema��o
				
	
	//calcular o valor total da cerimonia
	
	//imprimir nota fiscal
		
	return 0;
}
