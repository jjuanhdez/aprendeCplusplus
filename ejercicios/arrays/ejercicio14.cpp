//################################################################################
//Programa que lea los precios de 5 art�culos y las cantidades vendidas por una 
//empresa en sus 4 sucursales. Informar:
// * Las cantidades totales de cada articulo.
// * La cantidad de art�culos en la sucursal 2.
// * La cantidad del articulo 3 en la sucursal 1.
// * La recaudaci�n total de cada sucursal.
// * La recaudaci�n total de la empresa.
// * La sucursal de mayor recaudaci�n.
//################################################################################
//An�lisis
//Leo los precios de los art�culos (lo guardo en el vector Precio)
//Leo las cantidades vendidas de los 5 art�culos en las 4 sucursales (lo guardo
//en la tabla Cantidad)
//Recorro la tabla por art�culos, y muestro lo que se ha vendido en total (por art�culo)
//Recorro la tabla por art�culos y muestro lo vendido en la sucursal 2.
//Muestro lo que se ha vendido del art�culo 3 en la sucursal 1
//Recorro la tabla acumulando todo lo que se ha vendido y el total por sucursal
//Adem�s en ese recorrido calculo la sucursal que ha vendido m�s.
//Datos de entrada: Precio de 5 art�culos y la cantidad vendida de cada art�culo en 4 
//                  sucursales
//Informaci�n de salida: Las que indica el enunciado
//Variables: Precio (tabla de 5 reales), Cantidad (tabla de 4 x 3 reales)
//           Suma, NumMayor, Ariculos_Sucursal2, MayorRec, TotalSucursal, 
//           TotalEmpresa (Real)
//################################################################################

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
   float Precio[5], Cantidad[4][5];
   float Suma, NumMayor, Ariculos_Sucursal2, MayorRec, TotalSucursal, TotalEmpresa;
   int indice_art, indice_sucursal;

   // Leer Precios
   for(indice_art = 0; indice_art < 5; indice_art++)
   {
      cout << "Ingrese Precio Articulo " << indice_art+1 << ": ";
      cin >> Precio[indice_art];
   }
   
   // Leer Cantidades
   for(indice_sucursal = 0; indice_sucursal < 4; indice_sucursal++)
   {
      for(indice_art = 0; indice_art < 5; indice_art++)
      {
         cout << "Ingrese Cant. de Articulo " << indice_art+1 << ", en Sucursal " << indice_sucursal+1 << ": ";
         cin >> Cantidad[indice_sucursal][indice_art];
      }
   }
   
   // Sumar cantidades por art�culos
   cout << "Cantidades por art�culos: " << endl;
   for(indice_art = 0; indice_art < 5; indice_art++)
   {
      Suma = Cantidad[0][indice_art] + Cantidad[1][indice_art] + Cantidad[2][indice_art] + Cantidad[3][indice_art];
      cout << "Total articulo " << indice_art+1 << ": " << Suma << endl;
   }
   
   // Informar Total de Art�culos Sucursal 2
   Ariculos_Sucursal2 = 0;
   for(indice_art = 0; indice_art < 5; indice_art++)
   {
      Ariculos_Sucursal2 += Cantidad[1][indice_art];
   }
   cout << "Total Sucursal 2: " << Ariculos_Sucursal2 << endl;
   
   // Informar Sucursal 1, Articulo 3:
   cout << "Sucursal 1, Articulo 3: " << Cantidad[0][2] << endl;
   
   // Acumular total de cada sucursal (TotalSucursal) y
   // total de la empresa (TotalEmpresa)
   MayorRec = 0; 
   NumMayor = 0; 
   TotalEmpresa = 0;
   for(indice_sucursal = 0; indice_sucursal < 4; indice_sucursal++)
   {
      TotalSucursal = 0;
      for(indice_art = 0; indice_art < 5; indice_art++)
      {
         TotalSucursal += (Cantidad[indice_sucursal][indice_art] * Precio[indice_art]);
      }
      cout << "Recaudaciones Sucursal " << indice_sucursal+1 << ": " << TotalSucursal << endl;
	  //Calculo la sucursal con mayor recaudaci�n
      if(TotalSucursal > MayorRec)
      {
		  MayorRec = TotalSucursal; 
		  NumMayor = indice_sucursal +1;
      }
      TotalEmpresa = TotalEmpresa + TotalSucursal;
   }
   cout << "Recaudaci�n total de la empresa: " << TotalEmpresa << endl;
   cout << "Sucursal de Mayor Recaudaci�n: " << NumMayor << endl;
   return 0;
}
