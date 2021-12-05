#include <iostream>
#include <array>

using namespace std;

const int TAMANIO =2000; //NUMERO DE ELEMENTOS EN EL ARREGLO

//IMPRIME HASTA NUM_ELEMENTOS DE UN ARREGLO
void imprimirArreglo(array<int, TAMANIO> &arr, int num_elementos){
	
	for(int i=0; i < arr.size() && i < num_elementos; i++){
		cout << arr[i] << endl;
	}
}

int main(){
	array<int, TAMANIO> miArreglo;
	for (int i=0; i< TAMANIO; i++){
		cin >> miArreglo[i];
		
	}
	cout <<"Cantidad de elementos:" << miArreglo.size()<< endl;
	cout <<"Primeros 10 elementos" << endl;
	
	imprimirArreglo(miArreglo, 2000);
	
	return 0;
}