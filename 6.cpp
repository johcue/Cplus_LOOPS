#include <iostream>
#include <cstdlib>

/* Realizar un programa que permita liquidar el salario neto de n empleados,
conocido su salario básico, horas extras, (horas extras igual para todos $10.000),
mostrar el monto a pagar por cada trabajador y al final el Vr. Total de toda la nomina  */

using namespace std;
int main(int argc, char** argv) 

{
	system("color f1");
	int n,i=1,j=1,salario,salneto,hextras,vrtotalnomina=0,Thextras;
	char nombre[20],respuesta;
	cout<<endl<<endl;
	cout<<"\t LIQUIDA NOMINA "<<endl;
	cout<<" Ingrese el numero de empleados"<<endl;
	cin>>n;
	
	while(i<=n)
	
	{
		
		cout<<"Ingrese el nombre del "<<i<<" empleado"<<endl;
	cin>>nombre;
	cout<<"Ingrese el salario de "<<nombre<<endl;
	cin>>salario;
	cout<<"¿"<<nombre<<" Trabajo horas estras? s/n"<<endl;
	cin>>respuesta;
	if(respuesta=='s')
    {
    	cout<<"Ingrese las horas extras de "<<nombre<<endl;
    	cin>>hextras;
    	Thextras=hextras*10000;
    	salneto=salario+Thextras;
    	cout<<"El salario neto de "<<nombre<<" es "<<"$"<<salneto<<" pesos"<<endl;
	}
	else
    {
    	salneto=salario;
    cout<<"El salario neto de "<<nombre<<" es "<<"$"<<salneto<<" pesos"<<endl;	
		}
		system("pause");
		system("CLS");	
		i++;
		vrtotalnomina  =vrtotalnomina+salneto;
	}

cout<<"El valor total de la nomina es $"<<vrtotalnomina<<" pesos"<<endl;

	system("pause");
	return 0;
}
