#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

//prototipos
using namespace std;
string generarMovimientoComputadora();
string obtenerMovimientoJugador();
void determinarGanador(string computadora, string jugador);
void procesarEntradaJugadorPapel(string Computadora);
void procesarEntradaJugadorTijera(string Computadora);
void procesarEntradaJugadorPiedra(string Computadora);

int main(){
	using namespace std;
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador(movimientoComputadora, movimientoJugador);
	
}


//implementacion
string generarMovimientoComputadora(){
	string movimiento;
	int numeroAleatorio;
	
	//genero numero aleatorio
	srand(time(0));
	numeroAleatorio= rand()% 3+1;
	
	switch (numeroAleatorio)
	{
		case 1:
			movimiento="piedra";
			break;
		case 2:
			movimiento="papel";
			break;
		case 3:
			movimiento="tijera";
			break;
			
	}
	cout << "Computadora: " <<movimiento << "/n";
	return movimiento;
}

string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout << "piedra, papel o tijera (para terminar el juego, escriba salir)?";
	cin >> movimiento;
	
	return movimiento;
	
}

void determinarGanador (string computadora, string jugador){
	if (computadora==jugador){
		cout <<"Empate! \n";
	}
	else if (jugador =="piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}
	else if (jugador =="papel"){
		procesarEntradaJugadorPapel(computadora);
	}
	else if (jugador =="tijera"){
		procesarEntradaJugadorTijera(computadora);
	}
	else {
		cout << "entrada no valida. ingrese piedra, papel, o tijera. \n";
	}
	
}
void procesarEntradaJugadorPiedra(string computadora){
	if (computadora=="papel"){
		cout << "la computadora gana. papel cubre piedra. \n";
	}
	else if (computadora=="tijera"){
		cout << "usted gana. Piedra rompe tijera. \n";
	}
}
void procesarEntradaJugadorPapel(string computadora){
	if (computadora=="tijera"){
		cout << "la computadora gana. tijera corta papel. \n";
	}
	else if (computadora=="piedra"){
		cout << "usted gana. papel cubre piedra. \n";
	}
}
void procesarEntradaJugadorTijera(string computadora){
	if (computadora=="Piedra"){
		cout << "la computadora gana. piedra rompe tijera. \n";
	}
	else if (computadora=="papel"){
		cout << "usted gana. tijera corta papel. \n";
	}
}
