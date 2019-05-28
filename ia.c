
//Raizen!
#include<stdio.h>
#include<stdlib.h>
#define RIGHE 10
#define COLONNE 10
#define NAVE '1'
#define COLPITO 'X';

 char navi[1];
 char cacciator [2];
 char sottomarini [3];
 char corazzate[4];
 char mappaUtente [RIGHE][COLONNE];
 char mappaNemico [RIGHE][COLONNE];




void creaMappa();
void stampaMappaUtente();
void stampaMappaNemico();
void caricaNavi();
void menu();
int game();
void sparo(int x, int y);



//funzione dove l'ia spara il colpo
void ia_spara(){
	srand(time(NULL));
  int counter=0;
	//controllo se la matrice ha almeno un elemento barca, se non vi sono presenti elementi barca esce immediatamente dal metodo dicendo gioco finito
 for(int b=0; b< COLONNE; b++){
   for(int z=0; z< RIGHE; z++){
     if(mappaUtente[b][z]==NAVE){
       counter++;
     }
   }
 }
 //***********************************************************************************************************************************************************
 if(counter>1){

	//dichiarazione variabili
	 int hit_boolean=0;
	 int r=0;
	 int c=0;
	 r=rand()%11;
	 c=rand()%11;
   int controllo=0;
	 static int cont=0;
	 int th=0;
   //controllo se almeno una nave, o componente è presente nella matrice(sia per inizio partita che fine)
   for(int v=0; v< COLONNE;v++){
      for(int b=0; b<RIGHE; b++){
        if(){

        }
      }
   }
	 //tasso probabilità hit basato su difficolta cpu
	if(difficolta=1){
		th=rand()%9;
	}
	else
	{
		if(difficolta=2){
			th=rand()%6;
		}
		else
		{
			th=rand()%4;
		}
	}
	//sparo sicuro
	if(cont==th){

		iaSparoSicuro();

	}
	//sparo random
	else{

		if(mappaUtente[r][c]== NAVE ){
			hit=1;
			mappaUtente[r][c] = COLPITO;
		}
	}
	cont++
  }
  else{
    printf("***********************************************************************/n");
    printf("******NESSUNA NAVE E' PRESENTE NEL CAMPO AVVERSARIO, ATTENZIONE******/n");
    printf("***********************************************************************/n");
  }
  //***********************************************************************************************************************************************************
}

int iaSparoSicuro(){
int cond=0;
int i=0;
int j=0;
do{
    do {
            if (mappaUtente[i][j]==NAVE) {
                cond=1;
                mappaUtente[i][j]==COLPITO;
                break;
            }
    } while(j< COLONNE && cond=0);
    if(cond=1) break;
  i++;
    }while(i<RIGHE && cond=0);
}
