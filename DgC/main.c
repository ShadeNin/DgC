#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tutorial(){ //função para rodar o tutorial quando selecionado no menu inicial
	char tutorial[21][51];
	int i;
	int j;
	char player = '&';
	int px;
	int py;
	char tecla;
	char chave = '@';
	int Pchave; //chave quando no inventario
	
	px = 25;
	py = 10;
	Pchave = 0;
	
	system("cls");
	printf("Aqui iremos explicar um pouco sobre o jogo\n");
	printf("Voce pode apertar Esc a qualquer momento para fechar o tutorial e retornar ao menu inicial");
	sleep(6);
		
	do{
		system ("cls");
		for(i = 0; i < 21; i++) { // laço para imprimir o mapa
    		for(j = 0; j < 51; j++) {
        		if(i == 0 || i == 20) {  // Linhas superiores e inferiores
            		tutorial[i][j] = '*';
        		} else if(j == 0 || j == 50) {  // Bordas laterais
            		tutorial[i][j] = '*';
        		} else {
            		tutorial[i][j] = ' ';  // Preenche o resto com espaço em branco
        		}
        		tutorial[15][25] = chave; // poe a chave no mapa
        		if(Pchave != 0){
        			tutorial[0][25] = '=';// porta aberta
				}else{
					tutorial[0][25] = 'D';// porta fechada
				}
				tutorial[py][px] = player; // coloca o player no mapa
    		}	
		}
		for(i = 0; i < 21; i++){
			for(j = 0; j < 51; j++){
				printf("\t\t%c", tutorial[i][j]);
			}
			printf("\n");
		}
		if(Pchave == 0){
			printf("o simbolo & e voce, usando as teclas W, A, S e D voce conseguira se mover.");
			printf("\nChegue ate a chave(@) que abre a porta(D) e aperte I quando estiver em baixo dela");
		}else{
			printf("\nVa ate a porta(=) que acabou de abrir");
		}
		
	
		tecla = getch();
		
		switch(tecla){ // detecta o movimento do personagem
			case 119://tecla W para cima
				if(tutorial[py-1][px]!='*'&&tutorial[py-1][px]!='@'&&tutorial[py-1][px]!='D'){
					tutorial[py][px] = ' ';
					py--;
					tutorial[py][px] = player;
					break;
				}else{
					tutorial[py][px] = player;
					break;
				}
			case 115://tecla S para baixo
				if(tutorial[py+1][px]!='*'&&tutorial[py+1][px]!='@'&&tutorial[py+1][px]!='D'){
					tutorial[py][px] = ' ';
					py++;
					tutorial[py][px] = player;
					break;
				}else{
					tutorial[py][px] = player;
					break;
				}
			case 100://telca D para direita
				if(tutorial[py][px+1]!='*'&&tutorial[py][px+1]!='@'&&tutorial[py][px+1]!='D'){
					tutorial[py][px] = ' ';
					px++;
					tutorial[py][px] = player;
					break;
				}else{
					tutorial[py][px] = player;
					break;
				}
			case 97://telca A para esquerda
				if(tutorial[py][px-1]!='*'&&tutorial[py][px-1]!='@'&&tutorial[py][px-1]!='D'){
					tutorial[py][px] = ' ';
					px--;
					tutorial[py][px] = player;
					break;
				}else{
					tutorial[py][px] = player;
					break;
				}
			case 105://tecla I para interagir
				if(tutorial[py-1][px] == chave){
					Pchave = 1;
					chave = ' ';
				}
			break;
		}
		if(tutorial[0][15]!='D'&&tutorial[0][25]!='*'){
			if(tutorial[py][px]==tutorial[0][25]){
				tecla = 27;
			}
		}
	}while(tecla != 27);//tecla esc
	
	system("cls");
	printf("Parabens! Voce completou o tutorial basico.\n");
	printf("Existem algumas outras informacoes que voce pode precisar durante sua jornada, tais como: \n");
	printf("'O' serao botoes que voce podera apertar durante sua jornada\n# serao espinhos que irao ferir voce\n> serao teleportadores que irao permitir se mover mais rapido pelo mapa\nX serao inimigos que andam por ai, fique longe deles\nV serao inimigos que irao perseguir voce, fuja deles");
	printf("\nNo mais e isso, divirta-se!");
	printf("\n\nAperte ENTER para continuar.");
	getch();
}

int fase1(){
	char mapa1[10][20];
	char player;
	char porta1;
	char porta2;
	int px;
	int py;
	char chave1;
	char chave2;
	int pchave1;
	int pchave2;
	char inimigo1;
	char espinho;
	int i;
	int j;
	int ix;
	int iy;
	int pvida;
	int c1x;
	int c1y;
	char tecla;
	int inimov;
	int inival;
	
	pchave1 = 0;
	pchave2 = 0;
	pvida = 1;
	player = '&';
	chave1 = '@';
	chave2 = '@';
	inimigo1 = 'X';
	espinho = '#';
	c1x = 15;
	c1y = 3;
	px = 16;
	py = 7;
	ix = 6;
	iy = 4;
	srand(time(NULL));
	
	do{
			if(pchave1!=0){
			porta1 = '=';
		}else{
			porta1 = 'D';
		}
		if(pchave2!=0){
			porta2 = '=';
		}else{
			porta2 = 'D';
		}
		system("cls");
		for(i=0;i<10;i++){
			for(j=0;j<20;j++){
				if(i==0||i==9){
					mapa1[i][j]='*';
				}else if(j==0||j==10||j==19){
					mapa1[i][j]='*';
				}else{
					mapa1[i][j]=' ';
				}
				mapa1[6][0]=porta2;
				mapa1[6][10]=porta1;
				mapa1[c1y][c1x]=chave1;
				mapa1[7][3]=chave2;
				mapa1[py][px]=player;
				mapa1[iy][ix]=inimigo1;
				mapa1[c1y-1][c1x]=espinho;
				mapa1[c1y][c1x-1]=espinho;
				mapa1[c1y][c1x+1]=espinho;
				mapa1[c1y+1][c1x-1]=espinho;
				mapa1[c1y+1][c1x+1]=espinho;
			}
		}
		for(i=0;i<10;i++){
			printf("\t\t\t");
			for(j=0;j<20;j++){
				printf("%c", mapa1[i][j]);
			}
			printf("\n");
		}
		
		if(py==iy&&px==ix){
			pvida = 0;
		}
		
		tecla = getch();
		
		switch(tecla){
    		case 119:  
   		     if(mapa1[py-1][px]!='*'&&mapa1[py-1][px]!='D'&&mapa1[py-1][px]!='@'){
    		        mapa1[py][px] = ' ';
    		        py--;
    		        if(mapa1[py][px] == inimigo1 || mapa1[py][px] == espinho){
    		            pvida--;  
    		        }
    		        mapa1[py][px] = player;
   		     } else {
    		        mapa1[py][px] = player;
    		    }
    		    break;

   		 case 115: 
     		   if(mapa1[py+1][px]!='*'&&mapa1[py+1][px]!='D'&&mapa1[py+1][px]!='@'){
     		       mapa1[py][px] = ' ';
      		      py++;
     		       if(mapa1[py][px] == inimigo1 || mapa1[py][px] == espinho){
     		           pvida--; 
    		        }
    		        mapa1[py][px] = player;
    		    } else {
     		       mapa1[py][px] = player;
    		    }
    		    break;

    		case 97:  
    		    if(mapa1[py][px-1]!='*'&&mapa1[py][px-1]!='D'&&mapa1[py][px-1]!='@'){
    		        mapa1[py][px] = ' ';
    		        px--;
    		        if(mapa1[py][px] == inimigo1 || mapa1[py][px] == espinho){
    		            pvida--;  
    		        }
   		         mapa1[py][px] = player;
    		    } else {
    		        mapa1[py][px] = player;
    		    }
    		    break;

    		case 100:  
    		    if(mapa1[py][px+1]!='*'&&mapa1[py][px+1]!='D'&&mapa1[py][px+1]!='@'){
    		        mapa1[py][px] = ' ';
    		        px++;
      		      if(mapa1[py][px] == inimigo1 || mapa1[py][px] == espinho){
      		          pvida--;  
      		      }
     		       mapa1[py][px] = player;
     		   } else {
     		       mapa1[py][px] = player;
     		   }
     		   break;

    		case 105:  
     		   if(mapa1[py-1][px] == chave1){
     		       pchave1 = 1;
     		       chave1 = ' ';
     		   } else if(mapa1[py-1][px] == chave2){
     		       pchave2 = 1;
     		       chave2 = ' ';
    		    } else {
    		        mapa1[py][px] = player;
    		    }
     		   break;
     	}
     	if(pvida == 0){
     		return;;
		}
		inimov = rand()%2;
		inival = rand()%2;
		
		if(inimov==0){
			if(inival==0&&mapa1[iy][ix+1]!='*'&&mapa1[iy][ix+1]!='D'&&mapa1[iy][ix+1]!='@'){
				ix++;
			}else if(inival!=0&&mapa1[iy][ix-1]!='*'&&mapa1[iy][ix-1]!='D'&&mapa1[iy][ix-1]!='@'){
				ix--;
			}else{
				mapa1[iy][ix]=inimigo1;
			}
		}else{
			if(inival==0&&mapa1[iy+1][ix]!='*'&&mapa1[iy+1][ix]!='D'&&mapa1[iy+1][ix]!='@'){
				iy++;
			}else if(inival!=0&&mapa1[iy-1][ix]!='*'&&mapa1[iy-1][ix]!='D'&&mapa1[iy-1][ix]!='@'){
				iy--;
			}else{
				mapa1[iy][ix]=inimigo1;
			}
		}
		
		
		
		if(mapa1[6][0]!='D'&&mapa1[6][0]!='*'){
				if(mapa1[py][px]==mapa1[6][0]){
					tecla = 27;
				}
		}
				
	}while(tecla!=27);
	return pvida;
}

void derrota(){
	char tecla;
	int opcao=1;
		
	do{
		system("cls");
		
		
		printf("*****    *******  *******  *******  ********  ********  ********\n");
		printf("**  **   **       **   **  **   **  **    **  ********  ********\n");
		printf("**   **  *******  *******  *******  **    **     **     **    **\n");
		printf("**  **   **       **  **   **  **   **    **     **     ********\n");
		printf("*****    *******  **   **  **   **  ********     **     **    **\n");
		
		if(opcao==1){
			printf("> Tentar novamente!\n");
			printf("Menu inicial");
		}else if(opcao==2){
			printf("Tentar novamente!\n");
			printf("> Menu inicial");
		}
		
		tecla = getch();
		
		switch(tecla){
			case 119:
				if(opcao>1){
					opcao--;
				}else{
					opcao=2;
				}
				break;
			case 115:
				if(opcao<2){
					opcao++;
				}else{
					opcao=1;
				}
				break;
			case 13:
				if(opcao==1){
					fase1();
				}else if(opcao==2){
					return;
				}
				break;
		}
	}while(tecla!=27);
}
int main(int argc, char *argv[]) {
	int start = 1;
	char tecla;
	int pvida;
	
	
	do{
		
		system("cls");
		
		printf(" **     *   *  *   *  ******   ******  *******  *   *\n");
		printf(" *  *   *   *  **  *  *        *       *     *  **  *\n");
		printf(" *   *  *   *  * * *  *   ***  ******  *     *  * * *\n");
		printf(" *  *   *   *  *  **  *     *  *       *     *  *  **\n");
		printf(" **     *****  *   *  *******  ******  *******  *   *\n\n");
		printf("*****  *****  *****  *         *  *       ******  *****\n");
		printf("*      *   *  *   *  *    *    *  *       *       *   *\n");
		printf("*      *****  *****   *   *   *   *       ******  *****\n");
		printf("*      *  *   *   *    *  *  *    *       *       *  * \n");
		printf("*****  *   *  *   *     ** **     ******  ******  *   *\n\n");
	
		if(start==1){
			printf(">  Iniciar\n");
			printf("  Tutorial\n");
			printf("  Sair\n");
		}
		if(start==2){
			printf("  Iniciar\n");
			printf(">  Tutorial\n");
			printf("  Sair\n");
		}
		else if(start==3){
			printf("  Iniciar\n");
			printf("  Tutorial\n");
			printf(">  Sair\n");
		}
		
		tecla = getch();
		
		switch(tecla){
			case 119: //tecla W
				if(start > 1){
					start--;
				}
				else if( start == 1){
					start = 3;
				}
				break;
			case 115: //tecla S
				if(start < 3){
					start++;
				}
				else if(start == 3){
					start = 1;
				}
				break;
			case 13: //enter
				switch(start){
					case 1:
						printf("Que comece a jornada!");
						sleep (3);
						fase1();
						if(pvida==0){
							derrota();
						}
						break;
					case 2:
						printf("Iniciando o tutorial!");
						sleep (2);
						tutorial();
						break;
					case 3:
						system("cls");
						printf("Ate a proxima aventureiro!");
						sleep(3);
						tecla = 27;
						break;
				}
				break;
		}
	
	} while (tecla!=27); // tecla esc
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
