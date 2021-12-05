#include <iostream>
using namespace std;
 
int main (){
	double x;
	double y;
	
    cout << "*** calcula operaciones aritmeticas de dos numeros *** /n";
    
    cout << "inserte un numero:";
    cin >> x;
    
     cout << "inserte el otro numero: ";
     cin >> y;
     
     cout << "suma: " << x + y << endl;
     cout << "resta: " << x - y << endl;
     cout << "multiplicacion: " << x * y << endl;
     cout << "division: " << x / y << endl;
     
     int z = x;
     int w = y;
     cout << "residuo de division: " << z % w << endl;
     
     ++x;
     ++y;
     cout << "incremento en uno: " << "x: " << x << "y:" << y << endl;
     
    --x;
    --y;
     cout << "decremento en uno: " << "x: " << x << "y:" << y << endl;
     
     return 0;
     
 }