#include <iostream>
#include <cstdlib>
/* 15 Una empresa desea procesar las ventas realizadas mes a mes con 
el fin de obtener la siguiente información anual:
• Mes en el que se obtuvo la mejor venta.
• El monto de la venta máxima obtenida.
• Total de las ventas.
• Promedio de ventas.. */
using namespace std;
int main(int argc, char** argv) 
{
	int v[12]={0},mayv,mejm,i,opc,pos;
	float total=0,prom;
	do
	{
	system("cls");
	cout<<"\t GENERADOR DE VENTAS POR ANIO "<<endl;
	cout<<"\t ******MENU DE OPCIONES****** "<<endl;
	cout<<"\t   1-CAPTURA VENTAS POR MES   "<<endl;
	cout<<"\t   2-TOTAL DE VENTAS POR MES  "<<endl;
	cout<<"\t   3-VENTA MAXIMA OBTENIDA    "<<endl;
	cout<<"\t   4-MES DE LA MEJOR VENTA    "<<endl;
	cout<<"\t   5-PROMEDIO DE VENTAS       "<<endl;
	cout<<"\t   6-TERMINAR                 "<<endl;
	cout<<"\t   Por favor escoja su opcion "<<endl;
	cin>>opc;
	switch (opc)
	{
	 case 1: cout<<"\t CAPTURA VECTOR "<<endl;
                for(i=0;i<12;i++)
 	                {
 	                	cout<<"Por favor digite las ventas del ["<<i+1<<"] mes ";
		                 cin>>v[i];
                     }
	             system ("pause");
	             break;
	 
	 case 2: cout<<"\t ESCRITURA DEL VECTOR"<<endl;
 	            for(i=0;i<12;i++)
 	                {
 	                 	cout<<"["<<v[i]<<"]"<<endl;
	                  }
	             system ("pause");
	             break;
				   
	  case 3:cout<<" \t MES MEJOR VENTA "<<endl;
	            mayv=-999999;
	        	for (i=0;i<10;i++)
	  	          {
	  		        if (v[i]>mayv)
	  		       {
	  		      	mayv=v[i];
			        }
		  }
		  cout<<" La mayor venta es $"<<mayv<<" moneda corriente"<<endl;
		  system ("pause");
	      break;
	      
	case 4: cout<<" \t MES MEJOR VENTA "<<endl;
	   pos=0,mayv=-999999;
	   for (i=0;i<10;i++)
	  	{
	  		if (v[i]>mayv)
	  		{
	  			mayv=v[i];
	  			pos=i;
			  }
		  }
		  cout<<" La mayor venta fue es "<<pos<<" mes"<<endl;
		  system ("pause");
	      break;    
	 
	 case 5: cout<<"SUMA Y PROMEDIA"<<endl;
	 total=0;
	 for(i=0;i<10;i++)
	 {
	 	total=total+v[i];
		  }     
	
	prom=total/12.0;
	cout<<" El total de las ventas es "<<total<<endl;
	cout<<" El promedio de las ventas"<<prom<<endl;
}
}while(opc!=6);
	system ("pause");
	return 0;
}
