//Jacinto Tovar Diego, Grupo 3CM5, Analisis y Diseño de Algoritmos
//Proyecto 3er Parcial
//Para la configuracion 1, se descomentan las lineas: 63-79, 260-264,
//y 299. Se comentan las lineas: 270-274 y 301
//Para la configuracion 2, se descomentan las lineas: 20, 81-117,
//265-269 y 300. Se comentan 260-264, 276, 279, 281, 282 y 299 
//las que dicen 'Original', se comentan/descomentan
#include <stdio.h>
#include <stdlib.h>
//Aqui se definen los personajes y los demas objetos del mapa
#define Muro '#'
#define Puntos '.' //su valor es de 1
#define Espacio_vacio ' '
#define Pacman 'C'
#define Comida 'F' //su valor es de 8
#define Rojo 'R'
#define Azul 'B'
#define Naranja 'O'
#define Rosa 'P'
//#define Fantasma_atrapado 'G' //Descomentar para Configuracion 2
//Dimensiones del mapa del juego
#define Altura 33
#define Anchura 43
//Se encarga de crear el mapa con puntos, y poner muros a forma
//de marcar los limites del mismo mapa
void iniciarMapa(char mapa[Altura][Anchura]){
	for(int i=0; i<Altura; i++){
		for(int j=0; j< Anchura; j++){
			mapa[i][j]=Puntos;
		}
	}
	for(int i=0; i<Altura; i++){
		mapa[i][0]=Muro;
		mapa[i][Anchura-1]=Muro;
	}
	for(int j=0; j<Anchura; j++){
		mapa[0][j]=Muro;
		mapa[Altura-1][j]=Muro;
	}
//Las funciones for, por medio del objeto 'Muro', crea
//diferentes osbtaculos en el mapa segun unas coordenadas	
	for(int i=3; i<8; i++){
		for(int j=5; j<10; j++){
			mapa[i][7]=Muro;
			mapa[i][Anchura-8]=Muro;
			mapa[5][j]=Muro;
			mapa[5][Anchura-j-1]=Muro;
			mapa[Altura-i-1][7]=Muro;
			mapa[Altura-i-1][35]=Muro;
			mapa[Altura-i-8][7]=Muro;
			mapa[Altura-i-8][35]=Muro;
			mapa[Altura-i-16][7]=Muro;
			mapa[Altura-i-16][35]=Muro;			
			mapa[12][j]=Muro;
			mapa[12][Anchura-j-1]=Muro;			
			mapa[20][j]=Muro;
			mapa[20][Anchura-j-1]=Muro;
			mapa[27][j]=Muro;
			mapa[27][Anchura-j-1]=Muro;			
		}
	}
//Configuracion 1, 2
	/*for(int i=0; i<11; i++){
		for(int j=4; j<12; j++){
			mapa[19][Anchura-j-5]=Espacio_vacio;
	        mapa[19][Anchura-j-10]=Espacio_vacio;
			mapa[21][Anchura-j-5]=Espacio_vacio;			
            mapa[31][Anchura-j-11]=Espacio_vacio;
 			mapa[Altura-i-3][28]=Espacio_vacio;
		}
	}
	for(int i=0; i<5; i++){
		for(int j=4; j<8; j++){
			mapa[24][Anchura-j-1]=Espacio_vacio;
			mapa[26][Anchura-j-(-2)]=Espacio_vacio; 
 			mapa[Altura-i-7][34]=Espacio_vacio;
 			mapa[Altura-i-5][38]=Espacio_vacio;			
		}
	}*/
//Configuracion 2
	/*for(int i=0; i<18; i++){
		for(int j=4; j<17; j++){
		    mapa[1][Anchura-j-12]=Espacio_vacio;									
		    mapa[3][Anchura-j-12]=Espacio_vacio;						
		    mapa[5][Anchura-j-12]=Espacio_vacio;						
		    mapa[9][Anchura-j-12]=Espacio_vacio;
		    mapa[11][Anchura-j-12]=Espacio_vacio;									
		    mapa[13][Anchura-j-12]=Espacio_vacio;			
		    mapa[19][Anchura-j-18]=Espacio_vacio;
		    mapa[19][Anchura-j-19]=Espacio_vacio;
			mapa[21][Anchura-j-12]=Espacio_vacio;			
            mapa[23][Anchura-j-12]=Espacio_vacio;
            mapa[27][Anchura-j-7]=Espacio_vacio;
            mapa[27][Anchura-j-17]=Espacio_vacio;
 			mapa[Altura-i-2][4]=Espacio_vacio;									
 			mapa[Altura-i-2][10]=Espacio_vacio;			
 			mapa[Altura-i-2][32]=Espacio_vacio;			
 			mapa[Altura-i-7][14]=Espacio_vacio;	
 			mapa[Altura-i-10][38]=Espacio_vacio;
 			mapa[Altura-i-15][28]=Espacio_vacio;
 			mapa[Altura-i-15][32]=Espacio_vacio;
 			mapa[Altura-i-15][10]=Espacio_vacio;			
 			mapa[Altura-i-15][14]=Espacio_vacio;						
		}
	}
	for(int i=0; i<5; i++){
		for(int j=4; j<8; j++){
			mapa[20][Anchura-j-35]=Espacio_vacio;									
			mapa[27][Anchura-j-35]=Espacio_vacio;												
			mapa[26][Anchura-j-35]=Espacio_vacio;
			mapa[28][Anchura-j-35]=Espacio_vacio;
			mapa[4][Anchura-j-(-2)]=Espacio_vacio; 					
			mapa[5][Anchura-j-(-2)]=Espacio_vacio; 
			mapa[6][Anchura-j-(-2)]=Espacio_vacio;
			mapa[27][Anchura-j-(-2)]=Espacio_vacio;			
		}
	}*/	

	for(int i=1; i<4; i++){
		for(int j=1; j<4; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=1; i<4; i++){
		for(int j=11; j<14; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=1; i<4; i++){
		for(int j=Anchura-4; j<Anchura-1; j++){//Estas funciones hacen un espejo al mapa
			mapa[i][j]=Muro;
		}
	}
	for(int i=1; i<4; i++){
		for(int j=Anchura-14; j<Anchura-11; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=6; i<9; i++){
		for(int j=15; j<28; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=7; i<11; i++){
		for(int j=1; j<4; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=7; i<11; i++){
		for(int j=11; j<14; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=7; i<11; i++){
		for(int j=Anchura-4; j<Anchura-1; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=7; i<11; i++){
		for(int j=Anchura-14; j<Anchura-11; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=14; i<19; i++){
		for(int j=1; j<4; j++){
			mapa[i][j]=Muro;
		}
	}	
	for(int i=14; i<19; i++){
		for(int j=11; j<14; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=14; i<19; i++){
		for(int j=Anchura-4; j<Anchura-1; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=14; i<19; i++){
		for(int j=Anchura-14; j<Anchura-11; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=22; i<26; i++){
		for(int j=1; j<4; j++){
			mapa[i][j]=Muro;
		}
	}	
	for(int i=22; i<26; i++){
		for(int j=11; j<14; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=22; i<26; i++){
		for(int j=Anchura-4; j<Anchura-1; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=22; i<26; i++){
		for(int j=Anchura-14; j<Anchura-11; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=24; i<27; i++){
		for(int j=Anchura-28; j<Anchura-15; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=29; i<32; i++){
		for(int j=1; j<4; j++){
			mapa[i][j]=Muro;
		}
	}	
	for(int i=29; i<32; i++){
		for(int j=11; j<14; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=29; i<32; i++){
		for(int j=Anchura-4; j<Anchura-1; j++){
			mapa[i][j]=Muro;
		}
	}
	for(int i=29; i<32; i++){
		for(int j=Anchura-14; j<Anchura-11; j++){
			mapa[i][j]=Muro;
		}
	}
 
    for(int j=15; j<28; j++){
		mapa[2][j]=Muro;
		mapa[4][j]=Muro;
		mapa[10][j]=Muro;
		mapa[12][j]=Muro;
		mapa[Altura-3][j]=Muro;
		mapa[Altura-5][j]=Muro;
		mapa[Altura-11][j]=Muro;
		mapa[Altura-13][j]=Muro;
	}
//Estas funciones for hacen un cuadro en el centro del mapa,
//donde estaran los fantasmas	
	for(int i=14; i<16; i++){
		for(int j=17; j<26; j++){
			mapa[17][j]=Muro;
			mapa[18][j]=Muro;
			mapa[i][j]=Muro;			
		}
	}
	for(int i=15; i<18; i++){
		for(int j=18; j<25; j++){
			mapa[i][j]=Espacio_vacio;
		}
	}
//Se divide a la mitad el mapa, para dejar un espacio vacio	
	for(int j=0; j<Anchura-0; j++){
		mapa[Altura/2][j]=Espacio_vacio;
	}
//Aqui se definen las ubicaciones de los personajes y puntos
//en el mapa, acorde a coordenadas especificas del mismo	
	/*mapa[Altura-14][22]=Pacman; //
	mapa[19][14]=Rojo; //
	mapa[15][28]=Azul; //  Configuracion 1
	mapa[16][10]=Naranja; //
	mapa[17][34]=Rosa; //*/
	/*mapa[Altura-11][4]=Pacman; //
	mapa[21][4]=Fantasma_atrapado; //
	mapa[23][10]=Fantasma_atrapado; //  Configuracion 2
	mapa[16][7]=Fantasma_atrapado; //
	mapa[14][14]=Fantasma_atrapado; //*/	
	mapa[Altura-2][21]=Pacman; //
	mapa[16][14]=Rojo; //
	mapa[15][18]=Azul; // Original
	mapa[16][17]=Naranja; //
	mapa[17][24]=Rosa;// 
	mapa[5][1]=Comida;
	mapa[5][41]=Comida; // Configuracion 2
	mapa[12][1]=Comida;
	mapa[12][41]=Comida;
	mapa[20][1]=Comida; //Configuracion 2
	mapa[20][41]=Comida;
	mapa[27][1]=Comida; // Configuracion 2
	mapa[27][41]=Comida; // Configuracion 1, 2		
}
//La funcion void se encarga de mostrar el mapa, el
//cual sera mostrado en la consola por la funcion main
void mostrarMapa(char mapa[Altura][Anchura]){
	for(int i=0; i< Altura; i++){
		for (int j=0; j < Anchura; j++){
			printf("%c", mapa[i][j]);
		}
		printf("\n");
	}
}

int main(){
	char MapaJuego[Altura][Anchura];
	iniciarMapa(MapaJuego);
	printf("PROYECTO FINAL PACMAN\n");
	//printf("Puntos conseguidos: 54\n"); //Configuracion 1
	//printf("Puntos conseguidos: 380\n"); //Configuracion 2	
	printf("Puntos Conseguidos: 0\n"); //Original
	mostrarMapa(MapaJuego);
}
