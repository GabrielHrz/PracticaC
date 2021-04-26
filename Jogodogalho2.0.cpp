#include <stdio.h>

void exibirTabuleiro(char a1, char a2, char a3, char a4, char a5, char a6, char a7, char a8, char a9)
{
	printf("\n  | 1 | 2 | 3 \n");
	printf("1 | %c | %c | %c \n",a1, a2, a3);
	printf("--------------- \n");
	printf("2 | %c | %c | %c \n",a4, a5, a6);
	printf("--------------- \n");
	printf("3 | %c | %c | %c \n",a7, a8, a9);
}

int main()
{

    char a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int erro = 0, vencedor = 0, empate = 0;
    char jogador1[50], jogador2[50], simbolo1, simbolo2;
	char v, f;
	bool repeat = true;
	while(repeat){
		
	    a1 = ' ';
	    a2 = ' ';
	    a3 = ' ';
	    a4 = ' ';
	    a5 = ' ';
	    a6 = ' ';
	    a7 = ' ';
	    a8 = ' ';
	    a9 = ' ';
	
	    printf("Jogo da Velha \n \n");
	    exibirTabuleiro(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	
		printf("\n \n Introduza o nome do jogador 1: \n");
		scanf("%s",&jogador1);
		printf("Introduza o nome do jogador 2: \n");
		scanf("%s",&jogador2);
	
		scanf("%c");
		printf("Jogador 1, introduza o simbolo que quer jogar: \n");
		scanf("%c",&simbolo1);
	
		do
		{
	
			getchar();
			printf("Jogador 2, introduza o simbolo do jogador 2: \n");
			scanf("%c",&simbolo2);
	
		}while(simbolo1 == simbolo2);
	
		int linha, coluna;
	
		exibirTabuleiro(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		do{
		// Jogador 1;
		do{
		erro = 0;
		do
		{
			printf("Jogador1\nIntroduza a linha \n");
			scanf("%i",&linha);
	
		}while(linha>3 || linha<1);
	
		do
		{
			printf("\nIntroduza a coluna \n");
			scanf("%i",&coluna);
	
		}while(coluna>3 || coluna<1);
	
		switch(linha)
		{
			case 1:
			{
				switch(coluna)
				{
				 	case 1:
				 	if(a1==' ')
						a1 = simbolo1;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
				 	break;
	
				 	case 2:
				 	if(a2==' ')
					a2 = simbolo1;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
	
					case 3:
					if(a3==' ')
					a3 = simbolo1;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
				}
			}
			break;
			case 2:
			{
				switch(coluna)
				{
				 	case 1:
				 	if(a4==' ')
					a4 = simbolo1;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
				 	break;
	
				 	case 2:
				 	if(a5 ==' ')
					a5 = simbolo1;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
	
					case 3:
					if(a6 ==' ')
					a6 = simbolo1;
					else
					{
					 erro = 1;
					 printf("Espaço ocupado");
					 printf(" Escolha outro");
				    }
					break;
				}
			}
			break;
			case 3:
			{
				switch(coluna)
				{
				 	case 1:
				 	if(a7 == ' ')
					a7 = simbolo1;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
				 	break;
	
				 	case 2:
				 	if(a8 ==' ')
					a8 = simbolo1;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
	
					case 3:
					if(a9==' ')
					a9 = simbolo1;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
				}
			}
			break;
		}
		} while(erro == 1);
	
		exibirTabuleiro(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	
		if(((a1==a2 &&  a1==a3) || (a1==a4 && a1==a7) || (a1==a5 && a1==a9)))
		{
			if(a1!=' '){
			if(a1==simbolo1)
			{
			printf("Jogador 1 Venceu");
			vencedor = 1;
			//empate = 0;
			}
			else{
			printf("Jogador 2 Venceu");
			vencedor = 1;
			//empate = 0;
			}
			}
		}
		else
			if((a2==a5 && a2 == a8))
			{
			if(a2!=' '){
			if(a2==simbolo1){
			printf("Jogador 1 Venceu");
			vencedor = 1;
			//empate = 0;
			}
			else{
			printf("Jogador 2 Venceu");
			vencedor = 1;
			//empate = 0;
			}
			}
		    }
		   else
		      if((a3==a5 && a3==a7) || (a3==a6 && a3==a9))
			  {
				if(a3!=' '){
				if(a3==simbolo1){
				printf("Jogador 1 Venceu");
				vencedor = 1;
				//empate = 0;
				}
				else{
				printf("Jogador 2 Venceu");
				vencedor = 1;
				//empate = 0;
				}
				}
		      }
			  else
				if ((a4==a5 && a4==a6))
				{
				if(a4!=' '){
				if(a4==simbolo1){
				printf("Jogador 1 Venceu");
				vencedor = 1;
				//empate = 0;
				}
				else
				{
				printf("Jogador 2 Venceu");
				vencedor = 1;
				//empate = 0;
		        }
		    	}
		    	}
				else
				  if(a7==a8 && a7==a9)
				  {
					if(a7!=' '){
					if(a7==simbolo1)
					{
					printf("Jogador 1 Venceu");
					vencedor = 1;
					//empate = 0;
					}
					else
					{
					printf("Jogador 2 Venceu");
					vencedor = 1;
					//empate = 0;
					}
					}
				  }
		printf("\nJogador 1 jogou e  resultado verificado: %i\n",vencedor);
		if(vencedor!=1 && (a1 == ' ' || a2 == ' ' || a3 == ' ' || a4 == ' ' || a5 == ' ' || a6 == ' ' || a7 == ' ' || a8 == ' ' || a9 == ' ')){
	
		// Jogador 2
		do{
		erro = 0;
		do
		{
			printf("Jogador 2\nIntroduza a linha \n");
			scanf("%i",&linha);
	
		}while(linha>3 || linha<1);
	
		do
		{
			printf("Introduza a coluna \n");
			scanf("%i",&coluna);
	
		}while(coluna>3 || coluna<1);
	
		switch(linha)
		{
			case 1:
			{
				switch(coluna)
				{
				 	case 1:
				 	if(a1==' ')
					a1 = simbolo2;
					else
					{
					 printf("Espaço ocupado");
					 printf(" Escolha outro");
					 erro = 1;
				    }
				 	break;
	
				 	case 2:
				 	if(a2==' ')
					a2 = simbolo2;
					else
					{
					 printf("Espaço ocupado");
					 printf(" Escolha outro");
				    }
						erro = 1;
					break;
	
					case 3:
					if(a3==' ')
					a3 = simbolo2;
					else
					{
					 printf("Espaço ocupado");
					 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
				}
			}
			break;
			case 2:
			{
				switch(coluna)
				{
				 	case 1:
				 	if(a4==' ')
					a4 = simbolo2;
					else
					{
					 printf("Espaço ocupado");
					 printf(" Escolha outro");
					 erro = 1;
				    }
				 	break;
	
				 	case 2:
				 	if(a5 ==' ')
					a5 = simbolo2;
					else
					{
					 printf("Escolha outro");
					 printf(" Espaço ocupado");
					 erro = 1;
				    }
					break;
	
					case 3:
					if(a6 ==' ')
					a6 = simbolo2;
					else
					{
					 printf("Espaço ocupado");
					 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
				}
			}
			break;
	
			case 3:
			{
				switch(coluna)
				{
				 	case 1:
				 	if(a7 == ' ')
					a7 = simbolo2;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
				 	break;
	
				 	case 2:
				 	if(a8 ==' ')
					a8 = simbolo2;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
	
					case 3:
					if(a9==' ')
					a9 = simbolo2;
					else
					{
						printf("Espaço ocupado");
	 				 printf(" Escolha outro");
					 erro = 1;
				    }
					break;
				}
			}
			break;
		}
		} while(erro == 1);
	
		exibirTabuleiro(a1, a2, a3, a4, a5, a6, a7, a8, a9);
	
			if(((a1==a2 &&  a1==a3) || (a1==a4 && a1==a7) || (a1==a5 && a1==a9)))
			{
				if(a1!=' '){
				if(a1==simbolo2){
				printf("Jogador 2 Venceu");
				vencedor = 1;
				//empate = 0;
				}
				else
				{
				printf("Jogador 1 Venceu");
				vencedor = 1;
				//empate = 0;
				}
				}
			}
			else
				if((a2==a5 && a2 == a8))
				{
				if(a2!=' '){
				if(a2==simbolo2){
				printf("Jogador 2 Venceu");
				vencedor = 1;
				//empate = 0;
				}
				else{
				printf("Jogador 1 Venceu");
				vencedor = 1;
				//empate = 0;
				}
				}
			    }
			   else
			      if((a3==a5 && a3==a7) || (a3==a6 && a3==a9))
				  {
				  	if(a3!=' '){
					if(a3==simbolo2)
					{
					printf("Jogador 2 Venceu");
					vencedor = 1;
					//empate = 0;
					}
					else{
					printf("Jogador 1 Venceu");
					vencedor = 1;
					//empate = 0;
					}
					}
			      }
				  else
					if ((a4==a5 && a4==a6))
					{
					if(a4!=' '){
					if(a4==simbolo2){
					printf("Jogador 2 Venceu");
					vencedor = 1;
					//empate = 0;
					}
					else{
					printf("Jogador 1 Venceu");
					vencedor = 1;
					//empate = 0;
					}
					}
			        }
					else
					  if(a7==a8 && a7==a9)
					  {
					  	if(a7!=' '){
						if(a7==simbolo2){
						printf("\nJogador 2 Venceu");
						vencedor = 1;
						fflush(stdin);
						//empate = 0;
						}
						else{
						printf("\nJogador 1 Venceu");
	                    vencedor = 1;
	                    fflush(stdin);
	                    //empate = 0;
						}
						}
				  	  }
				  }
		}while(vencedor!=1 && (a1 == ' ' || a2 == ' ' || a3 == ' ' || a4 == ' ' || a5 == ' ' || a6 == ' ' || a7 == ' ' || a8 == ' ' || a9 == ' '));
	
		if(vencedor!=1)
		 	printf("Houve empate \n");
		 	
		char ans;
		printf("Se Deseja Jogar de Novo escrever '1' : ");
		scanf("%i",&ans);
		
		if (ans != 1)
			repeat = false;
			
	}
}
