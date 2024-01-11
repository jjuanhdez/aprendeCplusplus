#include <iostream>
using namespace std;

class Persona
{
private:
	string nombre;
	int edad;
	string dni;
	void validarDNI();
public:
	Persona();
	Persona(string nnombre, int nedad, string ndni);
	string getNombre();
	int getEdad();
	string getDNI();
	void setNombre(string nnombre);
	void setEdad(int nedad);
	void setDNI(string ndni);
	string mostrar();
	bool esMayorDeEdad();
};

Persona::Persona()
{
	nombre = "";
	edad = 0;
	dni = "";
}
Persona::Persona(string nnombre, int nedad, string ndni)
{
	nombre = nnombre;
	edad = nedad;
	dni = ndni;
	validarDNI();
}

string Persona::getNombre()
{
	return nombre;
}

int Persona::getEdad()
{
	return edad;
}

string Persona::getDNI()
{
	return dni;
}

void Persona::setNombre(string nnombre)
{
	nombre = nnombre;
}

void Persona::setEdad(int nedad)
{
	if(nedad < 0)
	{
		cout << "Edad incorrecta." << endl;
		edad = 0;
	}
	else
	{
		edad = nedad;
	}
}

void Persona::setDNI(string ndni)
{
	dni = ndni;
	validarDNI();
}

void Persona::validarDNI()
{
	string letras;
	char letra;
	int num;
	letras = "TRWAGMYFPDXBNJZSQVHLCKE";
	if (dni.size() != 9)
	{
		cout << "DNI incorrecto." << endl;
		dni = "";
	}
	else
	{
		letra = dni[8];
		num = stoi(dni.erase(8,1));  //stoi convierte un string a entero
		dni = dni + letra;           //Vuelvo a poner la letra al DNI
		if (toupper(letra) != letras[num % 23])
		{
			cout << "DNI incorrecto." << endl;
			dni = "";
		}
	}
}

string Persona::mostrar()
{
	return "Nombre: " + nombre + " - Edad: " + to_string(edad) + " - DNI:" + dni;
}

bool Persona::esMayorDeEdad()
{
	return(edad > 18);
}


//// Ejercicio 2

class Cuenta
{
protected:
	Persona titular;
	float cantidad;
public:
	Cuenta(Persona nt, float nc);
	Persona getTitular();
	float getCantidad();
	void setTitular(Persona nt);
	string mostrar();
	void ingresar(float ncantidad);
	void retirar(float ncantidad);
};

Cuenta::Cuenta(Persona nt, float nc)
{
	titular = nt;
	cantidad = nc;
}

float Cuenta::getCantidad()
{
	return cantidad;
}

Persona Cuenta::getTitular()
{
	return titular;
}

void Cuenta::setTitular(Persona nt)
{
	titular = nt;
}

string Cuenta::mostrar()
{
	return "Nombre: " + titular.getNombre() + " - Edad: " + to_string(titular.getEdad())+ " - DNI: " + titular.getDNI() + " - Cantidad: " + to_string(cantidad);
}

void Cuenta::ingresar(float ncantidad)
{
	if (ncantidad > 0) cantidad = cantidad + ncantidad;
}

void Cuenta::retirar(float ncantidad)
{
	if (ncantidad > 0) cantidad = cantidad - ncantidad;
}	


// Ejercicio 3

class CuentaJoven: public Cuenta
{
	int bonificacion;
	bool esTitularValido();
public:
	CuentaJoven(Persona nt, float nc, int nb);
	float getBonificacion();
	void setBonificacion(int nb);
	string mostrar();
	void retirar(float ncantidad);
};

CuentaJoven::CuentaJoven(Persona nt, float nc, int nb):Cuenta(nt, nc)
{
	bonificacion = nb;
}

string CuentaJoven::mostrar()
{
	return "CUENTA JOVEN\n Titular: " + titular.mostrar() + " - Cantidad: " + to_string(cantidad) + " - Bonificaciï¿½n: " + to_string(bonificacion);
}

bool CuentaJoven::esTitularValido()
{
	return (titular.getEdad() < 25 && titular.esMayorDeEdad());
}

void CuentaJoven::retirar(float ncantidad)
{
	if(!esTitularValido())
		cout << "No puedes retirar dinero. Titular no válido" << endl;
	else
		cantidad = cantidad - ncantidad;
	
}

int main(int argc, char *argv[]) {
	Persona yo("Jose Hernandez", 52, "12345678Z");
	CuentaJoven micuenta(yo, 100, 10);
	cout << micuenta.getCantidad() << endl;
	cout << micuenta.mostrar() << endl;
	micuenta.ingresar(50);
	micuenta.retirar(10);
	
	Persona otro;
	otro = micuenta.getTitular();
	otro.setEdad(19);
	micuenta.setTitular(otro);
	
	micuenta.retirar(10);
	cout << micuenta.mostrar() << endl;
	return 0;
}
