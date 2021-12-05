
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){

cout << " Autor :  GAMALIEL HERIBERTO SALAZAR CALLES    \n";
cout << " Carnet:  SC101516 \n"; 

int a,b,c;
 cout <<"\n ingrese lado A:";
 cin>>a;
 cout<<"\n ingrese lado B:";
 cin>>b;
 cout<<"\n ingrese lado C (AREA DE LA BASE):";
 cin>>c;
 
	if(a+b<c||a+c<b||b+c<a)
	cout<<"\n No forman un triangulo";
	else
	{if(a==b&&a==c&&b==c)
 	{
	 cout<<"\n Forman un triangulo equilatero";
 	cout<<"\n su area es :" <<  (1.73205080757/4) * pow(a, 2)  << endl;}
 	else
 	{
  	if(a==b||a==c||b==c)
  	{
 	cout<<"\n Forman un triángulo isoceles";
 	cout<<"\n su area es :" << c* (sqrt(pow(a, 2)-(pow(c, 2)/4))) / 2 << endl;}
 	else
   {if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
   
   {
    cout<<"\n Forman un triangulo rectangulo";
   
	
}
    else
    cout<<"\n Forman un triangulo escaleno";
     double sp = ((a+b+c) /2) ;
    cout<<"\n su area es :" << sqrt(sp*(sp-a)*(sp-b)*(sp-c)) << endl;
  }
 }
return 0;
}

}

