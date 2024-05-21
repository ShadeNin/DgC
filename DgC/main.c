#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

//validação das funções
void tutorial();
void derrota();
void vitoria();
void fase1();
void fase2();
void fase3();
void pause();
void monstroLV1();
void monstroLV2();

//variaveis globais
int pvida = 3;
int px;
int py;
int i;
int j;
int historia = 1;
int lin;
int col;
int monX;
int monY;
char tecla;

//função para o mosntro lv1
void monstroLV1(char mapa[lin][col]){
	srand(time(NULL));
	int val = rand()%2;
	int num = rand()%2;
	
	if(val==0){
			if(num==0&&mapa[monY][monX+1]!='*'&&mapa[monY][monX+1]!='D'&&mapa[monY][monX+1]!='@'&&mapa[monY][monX+1]!='#'){
				monX++;
			}else if(num!=0&&mapa[monY][monX-1]!='*'&&mapa[monY][monX-1]!='D'&&mapa[monY][monX-1]!='@'&&mapa[monY][monX-1]!='#'){
				monX--;
			}else{
				mapa[monY][monX];
			}
		}else{
			if(num==0&&mapa[monY+1][monX]!='*'&&mapa[monY+1][monX]!='D'&&mapa[monY+1][monX]!='@'&&mapa[monY+1][monX]!='#'){
				monY++;
			}else if(num!=0&&mapa[monY-1][monX]!='*'&&mapa[monY-1][monX]!='D'&&mapa[monY-1][monX]!='@'&&mapa[monY-1][monX]!='#'){
				monY--;
			}else{
				mapa[monY][monX];
			}
		}
}

void monstroLV2(char mapa[lin][col]){
	srand(time(NULL));
	int val = rand()%2;
	int num = rand()%2;
	
	//mov do inimigo 2
	if(py!=monY&&px!=monX&&tecla!=105){
		val = rand()%2;
	}else if(py == monY&&tecla!=105){
		val = 0;
	}else if(px == monX&&tecla!=105){
		val = 1;
	}else if(tecla == 105){
		val = 3;
	}
	
	//inimigo 2 seguindo o player
	if(val == 0){
		if(px>monX&&mapa[monY][monX+1]!='D'&&mapa[monY][monX+1]!='*'&&mapa[monY][monX+1]!='#'&&mapa[monY][monX+1]!='@'){
			monX++;
		}else if(px<monX&&mapa[monY][monX-1]!='D'&&mapa[monY][monX-1]!='*'&&mapa[monY][monX-1]!='#'&&mapa[monY][monX-1]!='@'){
			monX--;
		}
	}else if(val == 1){
		if(py>monY&&mapa[monY+1][monX]!='D'&&mapa[monY+1][monX]!='#'&&mapa[monY+1][monX]!='@'&&mapa[monY+1][monX]!='*'){
			monY++;
		}else if(py<monY&&mapa[monY-1][monX]!='D'&&mapa[monY-1][monX]!='@'&&mapa[monY-1][monX]!='#'&&mapa[monY-1][monX]!='*'){
			monY--;
		}
	}
}

//função para pause usada na função de história
void pause(){ 
system("pause");
system("cls");
}

//Função para chamar a história do jogo
void hist(){
	if(historia == 1){//primeira fase
		system("cls");
		printf ("Caminhando para casa\n\n");
		pause();
 		printf ("player: Estou cansado…\n\n");
		pause();
 		printf ("player: Todos os dias apenas acordando virando madrugadas programando e dormindo:\n\n");
		pause();
 		printf ("player: Queria sair desse loop infinito, dessa monotonia desde que virei programador\n\n");
		pause();
		printf ("player: Pegar todo dia esse centenario lotado ta me matando…\n\n");
		pause();
		printf ("Chegando em casa\n\n");
		pause();
		printf ("player: Estou exausto vou para meu quarto descansar\n\n");
		pause();
		printf ("Abrindo a porte ate que...\n\n");
		pause();
		printf ("player: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n\n");
		pause();
		printf ("player: O que?\n\n");
		pause();
		printf("player: Eu...\n\n");
		pause;
		printf ("player: SOU 1 BIT\n\n"); 
		pause();
		printf ("Derrepente aparece uma voz no fundo\n\n"); 
		pause();
		printf ("Heyyy listen\n\n");
		pause();
		printf ("Ola jogador\n\n"); 
		pause();
		printf ("Voce acabou caindo no meu portal aleatorio\n\n"); 
		pause();
		printf ("Um mundo paralelo aonde a terra e feita por linguagem C\n\n");
		pause();
		printf ("Voce pode me chamar de Dev\n\n");
		pause();
		printf ("player: Errr…\n\n");
		pause();
		printf ("player: QUEEEEEEEEE?\n\n");
		pause();
		printf  ("Dev:Isso mesmo\n\n"); 
		pause();
		printf ("Dev: Voce tera que usar seus anos de conhecimento sobre programacaoo se quiser voltar ao seu mundo\n\n");
		pause();
		printf ("player: Entao mundos paralelos realmente sao reais..\n\n");
		pause();
		printf ("Dev: E voce nem imagina\n\n"); 
		pause();
		printf ("player: Egua\n\n");  
		pause();
		printf ("Dev: Coloquei alguns testes com seus arqui-inimigos na programação para provar sua maestria como programador\n\n");  
		pause();
		printf ("Dev: Se prepare para os desafios!\n\n");
		pause();
		printf ("player: To certo!\n\n"); 
		pause();
		return;
	}else if(historia == 2){//segunda fase
		system("cls");
		printf("Player: Se eu soubesse que era facil assim eu preferia pegar o centenario em horario de pico\n\n");
		pause();
		printf("Dev: Qual foi jogador?  Te acalma ainda tem muito pela frente\n\n");
		pause();
		printf("Dev: Aumentarei mais a inteligencia do monstro e o percurso se prepare\n\n");
		pause();
		printf("Player: Vamo nessa!\n\n");
		pause();
		return;
	}else if(historia == 3){//terceira fase
		system("cls");
		printf("Player: Egua quase virei jogador do Vasco nessa\n\n"); 
		pause();
		printf("Dev:Parabens por se manter firme nessa jornada suas habilidades são notaveis\n\n");  
		pause();
		printf("Dev: Voce e um programador formidavel\n\n");  
		pause(); 
		printf("Player: Obrigado ^^\n\n"); 
		pause(); 
		printf("Dev: Agora irei lançar o meu ultimato , meu ultimo teste para comprovar sua total capacidade como programador\n\n"); 
		pause(); 
		printf("Dev:Irei lançar o pior inimigo de todo o programador\n\n");
		pause();
		printf("Dev:Utilize de toda sua capacidade para voltar ao seu mundo\n\n");  
		pause();
		printf("Player: Irei dar meu melhor!\n\n");
		pause();
	}else if(historia == 4){//fim do jogo
		system("cls");
		printf("Player:Como um ; pode causar tantos problemas\n\n");
		pause(); 
		printf("Dev: Parabens você realmente provou todo seu empenho e talento como um programador\n\n");
		pause();
		printf("Dev: Aqui entre nesse portal e você ira voltar ao seu mundo\n\n");
		pause(); 
		printf("Player:Muito obrigado por tudo estava precisando sair daquela vida pacata de programador\n\n");
		pause();
		printf("Dev: Por nada !\n\n");
		pause(); 
		printf("Player:Agora irei voltar a pegar meus 3 ônibus pra ir no trabalho\n\n");
		pause();
		printf("Entra no portal\n\n");
		printf("Player: AAAAAAAAAAAAAAAAAAA\n\n");
		pause();
		printf("Voce acorda em sua cama\n\n");
		pause();
		printf("Player:Nao tem como esse dia ficar mais estranho\n\n");
		pause();
		printf("Voce ouve um barulho na porta\n\n"); 
		pause();
		printf("Toc Toc Toc\n\n");
		pause();
		printf("Player: Quem será?\n\n");
		pause();
		printf("Voce abre a porta\n\n");
		pause();
		printf("Player: Ca? Casseb?");
		pause();
		printf("Casseb:Olá jovem\n\n");
		pause();
		printf("Player:O que o senhor está fazendo aqui?\n\n");
		pause();
		printf("Casseb: vim passar aqui pra lhe dizer que os verdadeiros algoritmos são os amigos que nós fazemos nessa jornada\n\n");
		pause();
		printf("Player:????\n\n");
		pause();
		printf("Pedro Girotto aparece\n\n");
		pause();
		printf("Girotto:Opa\n\n");
		pause();
		printf("Player:Você parece com aquela voz..\n\n");
		pause();
		printf("Girotto:Sim utilizei meus poderes como mago da programação para lhe tirar daquela fatidica\n\n"); 
		pause();
		printf("Girotto:Aproveite e pegue sua Ferrari e vá viver sua vida feliz\n\n");  
		pause();
		printf("Player: Chora\n\n");
		pause();
	}
}

void tutorial(){ //função para rodar o tutorial quando selecionado no menu inicial
	char tutorial[21][51];
	char player = '&';
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
			printf("\t\t");
			for(j = 0; j < 51; j++){
				printf("%c", tutorial[i][j]);
			}
			printf("\n");
		}
		printf("Vidas restantes: %d", pvida);
		
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

void fase1(){
	//declaração de variáveis
	char mapa[10][20];
	char player;
	char porta1;
	char porta2;
	char chave1;
	char chave2;
	int pchave1;
	int pchave2;
	char inimigo1;
	char espinho;
	int ix;
	int iy;
	int c1x;
	int c1y;
	char tecla;
	int inimov;
	int inival;
	
	//atribuição de valores
	pchave1 = 0;
	pchave2 = 0;
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
	lin = 10;
	col = 20;
	srand(time(NULL));
	
	hist();
	
	//laço de repetição
	do{
		//0 vidas, game over
		if(pvida == 0){
			derrota();
			return;
		}
		
		//verificar se o player tem a chave
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
		
		//impressão do mapa
		system("cls");
		for(i=0;i<10;i++){
			for(j=0;j<20;j++){
				if(i==0||i==9){
					mapa[i][j]='*';
				}else if(j==0||j==10||j==19){
					mapa[i][j]='*';
				}else{
					mapa[i][j]=' ';
				}
				mapa[6][0]=porta2;
				mapa[6][10]=porta1;
				mapa[c1y][c1x]=chave1;
				mapa[7][3]=chave2;
				mapa[py][px]=player;
				mapa[iy][ix]=inimigo1;
				mapa[c1y-1][c1x]=espinho;
				mapa[c1y][c1x-1]=espinho;
				mapa[c1y][c1x+1]=espinho;
				mapa[c1y+1][c1x-1]=espinho;
				mapa[c1y+1][c1x+1]=espinho;
			}
		}
		for(i=0;i<10;i++){
			printf("\t\t\t");
			for(j=0;j<20;j++){
				printf("%c", mapa[i][j]);
			}
			printf("\n");
		}
		printf("Vidas restantes: %d", pvida);
		
		//se o player morre, repete a fase
		if(py==iy&&px==ix){
			pvida--;
			fase1();
			return;
		}
		
		//captura de comando do jogador
		tecla = getch();
		
		//o que fazer de acordo com a tecla que o usuário aperta
		switch(tecla){
    		case 119:  
   		     if(mapa[py-1][px]!='*'&&mapa[py-1][px]!='D'&&mapa[py-1][px]!='@'){
    		        mapa[py][px] = ' ';
    		        py--;
    		        if(mapa[py][px] == inimigo1 || mapa[py][px] == espinho){
   		            pvida--;
					fase1();
					return;  
    		        }
    		        mapa[py][px] = player;
   		     } else {
    		        mapa[py][px] = player;
    		    }
    		    break;

   		 case 115: 
     		   if(mapa[py+1][px]!='*'&&mapa[py+1][px]!='D'&&mapa[py+1][px]!='@'){
     		       mapa[py][px] = ' ';
      		      py++;
     		       if(mapa[py][px] == inimigo1 || mapa[py][px] == espinho){
     		           pvida--;
					fase1();
					return; 
    		        }
    		        mapa[py][px] = player;
    		    } else {
     		       mapa[py][px] = player;
    		    }
    		    break;

    		case 97:  
    		    if(mapa[py][px-1]!='*'&&mapa[py][px-1]!='D'&&mapa[py][px-1]!='@'){
    		        mapa[py][px] = ' ';
    		        px--;
    		        if(mapa[py][px] == inimigo1 || mapa[py][px] == espinho){
   		            pvida--;
					fase1();
					return;  
    		        }
   		         mapa[py][px] = player;
    		    } else {
    		        mapa[py][px] = player;
    		    }
    		    break;

    		case 100:  
    		    if(mapa[py][px+1]!='*'&&mapa[py][px+1]!='D'&&mapa[py][px+1]!='@'){
    		        mapa[py][px] = ' ';
    		        px++;
      		      if(mapa[py][px] == inimigo1 || mapa[py][px] == espinho){
      		        pvida--;
					fase1();
					return;  
      		      }
     		       mapa[py][px] = player;
     		   } else {
     		       mapa[py][px] = player;
     		   }
     		   break;

    		case 105:  
     		   if(mapa[py-1][px] == chave1){
     		       pchave1 = 1;
     		       chave1 = ' ';
     		   } else if(mapa[py-1][px] == chave2){
     		       pchave2 = 1;
     		       chave2 = ' ';
    		    } else {
    		        mapa[py][px] = player;
    		    }
     		   break;
     	}
     	
     	//derrota
     	if(pvida == 0){
     		derrota();
     		return;
		}
		
		//movimento do inimigo
		monX = ix;
		monY = iy;
		monstroLV1(mapa);
		ix = monX;
		iy = monY;
		
		//proxima fase
		if(mapa[6][0]!='D'&&mapa[6][0]!='*'){
				if(mapa[py][px]==mapa[6][0]){
					historia++;
					fase2();
					return;
				}
		}
				
	}while(tecla!=27);
}

void derrota(){
	char tecla;
	int opcao=1;
		
	do{
		system("cls");
		
		
		printf(" *****    *******  *******  *******  ********  ********  ********\n");
		printf(" **  **   **       **   **  **   **  **    **  ********  ********\n");
		printf(" **   **  *******  *******  *******  **    **     **     **    **\n");
		printf(" **  **   **       **  **   **  **   **    **     **     ********\n");
		printf(" *****    *******  **   **  **   **  ********     **     **    **\n");
		
		if(opcao==1){
			printf(" 		 > Tentar novamente!\n");
			printf(" 		 Menu inicial");
		}else if(opcao==2){
			printf(" 		 Tentar novamente!\n");
			printf("		 > Menu inicial");
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
					pvida = 3;
					fase1();
					return;
				}else if(opcao==2){
					return;
				}
				break;
		}
	}while(tecla!=27);
}

void vitoria(){
	char tecla;
	int vit;
	
	do{
		system ("cls");
		
		printf(" **        **  **  ********  ********  ********  **  ********\n");
		printf("  **      **   **  ********  **    **  **    **  **  ********\n");
		printf("   **    **    **     **     **    **  ********  **  **    **\n");
		printf("    **  **     **     **     **    **  **  **    **  ********\n");
		printf("     ****      **     **     ********  **   **   **  **    **\n");
	
		printf("		 Parabens! Voce chegou ao fim\n");
		printf("			Obrigado por jogar!");
		
		tecla = getch();
	}while(tecla!=13);
}

void fase2(){
	//declaração das variaveis
	int i1x;
	int i1y;
	int i2x;
	int i2y;
	int i3x;
	int i3y;
	char player;
	char inimigo1;
	char inimigo2;
	char inimigo3;
	char chave1;
	char porta1;
	char chave2;
	char porta2;
	char chave3;
	char porta3;
	char mapa[20][20];
	char botao;
	char espinho1;
	char espinho2;
	char tecla;
	int pchave1;
	int pchave2;
	int inimov;
	int inival;
	
	//Valor para as variaveis
	lin = 20;
	col = 20;
	porta1 = 'D';
	porta2 = 'D';
	porta3 = 'D';
	chave1 = '@';
	chave2 = '@';
	chave3 = '@';
	espinho1 = '#';
	espinho2 = '#';
	botao = 'O';
	player = '&';
	inimigo1 = 'X';
	inimigo2 = 'Y';
	inimigo3 = 'X';
	px = 5;
	py = 4;
	i1x = 4;
	i1y = 2;
	i2x = 17;
	i2y = 5;
	i3x = 9;
	i3y = 12;
	pchave1 = 0;
	pchave2 = 0;
	srand(time(NULL));
	
	hist();
	
	do{
		//Condição de derrota do player para mostro
		if(py == i1y&&px == i1x){
			pvida--;
			fase2();
			return;
		}
		if(py == i2y&&px == i2x){
			pvida--;
			fase2();
			return;
		}
		if(py == i3y&&px == i3x){
			pvida--;
			fase2();
			return;
		}
		
		//se o player perde todas as vidas, game over
		if(pvida == 0){
			derrota();
			return;
		}
		
		//quando o player aperta o botao, os espinhos somem
		if(py == 1 && px == 1){
			espinho1 = ' ';
		}//quando player pega chave 1, porta 1 abre
		if(pchave1 != 0){
			porta1 = '=';
		}//quando player pega a chave 2, porta 2 abre
		if(pchave2 != 0){
			porta2 = '=';
		}
		
		//apaga a tela e depois imprime o novo mapa com os novos dados
		system("cls");
		for(i = 0; i < 20; i++){
			for(j = 0; j < 20; j++){
				mapa[i][j] = ' ';
				if(i == 0||i == 19){
					mapa[i][j] = '*';
				}else if(j == 0||j == 19){
					mapa[i][j] = '*';
				}else if( i != 0 && i < 11){
					mapa[i][10] = espinho1;
				}else if(j != 0 && j != 19){
					mapa[11][j] = '*';
				}
				//objetos dentro do mapa
				mapa[1][1] = botao;
				mapa[19][10] = porta2;
				mapa[11][15] = porta1;
				mapa[9][18] = chave1;
				mapa[17][1] = chave2;
				mapa[py][px] = player;
				mapa[i1y][i1x] = inimigo1;
				mapa[i2y][i2x] = inimigo2;
				mapa[i3y][i3x] = inimigo3;
			}
		}
		
		for(i = 0; i < 20; i++){
			printf("\t\t");
			for(j = 0; j < 20; j++){
				printf("%c ", mapa[i][j]);
			}
			printf("\n");
		}
		printf("Vidas restantes: %d", pvida);
		
		//captura o movimento do jogador
		tecla = getch();
		
		//dependendo da tecla apertada, se move em uma direção
		switch(tecla){
			case 119:// W
				if(mapa[py-1][px]!='*'&&mapa[py-1][px]!='D'&&mapa[py-1][px]!='@'){
					py--;
					if(mapa[py][px]=='#'){
						pvida--;
						fase2();
						return;
					}
				}else{
					mapa[py][px] = player;
				} 
				break;
			case 115://S
				if(mapa[py+1][px]!='*'&&mapa[py+1][px]!='D'&&mapa[py+1][px]!='@'){
					py++;
					if(mapa[py][px]=='#'){
						pvida--;
						fase2();
						return;
					}
				}else{
					mapa[py][px] = player;
				}
				break;
			case 100://D
				if(mapa[py][px+1]!='*'&&mapa[py][px+1]!='D'&&mapa[py][px+1]!='@'){
					px++;
					if(mapa[py][px]=='#'){
						pvida--;
						fase2();
						return;
					}
				}else{
					mapa[py][px] = player;
				}
				break;
			case 97://A
				if(mapa[py][px-1]!='*'&&mapa[py][px-1]!='D'&&mapa[py][px-1]!='@'){
					px--;
					if(mapa[py][px]=='#'){
						pvida--;
						fase2();
						return;
					}
				}else{
					mapa[py][px] = player;
				}
				break;
			case 105://I
				if(mapa[py-1][px] == chave1){
					pchave1 = 1;
					chave1 = ' ';
				}else if(mapa[py-1][px] == chave2){
					pchave2 = 1;
					chave2 = ' ';
				}else{
					mapa[py][px] = player;
				}
				break;
		}
		
		//Condição para próxima fase
		if(mapa[py][px] == mapa[19][10]){
			historia++;
			fase3();
			return;
		}
		
		//movimento do inimigo 1
		monX = i1x;
		monY = i1y;
		monstroLV1(mapa);
		i1x= monX;
		i1y = monY;
		
		//movimento do inimigo 3
		monX = i3x;
		monY = i3y;
		monstroLV1(mapa);
		i3x = monX;
		i3y = monY;
		
		//movimento do inimigo que segue
		monX = i2x;
		monY = i2y;
		monstroLV2(mapa);
		i2x = monX;
		i2y = monY;
		
	}while(tecla!=27||pvida!=pvida--);//ESC para sair
	
}

void fase3(){
	//variaveis
	char mapa[40][40];
	char tecla;
	char player;
	char porta;
	char porta2;
	char chave;
	char chave2;
	char portal1;
	char portal2;
	int pchave;
	char ini1;
	char ini2;
	int i1x;
	int i2x;
	int i3x;
	int i4x;
	int i5x;
	int i6x;
	int i1y;
	int i2y;
	int i3y;
	int i4y;
	int i5y;
	int i6y;
	
	//declaração de valores
	lin = 40;
	col = 40;
	px = 5;
	py = 5;
	pchave = 0;
	player = '&';
	porta = 'D';
	porta2 = 'D';
	chave = '@';
	chave2 = '@';
	portal1 = '<';
	portal2 = '>'; 	
	ini1 = 'X';
	ini2 = 'Y';
	i1x = 10;
	i2x = 30;
	i3x = 7;
	i4x = 28;
	i5x = 20;
	i6x = 10;
	i1y = 7;
	i2y = 10;
	i3y = 26;
	i4y = 30;
	i5y = 3;
	i6y = 36;
	
	//roda a historia
	hist();
	
	//laço de repetição
	do{
		//portas abrindo
		if(pchave == 1){
			porta2 = '=';
			chave2 = ' ';
		}else if(pchave == 2){
			porta = '=';
			chave = ' ';
		}
		
		//Perca de vida
		if((px == i1x&&py==i1y)||(px == i2x&&py==i2y)||(px == i3x&&py==i3y)||(px == i4x&&py==i4y)||(px == i5x&&py==i5y)||(px == i6x&&py==i6y)){
			pvida--;
			fase3();
			return;
		}
		
		//condição para game over
		if(pvida == 0){
			derrota();
			return;
		}
		
		//valores do mapa
		for(i = 0; i < 40; i++){
			for(j = 0; j < 40; j++){
				mapa[i][j] = ' ';
				if(i==0||i==39){
					mapa[i][j] = '*';
				}else if(j == 0||j == 39){
					mapa[i][j] = '*';
				}else if((i==15||i==25)&&(j<15||j>24)){
					mapa[i][j] = '*';
				}else if((j==15||j==25)&&(i<16||i>24)){
					mapa[i][j] = '*';
				}else if((j>15&&j<20)&&(i==10||i==25||i==30||i==35)){
					mapa[i][j] = '#';
				}else if((j>20&&j<25)&&(i==5||i==15||i==27||i==33)){
					mapa[i][j] = '#';
				}else if((i>15&&i<20)&&(j==10||j==25||j==30||j==35)){
					mapa[i][j] = '#';
				}else if((i>20&&i<25)&&(j==5||j==15||j==27||j==33)){
					mapa[i][j] = '#';
				}
				mapa[20][39] = porta;
				mapa[36][20] = chave;
				mapa[12][13] = portal2;//sala 1
				mapa[3][27] = portal1;// sala 2
				mapa[12][36] = portal2;//sala 2
				mapa[38][27] = portal1;// sala 3
				mapa[29][37] = portal2;//sala 3
				mapa[27][3] = portal1;// sala 4
				mapa[25][7] = porta2;
				mapa[33][7] = chave2;
				mapa[py][px] = player;
				mapa[i1y][i1x] = ini1;
				mapa[i2y][i2x] = ini1;
				mapa[i3y][i3x] = ini1;
				mapa[i4y][i4x] = ini1;
				mapa[i5y][i5x] = ini2;
				mapa[i6y][i6x] = ini2;
			}
		}
		
		//printa o mapa
		system("cls");
		for(i = 0; i < 40; i++){
			printf("\t");
			for(j = 0; j < 40; j++){
				printf("%c ", mapa[i][j]);
			}
			printf("\n");
		}
		printf("Vidas restantes: %d", pvida);
		
		//captura o movimento do jogador
		tecla = getch();
		
		//codigo do movimento
		switch(tecla){
			case 97://A
				if(mapa[py][px-1]!='*'&&mapa[py][px-1]!='D'&&mapa[py][px-1]!='@'){
					px--;
				}else{
					mapa[py][px]=player;
				}
				break;
			case 100://D
				if(mapa[py][px+1]!='*'&&mapa[py][px+1]!='D'&&mapa[py][px+1]!='@'){
					px++;
				}else{
					mapa[py][px]=player;
				}
				break;
			case 115://S
				if(mapa[py+1][px]!='*'&&mapa[py+1][px]!='D'&&mapa[py+1][px]!='@'){
					py++;
				}else{
					mapa[py][px];
				}
				break;
			case 119://W
				if(mapa[py-1][px]!='*'&&mapa[py-1][px]!='D'&&mapa[py-1][px]!='@'){
					py--;
				}else{
					mapa[py][px];
				}
				break;
			case 105:
				if(py==37&&px==20&&pchave!=0){
					pchave++;
				}else if(py==34&&px==7){
					pchave++;
				}
		}
		
		//MonstrosLV1
		monX = i1x;
		monY = i1y;
		monstroLV1(mapa);
		i1x = monX;
		i1y = monY;
		
		monX = i2x;
		monY = i2y;
		monstroLV1(mapa);
		i2x = monX;
		i2y = monY;
		
		monX = i3x;
		monY = i3y;
		monstroLV1(mapa);
		i3x = monX;
		i3y = monY;
		
		monX = i4x;
		monY = i4y;
		monstroLV1(mapa);
		i4x = monX;
		i4y = monY;
		
		//MonstrosLV2
		if(tecla!=105){
			monX = i5x;
			monY = i5y;
			monstroLV2(mapa);
			i5x = monX;
			i5y = monY;
			
			monX = i6x;
			monY = i6y;
			monstroLV2(mapa);
			i6x = monX;
			i6y = monY;
		}
		
		//Portais
		//primeiro salto
		if(py == 12&&px == 13){
			py = 3;
			px = 28;
		}else if(py == 3&&px == 27){
			py = 12;
			px = 12;
		}
		//segundo salto
		if(py == 12&&px == 36){
			py = 38;
			px = 28;
		}else if(py == 38&&px == 27){
			py = 12;
			px = 35;
		}
		//terceiro salto
		if(py == 29&&px == 37){
			py = 27;
			px = 4;
		}else if(py == 27&&px == 3){
			py = 29;
			px = 36;
		}
		
		
		//Condição para fim do jogo
		if(mapa[py][px] == mapa[20][39]){
			historia++;
			hist();
			vitoria();
			return;
		}
		
		
	}while(tecla != 27);
}

int main(int argc, char *argv[]) {
	int start = 1;
	char tecla;
	int pvida;
	
	
	do{
		
		system("cls");
		
		printf("  **     *   *  *   *  ******   ******  *******  *   *\n");
		printf("  *  *   *   *  **  *  *        *       *     *  **  *\n");
		printf("  *   *  *   *  * * *  *   ***  ******  *     *  * * *\n");
		printf("  *  *   *   *  *  **  *     *  *       *     *  *  **\n");
		printf("  **     *****  *   *  *******  ******  *******  *   *\n\n");
		printf(" *****  *****  *****  *         *  *       ******  *****\n");
		printf(" *      *   *  *   *  *    *    *  *       *       *   *\n");
		printf(" *      *****  *****   *   *   *   *       ******  *****\n");
		printf(" *      *  *   *   *    *  *  *    *       *       *  * \n");
		printf(" *****  *   *  *   *     ** **     ******  ******  *   *\n\n");
	
		if(start==1){
			printf("			>  Iniciar\n");
			printf("			  Tutorial\n");
			printf("			  Sair\n");
		}
		if(start==2){
			printf("			  Iniciar\n");
			printf("			>  Tutorial\n");
			printf("			  Sair\n");
		}
		else if(start==3){
			printf("		  	  Iniciar\n");
			printf("		  	  Tutorial\n");
			printf("			>  Sair\n");
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
						fase3();
						break;
					case 2:
						printf("Iniciando o tutorial!");
						sleep (2);
						tutorial();
						break;
					case 3:
						system("cls");
						printf("Ate a proxima, aventureiro!");
						sleep(3);
						tecla = 27;
						break;
				}
				break;
		}
	
	} while (tecla!=27); // tecla esc
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
