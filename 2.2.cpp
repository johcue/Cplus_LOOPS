#include <iostream>
#include <cstdlib>
/*REALIZAR UN ALGORITMO QUE CLASIFIQUE EL VALOR DEL CALZADO*/
using namespace std;
int main(int argc, char** argv)
{
    system (" color f0");
	int CC, CS,d;
	char ECONOMICO,MEDIO, ALTO, respuesta;
	do
	{
	cout<<endl<<endl;
	cout<< " \t CLASIFICACION DEL CALZADO " <<"\n";
	cout<< " Por Favor Ingrese el costo del cuero" <<endl;
	cin>>CC;
	cout<< " Por favor Ingrese el costo de la suela" <<endl;
	cin>>CS;
	d=CC+CS;
	if(d>0 && d<=50000)
	{
		cout<< " ECONOMICO" <<endl;
	}
	else
	if (d>=50001 && d<=100000)
	{
	    cout<< " MEDIO " <<endl;	
	}
	else
	if (d>=100001 && d<=150000)
	{
		cout<< " ALTO" <<endl;
	}
	else
	if (d>150000)
	{
		cout<< " EXCLUSIVO " <<endl;
	}
	cout<< " Validar Otro calzado? s/n " <<endl;
    cin>> respuesta;
	}while (respuesta != 'n');
	system ("pause");
	return 0;
}
