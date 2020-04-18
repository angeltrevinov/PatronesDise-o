/*
  Autor:       Angel Odiel Treviño Villanueva
  Matricula:   A01336559

  Descripcion: Este es donde establecemos nuestro contexto,
                el cual es un objeto que guardara que tipo
                de algoritmo utilizar a nuestra colección
*/
#ifndef COLLECTION_H
#define COLLECTION_H

#include <iostream>
#include "SortBehavior.h"

using namespace std;

class Collection {
// =========================================================
private:
  SortBehavior* m_sort;
// =========================================================
public:
  // -------------------------------------------------------
  Collection() {}
  // -------------------------------------------------------
  void setSort(
    // Recibimos un pointer al objeto con el sort a utilizar
    SortBehavior* s
  ) {
    m_sort = s;
  }
  // -------------------------------------------------------
  void sort(
    //realizamos el metodo al que nuestro apuntador utiliza
    int arr[5]
  ) {
    m_sort->sort(arr);
  }
};
#endif
