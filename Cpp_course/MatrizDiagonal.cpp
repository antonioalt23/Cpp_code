/* Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.*/
#include<iostream>
using namespace std;
int main()
{
	int a[100][100],f,c;
	int i=0,j=0;
	system("color f1");
	cout<<"\n\n\tDIAGONAL PRINCIPAL DE UNA MATRIZ ";
	cout<<"\n\n\tIngresee el numero de filas: ";cin>>f;
	cout<<"\n\n\tIngrese el numero de columnas: ";cin>>c;
	for( i = 0;i < f;i = i + 1){
		for(j = 0;j < c;j = j + 1){
			cout<<"\n\n\t["<<i<<"]"<<"["<<j<<"]"<<" = ";
			cin>>a[i][j];
		}
	}
	for(i = 0;i < f;i = i + 1){
		for(j = 0;j < c; j = j + 1){
			if(i == j){
				cout<<"\n\n\tLos valores de la diagonal son: ";
				cout<<a[i][j];
		            }
		}
		
	}
	    
	cout<<"\n\n\t";
	system("pause");
	return 0;
}
