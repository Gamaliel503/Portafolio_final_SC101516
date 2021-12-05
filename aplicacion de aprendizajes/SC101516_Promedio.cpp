#include<iostream>
using namespace std;

cout << " Autor :  GAMALIEL HERIBERTO SALAZAR CALLES    \n";
cout << " Carnet:  SC101516 \n";


	main(){
	 int n;//cantidad de numeros
	 float a,c=0,prom;
	 cout<<"ingrese la cantidad de numeros a promediar: ";
	 cin>>n;
	 for(int i=0;i<n;i++){
	 cout<<"ingrese el numero "<<i+1<<": ";
	 cin>>a;//el valor de a varia en cada ciclo
	 c=c+a;
	 }
	 prom=c/n;
	 cout<<"el promedio es: "<<prom;
	}