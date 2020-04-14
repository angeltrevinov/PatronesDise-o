/*
  Autor:       Angel Odiel Treviño Villanueva
  Matricula:   A01336559

  Descripcion: Un ejemplo de como se puede implementar el
                Patron de Mediador a traves del uso de
                listas enlazadas entre si
*/

#include <iostream>
#include "List.h"

using namespace std;

// ---------------------------------------------------------
int main() {

  List <int> Lista;
  // Insertar nuestros nodos
  Lista.insertStart(5);
  Lista.insertStart(3);
  Lista.insertStart(9);
  Lista.insertStart(8);
  Lista.insertStart(7);
  Lista.showContents();
  // Borra algunos elementos
  Lista.deleteFirst();
  Lista.deleteLast();
  Lista.showContents();

  return 0;
}
