#include "iostream"
using namespace std;

int main ()
{
	//problema 1.6 condtruya un diagrama de flujo que calcule e imprima el numero de segundos que hay en determinado numero de dias
	int DIAS;
	float SEGUNDOS;
	
	//entrada de datos
	cout<<"escriba el numero de dias para calcular los segundos "<<"\n";
	cin >> DIAS;
	
	//CALCULO
	SEGUNDOS= DIAS*24*60*60;
	
	//se imprime el resultado
	cout<< "En "<<DIAS<<" dias,hay "<<SEGUNDOS<<"segundos"<<"\n";
	return 0;
}
