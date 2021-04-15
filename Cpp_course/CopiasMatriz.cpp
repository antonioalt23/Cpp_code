/* Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla.
*/
#include<iostream>
using namespace std;
int main()
{
	int a[100][100],f,c;
	int b[100][100],i=0,j=0;
	system("color f1");
	cout<<"\n\n\tCOPIAR EL CONTENIDO DE UNA MATRIZ";
	cout<<"\n\n\tIngresee el numero de filas: ";cin>>f;
	cout<<"\n\n\tIngrese el numero de columnas: ";cin>>c;
	for( i = 0;i < f;i = i + 1){
		for(j = 0;j < c;j = j + 1){
			cout<<"\n\n\t["<<i<<"]"<<"["<<j<<"]"<<" = ";
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(i = 0;i < f;i = i + 1){
		for(j = 0;j < c; j = j + 1){
			cout<<b[i][j];
		}
		
	}
	    
	cout<<"\n\n\t";
	system("pause");
	return 0;
}
