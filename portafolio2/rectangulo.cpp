#include <iostream>
using namespace std;
class Rectangulo {
int saldo, alto;
public:
Rectangulo(int,int);
int getsaldo () {return saldo}
};
Rectangulo::Rectangulo (int x, int y) {
saldo = x;
alto = y;
}
int main () {
Rectangulo rect(100,4);
Rectangulo rectb(100,6);
cout << "saldo " << saldo() << endl;
cout << "rectb area: " << rectb.area() << endl;
return 0;
}
