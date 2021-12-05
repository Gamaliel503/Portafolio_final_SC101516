#include <iostream>

using namespace std;
int main()
{
    int numero;
    int numeroMayor;
    system("color 0a");
    
    
    cout << " Autor :  GAMALIEL HERIBERTO SALAZAR CALLES    \n";
	cout << " Carnet:  SC101516 \n";
	
    cout<<"Programa para calcular el numero mayor de 5 numeros"<<endl;
    
    for(int i = 1;i < 6;i++)
    {
        cout<<"Introduce el numero "<<i<<": ";
        cin>>numero;
        if(numero > numeroMayor)
        {
            numeroMayor = numero;
        }
    }
    
    cout<<"El numero mayor es: "<<numeroMayor<<endl;
    cin.get();
   cin.get();
    
    return 0;
}
