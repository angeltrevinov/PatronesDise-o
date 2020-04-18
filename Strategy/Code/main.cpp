/*
  Autor:       Angel Odiel Treviño Villanueva
  Matricula:   A01336559

  Descripcion: Un ejemplo de como se puede implementar el
                Patron de Estrategia a traves de la
                implementacion de diferentes algoritmos de
                de ordenamiento
*/
#include <iostream>
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "SortBehavior.h"
#include "Collection.h"

using namespace std;

// ---------------------------------------------------------
int main() {

  int arr1[5] = {3, 9, 0, 2, 1};
  int arr2[5] = {3, 9, 0, 2, 1};

  BubbleSort    bubble;
  SelectionSort selection;

  Collection col;
  col.setSort(&bubble);
  col.sort(arr1);

  Collection colB;
  colB.setSort(&selection);
  colB.sort(arr2);

  return 0;
}
