#include <iostream>
#include <cstdlib>
/*De un total de 5 estadios en Colombia se conoce el total de Espectadores
que asistieron a la fecha profesional del día 23 de Marzo, realizar un programa que
calcule y muestre el total de espectadores y el Vr. recaudado si las entradas estaban
definidas a $25.000 entrada general, validar el ingreso de espectadores permitido
en un rango de 0 a 45.000. */
using namespace std;
int main(int argc, char** argv)
{
	cout<< "\t LIQUIDA INGRESO DE ENTRADA " <<endl;
		        for (i=1;i<=5;i++)
		        {
		        	cout<< " Ingrse el total de espectadores del "<<i<< " estadio ";
		        	cin>>espec;
		        	while(espec<0 || espec>45000)
		        	{
		        		cout<< " Datos Errados "<<endl;
		        		cout<< " Ingrse el total de espectadores del ";
		            	cout<<i<< " estadio ";
						cin>>espec;
					}
					ing=espec*entrada;
					cout<< "Para el" <<i << " Estadio por "<<espec<<" Se genero $ " <<ing<< " M/cte" <<endl;
					system ("pause");
					system ("cls");
					tespec=tespec+espec;
				}
				cout<< " El total de ingreso por "<<tespec<<" de la fecha es $ "<<tespec*entrada<<endl;
		system ("pause");
		return 0;
}
