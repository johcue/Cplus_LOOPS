#include <iostream>
#include <cstdlib>
/* 
1-LEER UN NUMERO ENTERO DE 4 DIGITOS Y DETERMINAR SI LA SUMA DE SUS DIGITOS ES O NO UN NUMERO PRIMO
2-LEER UNA SECUENCIA DE 5 NUMEROS Y MOSTRAR EL RPOMEDIO DE SUS FACTORIALES */
using namespace std;
int main(int argc, char** argv)
{
	int opc,num,div=0,d1,d2,d3,d4,i,j,sumprim=0,fac=1;
	float sum=0, prom;
	do
	{
	system("cls");
	cout<<endl<<endl;
	cout<<"\t         MENU        "<<endl;
	cout<<"\t   1-SUMA DE DIGITOS "<<endl;
	cout<<"\t   2-PROMEDIO DE FACTORIALES"<<endl;
	cout<<"\t   3-TERMINAR        "<<endl;
	cout<<"Por favor seleccione una opcion ";
	cin>>opc;
	system("Pause");
	system("cls");
	div=0;
	sum=0;
	sumprim=0;
	fac=1;
	switch (opc)
	{
		case 1: cout<<"\t   SUMA DE DIGITOS "<<endl;
		        cout<<"Por favor digite el numero ";
		        cin>>num;
		        if( num>=1000 && num<=9999)
		        {
		        	
					sumprim=0;
					d1=num/1000;
		        	d2=num%1000/100;
		        	d3=num%1000%100/10;
		        	d4=num%10;
		        	sumprim=sumprim+d1+d2+d3+d4;
		        	for(i=1;i<=num;i++)
		        	{
		        		if(sumprim%i==0)
		        		{
		        			div++;
						}
				    }
					if(div==2)
		        	{
		        		cout<<sumprim<<" Es primo"<<endl;
					}
					else
					{
						cout<<sumprim<<" No Es primo"<<endl;
					}
		        	
				}
				else
				{
					cout<<"El numero no tiene cuatro digitos"<<endl;
				}
				system("Pause");
				break;
	case 2:cout<<"\t   PROMEDIO DE FACTORIALES "<<endl;
	       for (i=1;i<=5;i++)
	       {
	       	cout<<"Digite el "<<i<<" numero de la secuencia ";
	       	cin>>num;
	       	fac=1;
	       	for(j=1;j<=num;j++)
	       	{
	       		fac=fac*j;
	       		
			   }
			   sum=sum+fac;
		   }
		   prom=sum/5;
		   cout<<"La suma es "<<sum<<endl;
		   cout<<"El promedio es "<<prom<<endl;
		   system("Pause");
		   break;			
	}
}while(opc!=3);
cout<<"Me siento util :)"<<endl;
	system("pause");
	return 0;
}
