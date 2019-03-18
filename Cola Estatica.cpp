#include <iostream>
#include<stdlib.h>
//Definimos el tamaño de la cola
#define max 5

using namespace std;
class CCola
{
	private:
		int cola[max];
		int final;
		int frente;
	public:
		CCola();
	    void agregar(int);
		void sacar();
		void imprimir();
		void EleFinal();
		bool vacia();
		bool llena();
		~CCola();	
};
//-------------------------------------------------
CCola::CCola()
{
	final=-1;
	frente=0;
	
	for(int i=0;i<max;i++)
	{
		cola[i]=0;
	}
}
//-----------------------------------------------------
bool CCola::llena()
{
	if(final==max-1)
	{
		return 1; 
	}
	else
	{
		return 0; 
	}
}
//----------------------------------------------------
bool CCola::vacia()
{
	if(final==frente-1)
	{
		return 1; 
	}
	else
	{
		return 0;
	}
}
//------------------------------------------------------
void CCola::agregar(int elemento)
{
	if(llena()==1)
	{
		cout<<"Cola llena, este dato no fue insertado"<<endl;
		system("pause");
	}
	else
	{
		final++;
		cola[final]=elemento;
		cout<<"Dato Insertado"<<endl;
    }
}
//-----------------------------------------------------
void CCola::sacar()
{
	if(vacia()==1)
	{
		cout<<"La Cola Esta Vacia"<<endl;
	}
	else
	{
		cout<<"Dato Extraido:"<<cola[frente]<<endl;
		frente++;
	}
}
//------------------------------------------------------------------
void CCola::EleFinal()
{
	if(vacia()==1)
	{
		cout<<"La Cola Esta Vacia"<<endl;
	}
	else
	{
		cout<<"El Ultimo Elemento Ingresado Es:"<<cola[final]<<endl;
	}
}
//------------------------------------------------------------------------
void CCola::imprimir()
{
	if(vacia()==1)
	{
		cout<<"La Cola Esta Vacia"<<endl;
		
	}
	else
	{
		cout<<"Datos En Cola"<<endl;
		for(int i=frente;i<=final;i++)
		{
			cout<<cola[i]<<endl;
		}
	}
}
//-----------------------------------------------------------
CCola::~CCola()
{
  {
	final=-1;
	for(int i;i<max;i++)
		{
			cola[i]=0;
		}
	}	
}

int main(int argc, char** argv)
{
	CCola co;	
	int ele;
	int dato;
	int opc;
	
	do
	{
		system("cls");
		cout<<"MENU\n"<<endl;;
		
		cout<<"COLA ESTATICA\n"<<endl;
		
		cout<<"1°Agregar Dato"<<endl;
		cout<<"2°Sacar Dato"<<endl;
		cout<<"3°Imprimir Cola"<<endl;
		cout<<"4°Imprimir Ultimo Dato Insertado"<<endl;
		cout<<"5°Salir"<<endl;
		
		cout<<"\nElije Una Opcion"<<endl;
		cin>>opc;
		
		system("Cls");
		
		switch(opc)
		{
			case 1:
			{
				cout<<"Introduce El Dato A Ingresar"<<endl;
				cin>>dato;
				co.agregar(dato);
				break;
			}
			case 2:
			{
				co.sacar();
				system("pause");
				break;
			}
			case 3:
			{
				co.imprimir();
				system("pause");
				break;
			}
			case 4:
			{
				co.EleFinal();
				system("pause");
				break;
			}
			default:
			{
				
			}	
		}
	}
	while(opc<5);
	return 0;
}
