//TORRES DE HANOI [Versión FINAL]

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include "Console.h"
#define tam 10

using namespace std;

//DECLARACION DE FUNCIONES

//Posicionar Texto
void gotoxy(int x, int y); //LISTO
void PantallaPrincipal(int,int,int);//LISTO
void hanoi(int, char, char, char);//LISTO

int main(){
	//TORRES
	//TORRE A (ORIGEN)
	int A[tam];
	//TORRE B (AUXILIAR)
	int B[tam];
	//TORRE C (DESTINO)
	int C[tam];
	
	//ARREGLO DE MOVIMIENTOS
	string Mov[10];
	
	//Variables
	int iniTA, iniTB, iniTC, finTA, finTB, finTC; 
	
	//Contadores y opciones
	int i, j, opc, resp;
	
	//Desarrollo
	int ContNumMov; // = 0
	int NumMinMov; // = 0
	int Objetivo;// = 0
	
	int altmov;
	int contmov;
	
	//Inicializacion de variables
	ContNumMov = 0;
	NumMinMov = 0;
	Objetivo = 0;
	resp = 1;
	
	//Desarrollo
	comienzo:
	system("color F0");
	gotoxy(50,0);
	Color(13,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" T";
	Color(1,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"O";
	Color(2,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"R";
	Color(3,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"R";
	Color(4,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"E";
	Color(5,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"S ";
	Color(6,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"D";
	Color(7,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"E ";
	Color(8,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"H";
	Color(9,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"A";
	Color(10,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"N";
	Color(11,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"O";
	Color(12,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"I "<<endl<<endl;
	Color(3,15); //uso de Color(int TextColor, int Backcolor)
	gotoxy(41,2);
	cout<<"Cantidad de Discos desde 3 hasta 10"<<endl<<endl;
	gotoxy(54,4);
	Color(12,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"QUE ES?";
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	gotoxy(22,6);
	cout<<"Creado en el anio de 1883 por el matematico frances Edouard Lucas, las";
	gotoxy(22,7);
	cout<<"torres de Hanoi es un rompecabezas o juego matematico con el fin de";
	gotoxy(22,8);
	cout<<"comprender algoritmos.";
	gotoxy(53,10);
	Color(6,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"OBJETIVO: ";
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	gotoxy(22,12);
	cout<<"El juego consiste en tres postes: el primero contiene apilados una N cantidad";	
	gotoxy(22,13);
	cout<<"de discos con diametros diferentes, comenzando la base desde el mas grande";
	gotoxy(22,14);
	cout<<"el mas pequenio sin existir repeticion. El objetivo es pasar todos los discos";
	gotoxy(22,15);
	cout<<"desde el poste origen hasta el poste de destino.";
	gotoxy(50,17);
	Color(10,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"REGLAS DEL JUEGO: "<<endl;
	gotoxy(22,19);
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"1. Solo se puede mover un disco a la vez y para mover otro los demas"<<endl;
	gotoxy(22,20);
	cout<<"tienen que estar en postes."<<endl;
	gotoxy(22,21);
	cout<<"2. Un disco de mayor tamanio no puede estar sobre uno mas pequenio que"<<endl;
	gotoxy(22,22);
	cout<<"el mismo."<<endl;
	gotoxy(22,23);
	cout<<"3. Solo se puede desplazar el disco que se encuentra arriba en cada"<<endl;
	gotoxy(22,24);
	cout<<"poste."<<endl<<endl;
	gotoxy(47,27);
	Color(1,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"* Numero de discos: ";
	Color(15,0); //uso de Color(int TextColor, int Backcolor)
	cin>>Objetivo;
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	system("cls");
	
	if(Objetivo < 3 || Objetivo > 10){
		goto comienzo;
	}
	
	iniTA=-1;
	iniTB=-1;
	iniTC=-1;
	finTA=-1;
	finTB=-1;
	finTC=-1;
	
	contmov = 0;
	
	//Iniciar
	iniTA = 0;
	finTA=Objetivo-1;
	ContNumMov = 0;
	NumMinMov = (pow(2,Objetivo) - 1);
	
	for(i = 0; i < Objetivo; i++){
		A[i]=Objetivo-i;
	}
	
	for(i = 0; i < 9; i++){
		Mov[i] = "";
	}
	
	while(resp == 1){
	gotoxy(50,0);
	Color(13,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" T";
	Color(1,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"O";
	Color(2,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"R";
	Color(3,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"R";
	Color(4,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"E";
	Color(5,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"S ";
	Color(6,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"D";
	Color(7,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"E ";
	Color(8,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"H";
	Color(9,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"A";
	Color(10,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"N";
	Color(11,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"O";
	Color(12,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"I "<<endl<<endl;
		
	PantallaPrincipal(Objetivo, NumMinMov, ContNumMov);
	//cout<<"InicioTA: "<<iniTA<<" / TB: "<<iniTB<<" / TC: "<<iniTC<<endl;
	//cout<<"FinTA: "<<finTA<<" / TB: "<<finTB<<" / TC: "<<finTC<<endl<<endl;
	
	
	//TORRES ......................................................................................................................
	Color(15,0); //uso de Color(int TextColor, int Backcolor)
	gotoxy(18,16);
	cout<<"           ";
	Color(15,0); //uso de Color(int TextColor, int Backcolor)
	gotoxy(38,16);
	cout<<"           ";
	Color(15,0); //uso de Color(int TextColor, int Backcolor)
	gotoxy(58,16);
	cout<<"           ";
	
	int alt;
	alt = 16;
	gotoxy(20,alt);
	Color(7,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"Torre A";
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	alt--;
	for(i = 0; i <= finTA; i++){
		if(A[i] <= 9){
			gotoxy(21,alt);
			Color(A[i],15); //uso de Color(int TextColor, int Backcolor)
			cout<<"|  "<<A[i]<<" |"<<" ";
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			alt--;	
		}else{
			gotoxy(21,alt);
			Color(A[i],15); //uso de Color(int TextColor, int Backcolor)
			cout<<"| "<<A[i]<<" |"<<" ";
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			alt--;	
		}	
	}
	cout<<endl;
	
	alt = 16;
	gotoxy(40,alt);
	Color(7,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"Torre B";
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	alt--;
	for(i = 0; i <= finTB; i++){
		if(B[i] <= 9){
			gotoxy(41,alt);
			Color(B[i],15); //uso de Color(int TextColor, int Backcolor)
			cout<<"|  "<<B[i]<<" |"<<" ";
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			alt--;
		}else{
			gotoxy(41,alt);
			Color(B[i],15); //uso de Color(int TextColor, int Backcolor)
			cout<<"| "<<B[i]<<" |"<<" ";
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			alt--;
		}
	}
	cout<<endl;

	alt = 16;
	gotoxy(60,alt);
	Color(7,0); //uso de Color(int TextColor, int Backcolor)
	cout<<"Torre C";
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	alt--;
	for(i = 0; i <= finTC; i++){
		if(C[i] <= 9){
			gotoxy(61,alt);
			Color(C[i],15); //uso de Color(int TextColor, int Backcolor)
			cout<<"|  "<<C[i]<<" |"<<" ";
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			alt--;
		}else{
			gotoxy(61,alt);
			Color(C[i],15); //uso de Color(int TextColor, int Backcolor)
			cout<<"| "<<C[i]<<" |"<<" ";
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			alt--;
		}
	}
	cout<<endl;
	
	//PANTALLA DE MOVIMIENTOS ....................................................................................................
	altmov = 6;
	for(i = 11; i > 0; i--){
		Color(15,0); //uso de Color(int TextColor, int Backcolor)
		gotoxy(100,altmov);
		cout<<"                   ";
		altmov++;
	}
	Color(10,0); //uso de Color(int TextColor, int Backcolor)
	gotoxy(104,6);
	cout<<"MOVIMIENTOS";
	
	Color(15,0); //uso de Color(int TextColor, int Backcolor)
	altmov = 7;
	for(j = 0; j <= contmov; j++){
		gotoxy(106,altmov);
		cout<<Mov[j];
		altmov++;
	}
	
	//ACCIONES ............................................................................................................	
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	gotoxy(0,17);
	cout<<"------------------------------------------------------------------------------------------------------------------------";
	gotoxy(55,18);
	Color(5,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"Acciones: "<<endl<<endl;
	
	gotoxy(2,19);
	Color(13,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 1) A -> B "<<endl;
	gotoxy(22,19);
	Color(9,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 2) A -> C "<<endl;
	gotoxy(42,19);
	Color(10,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 3) B -> A "<<endl;
	gotoxy(62,19);
	Color(11,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 4) B -> C "<<endl;
	gotoxy(82,19);
	Color(12,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 5) C -> A "<<endl;
	gotoxy(102,19);
	Color(14,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 6) C -> B "<<endl;
	
	gotoxy(12,21);
	Color(6,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 7) Elegir otro nivel e iniciar "<<endl;
	gotoxy(48,21);
	Color(4,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 8) Reiniciar "<<endl;
	gotoxy(67,21);
	Color(3,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 9) Resolver "<<endl;
	gotoxy(87,21);
	Color(8,0); //uso de Color(int TextColor, int Backcolor)
	cout<<" 0) Salir "<<endl;
	gotoxy(54,24);
	Color(1,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"* Opcion: ";
	Color(15,0); //uso de Color(int TextColor, int Backcolor)
	cin>>opc;
	
	Color(15,0); //uso de Color(int TextColor, int Backcolor)
	gotoxy(39,26);
	cout<<"                                        ";
	gotoxy(39,27);
	cout<<"                                        ";
	gotoxy(39,28);
	cout<<"                                        ";
	Color(15,0); //uso de Color(int TextColor, int Backcolor)

	switch(opc){
		case 0: //Salir
			resp = 0;
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			system("cls");
			Color(9,15); //uso de Color(int TextColor, int Backcolor)
			gotoxy(44,2);
			cout<<"Gracias Por Jugar..."<<endl<<endl;
			Color(2,15); //uso de Color(int TextColor, int Backcolor)
			gotoxy(47,4);
			cout<<"CREDITOS"<<endl;
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			gotoxy(30,6);
			cout<<"Instituto Politecnico Nacional";
			gotoxy(30,7);
			cout<<"Escuela Superior de Ingenieria Mecanica y Electrica";
			gotoxy(30,8);
			cout<<"Unidad Culhuacan";
			gotoxy(30,10);
			cout<<"Codigo elaborado por: ";
			gotoxy(30,11);
			cout<<"-> Mera Orozco Edson Guadalupe - 3CM25";
			gotoxy(30,12);
			cout<<"-> Fonseca Chan Julian - 3CM25";
			gotoxy(30,13);
			cout<<"-> Venancio Sanchez Heider - 3CM15";
			gotoxy(30,14);
			cout<<"-> Cruz Bustillos Ismael - 3CM15";
			gotoxy(30,16);
			cout<<"Estructura de Datos";
			gotoxy(30,17);
			cout<<"Profesora Lorena Azuara Perez";
			system("pause>nul");
		break;
		case 1: //Mover de A_B
			if(finTB == -1){
				iniTB=0;
				finTB=0;
				B[0]=A[finTA];
				finTA--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "A -> B";
					contmov++;
				}else{
					Mov[contmov] = "A -> B";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else if(A[finTA] < B[finTB]){
				finTB++;
				B[finTB]=A[finTA];
				finTA--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "A -> B";
					contmov++;
				}else{
					Mov[contmov] = "A -> B";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else{
				gotoxy(49,27);
				Color(12,0); //uso de Color(int TextColor, int Backcolor)
				cout<<"Movimiento Invalido"<<endl;
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}
			system("pause>nul");
		break;
		case 2: //Mover de A_C
			if(finTC == -1){
				iniTC=0;
				finTC=0;
				C[0]=A[finTA];
				finTA--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "A -> C";
					contmov++;
				}else{
					Mov[contmov] = "A -> C";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else if(A[finTA] < C[finTC]){
				finTC++;
				C[finTC]=A[finTA];
				finTA--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "A -> C";
					contmov++;
				}else{
					Mov[contmov] = "A -> C";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else{
				gotoxy(49,27);
				Color(12,0); //uso de Color(int TextColor, int Backcolor)
				cout<<"Movimiento Invalido"<<endl;
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}
			system("pause>nul");
		break;
		case 3: //Mover de B_A
			if(finTA == -1){
				iniTA=0;
				finTA=0;
				A[0]=B[finTB];
				finTB--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "B -> A";
					contmov++;
				}else{
					Mov[contmov] = "B -> A";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else if(B[finTB] < A[finTA]){
				finTA++;
				A[finTA]=B[finTB];
				finTB--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "B -> A";
					contmov++;
				}else{
					Mov[contmov] = "B -> A";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else{
				gotoxy(49,27);
				Color(12,0); //uso de Color(int TextColor, int Backcolor)
				cout<<"Movimiento Invalido"<<endl;
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}
			system("pause>nul");
		break;
		case 4: //Mover de B_C
			if(finTC == -1){
				iniTC=0;
				finTC=0;
				C[0]=B[finTB];
				finTB--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "B -> C";
					contmov++;
				}else{
					Mov[contmov] = "B -> C";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else if(B[finTB] < C[finTC]){
				finTC++;
				C[finTC]=B[finTB];
				finTB--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "B -> C";
					contmov++;
				}else{
					Mov[contmov] = "B -> C";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else{
				gotoxy(49,27);
				Color(12,0); //uso de Color(int TextColor, int Backcolor)
				cout<<"Movimiento Invalido"<<endl;
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}
			system("pause>nul");
		break;
		case 5: //Mover de C_A
			if(finTA == -1){
				iniTA=0;
				finTA=0;
				A[0]=C[finTC];
				finTC--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "C -> A";
					contmov++;
				}else{
					Mov[contmov] = "C -> A";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else if(C[finTC] < A[finTA]){
				finTA++;
				A[finTA]=C[finTC];
				finTC--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "C -> A";
					contmov++;
				}else{
					Mov[contmov] = "C -> A";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else{
				gotoxy(49,27);
				Color(12,0); //uso de Color(int TextColor, int Backcolor)
				cout<<"Movimiento Invalido"<<endl;
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}
			system("pause>nul");
		break;
		case 6: //Mover de C_B
			if(finTB == -1){
				iniTB=0;
				finTB=0;
				B[0]=C[finTC];
				finTC--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "C -> B";
					contmov++;
				}else{
					Mov[contmov] = "C -> B";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else if(C[finTC] < B[finTB]){
				finTB++;
				B[finTB]=C[finTC];
				finTC--;
				ContNumMov++;
				gotoxy(49,27);
				cout<<"Movimiento Realizado"<<endl;
				
				if(contmov > 8){
					altmov = 7;
					for(i = 10; i > 0; i--){
						Color(15,0); //uso de Color(int TextColor, int Backcolor)
						gotoxy(100,altmov);
						cout<<"                   ";
						altmov++;
					}
					
					for(i = 0; i < 9; i++){
						Mov[i] = "";
					}
					
					contmov = 0;	
					Mov[contmov] = "C -> B";
					contmov++;
				}else{
					Mov[contmov] = "C -> B";
					contmov++;
				}
				
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}else{
				gotoxy(49,27);
				Color(12,0); //uso de Color(int TextColor, int Backcolor)
				cout<<"Movimiento Invalido"<<endl;
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}
			system("pause>nul");
		break;
		case 7: //Elegir otro nivel e iniciar
			system("cls");
			goto comienzo;
		break;
		case 8: //Reiniciar
			if(NumMinMov != 0){
				NumMinMov = 0;
				
				iniTA=-1;
				iniTB=-1;
				iniTC=-1;
				finTA=-1;
				finTB=-1;
				finTC=-1;	
				
				iniTA = 0;
				finTA=Objetivo-1;
				ContNumMov = 0;
				NumMinMov = (pow(2,Objetivo) - 1);
		
				for(i = 0; i < Objetivo; i++){
					A[i]=Objetivo-i;
				}
				for(i = 0; i < 10; i++){
					B[i]=0;
				}
				for(i = 0; i < 10; i++){
					C[i]=0;
				}
				
				contmov = 0;
				for(i = 0; i < 9; i++){
					Mov[i] = "";
				}	

				Color(0,15); //uso de Color(int TextColor, int Backcolor)
			}
		break;
		case 9: //Resolver (USO DE RECURSIVIDAD)
			Color(2,15); //uso de Color(int TextColor, int Backcolor)
			system("cls");
			cout<<"PASOS PARA RESOLVER TORRE DE HANOI DE "<<Objetivo<<" DISCOS"<<endl<<endl;
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
			hanoi(Objetivo,'A','C','B');
			system("pause>nul");
			Color(0,15); //uso de Color(int TextColor, int Backcolor)
		break;
	}
	system("cls");
	
		//MENSAJE DE GANADOR
		if(C[Objetivo-1] == 1 || B[Objetivo-1] == 1){
			if(ContNumMov == NumMinMov){
				Color(10,15); //uso de Color(int TextColor, int Backcolor)
				gotoxy(49,2);
				cout<<"ENHORABUENA"<<endl;
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
				gotoxy(25,5);
				cout<<"Has logrado completar el juego con la menor cantidad de "<<endl;
				gotoxy(25,6);
				cout<<"movimientos posibles."<<endl;
				gotoxy(25,7);
				cout<<"Intenta con una mayor dificultad."<<endl;
			}else if(ContNumMov > NumMinMov){
				Color(11,15); //uso de Color(int TextColor, int Backcolor)
				gotoxy(49,2);
				cout<<"FELICIDADES"<<endl;
				Color(0,15); //uso de Color(int TextColor, int Backcolor)
				gotoxy(25,5);
				cout<<"Has logrado completar el juego."<<endl;
				gotoxy(25,6);
				cout<<"Intenta completarlo con la menor cantidad de movimientos"<<endl;
				gotoxy(25,7);
				cout<<"posibles."<<endl;
			}
			
			for(i = 0; i < 10; i++){
				B[i]=0;
			}
			for(i = 0; i < 10; i++){
				C[i]=0;
			}
			system("pause>nul");
			system("cls");
			goto comienzo;
		}
		
	}
	getch();
}

//FUNCIONES DECLARADAS

void gotoxy(int x , int y)
{
// CONTROLADOR PARA NUESTRA VENTANA, Y MANIPULACION DE CONSOLA
HANDLE ventana;
ventana = GetStdHandle(STD_OUTPUT_HANDLE);

// CREAMOS OBJETO DE LAS CORDENADAS DENTRO DE UNA ESTRUCTURA
COORD cordenadas;
// REDIRECCIONAMOS LAS VARIABLES DE LA ESTRUCTURA A NUESTRAS VARIABLES DE LA FUNCION
cordenadas.X = x;
cordenadas.Y = y;

// POSICIONAMOS EL MENSAJE DENTRO DE NUESTRA CONSOLA, A NUESTRA VENTANA CON LAS CORDENADAS DADAS.
SetConsoleCursorPosition(ventana,cordenadas);
}

void PantallaPrincipal(int disco, int minmov, int nummov){
	gotoxy(40,2);
	Color(1,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"Numero de Discos: ";
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	cout<<disco<<endl;
	gotoxy(40,3);
	Color(12,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"Numero Minimo de Movimientos: ";
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	cout<<minmov<<endl;
	gotoxy(40,4);
	Color(2,15); //uso de Color(int TextColor, int Backcolor)
	cout<<"Numero de Movimientos realizados: ";
	Color(0,15); //uso de Color(int TextColor, int Backcolor)
	cout<<nummov<<endl;
	cout<<endl<<endl;

}

void hanoi(int n,char origen,char destino,char auxiliar){
	/*Se sobrar apenas o disco 1, mova fazer o movimento e retornar*/
	if(n==1){
		cout<<"Mueva el disco 1 de la Torre "<<origen<<" para la Torre "<<destino<<endl; 
		//printf("\nMueva el disco 1 de base %c para la base %c",origen ,destino);
		return;
	}
	/*Mover el n-1 disco de A para B, usando C de auxiliar*/
	hanoi(n-1,origen,auxiliar,destino);
	/* Mover los discos restantes de A para C*/
	cout<<"Mueva el disco "<<n<<" de la Torre "<<origen<<" para la Torre "<<destino<<endl;
	//printf("\nMueva el disco %d de base %c para la base %c",n,origen,destino);
	/*Mover los n-1 discos de B para C usando A como auxiliar*/
	hanoi(n-1,auxiliar,destino,origen);
}
