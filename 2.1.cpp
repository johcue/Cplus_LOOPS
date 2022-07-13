#include <iostream>
#include <cstdlib>
/*REALIZAR UN NUMERO QUE ME PERMITA CUANTIFICAR EL COSTO DEL CUERO DURANTE LA PRODUCCION */
using namespace std;
int main(int argc, char** argv)
{
	system ("color f0");
	cout<<endl<<endl;
	int cc, cs, d;
	char vr;
	cout<< "\t VERIFICAR SI EL NUMERO INGRESADO ES MULTIPLO DE OTRO " <<endl;
	cout<< "Ingrese el costo del cuero " <<endl;
	cin>>cc;
	cout<< "Ingrese el costo de la suela " <<endl;
	cin>>cs;
	d=cs+cc;
	if (d>0 && d<=50000)
	{
		vr='e';
	}
	else
	if (d>50001 && d<=100000)
	{
		vr='m';
	}
	else
	if (d>100001 && d<=150000)
	{
		vr='a';
	}
	else
	if (d>150000)
	{
		vr='ex';
	}
	cout<<" La clasificacion del calzado es " <<vr<<endl;
	system ("pause");
	return 0;
}
