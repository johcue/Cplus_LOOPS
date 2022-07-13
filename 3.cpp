#include <iostream>
#include <cstdlib>
/*Realizar un programa que permita escoger entre las siguientes transacciones en un cajero
automático*/
using namespace std;
int main(int argc, char** argv)
{
system ("color f4");
int opc,recibo,clavep,clave=221,cuenta, cont=3,ser;
float vr, saldo=900000;
do
	{
	system ("cls");
	cout<<endl<<endl;
	cout<< "\t \t BIENVENIDO A SU BANCO PROGRA I" <<endl;
	cout<< "Ingrese su clave" <<endl;
	cin>>clavep;
	system ("cls");
	if (clavep==clave)
	{
	do
		{
		 system ("cls");
	cout<<endl<<endl;
	cout<< "\t             (000)              " <<endl;
	cout<< "\t        --0oo (_) oo0--         " <<endl;
	cout<< "\t -------------------------------" <<endl;
	cout<< "\t BIENVENIDO A SU BANCO PROGRA I " <<endl;
	cout<< "\t -------------------------------" <<endl;
	cout<< "\t             MENU               " <<endl;
	cout<< "\t -------------------------------" <<endl;
	cout<< "\t            |_||_|              " <<endl;
	cout<< "\t     1- CONSIGNAR           " <<endl;
	cout<< "\t     2- RETIRO              " <<endl;
	cout<< "\t     3- PAGO DE SERVICIOS   " <<endl;
	cout<< "\t     4- CAMBIO DE CLAVE     " <<endl;
      	 cout<< "\t     5- SALIR               " <<endl;
	     cout<< "\t ---------------------------" <<endl;
	     cout<<endl<<endl;
	     cout<< "\t ->ELIJA SU OPERACION       " <<endl;
	     cin>>opc;
	     switch (opc)
	{
		case 1 : cout<< " CONSIGNACION " <<endl;
		         cout<< " DIGITE EL VALOR A CONSIGNAR " <<endl;
				 cin>>vr;
				 cout<< " DIGITE LA CUENTA A CONSIGNAR " <<endl;
				 cin>>cuenta;
				 saldo=saldo+vr;
				 system ("cls");
				 cout<< "EL VR CONSIGNADO ES $" <<vr<< " EN LA CUENTA No. ";
				 cout<<cuenta<<endl;
				 cout<<endl<<endl;
				 cout<<" SU NUEVO SALDO ES $" <<saldo<<endl; 
				 cout<< "SU TRANSACCION HA SIDO EXITOSA" <<endl;
				 system ("pause");
				 break;
		case 2 : cout<< "RETIRO" <<end