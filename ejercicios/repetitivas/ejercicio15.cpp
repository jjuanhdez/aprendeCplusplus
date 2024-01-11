//################################################################################
//Una persona adquiri� un producto para pagar en 20 meses. El primer mes pag� 10 
//euros, el segundo 20 euros, el tercero 40 euros y as� sucesivamente. 
//Realizar un algoritmo para determinar cu�nto debe pagar mensualmente y el total 
//de lo que pag� despu�s de los 20 meses.
//################################################################################
//An�lisis
//Tenemos que ir acumulando lo valores de un serie aritm�tica. La serie est�
//formada por 20 cantidades a pagar que se van multiplicando por 2.
//Datos de entrada: Nada
//Informaci�n de salida: El pago acumulado 
//Variables: pago, pago_acum (Real), mes (Entero)
//################################################################################
//Dise�o
//1. Inicializo las variables -> pago_acum <- 20; pago <- 10
//2. Desde el mes 1 hasta el 20
//3.   Acumulo el pago
//4.   Doblo el pago
//5. Muestro el pago acumulado
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float pago, pago_acum;
	int mes;
	pago = 10;
	for(mes = 1; mes <= 20; mes++)
	{
		pago_acum = pago_acum + pago;
		pago = pago * 2;
	}
	cout << "Al final de los 20 meses tuvo que pagar: " << pago_acum;
	return 0;
}
