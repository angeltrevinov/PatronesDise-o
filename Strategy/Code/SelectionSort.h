/*
  Autor:       Angel Odiel Treviño Villanueva
  Matricula:   A01336559

  Descripcion: Este es donde establecemos nuestro metodo de
                Selection sort
*/
#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <iostream>

#include "SortBehavior.h"

using namespace std;

class SelectionSort: public SortBehavior {
// =========================================================
public:
  // -------------------------------------------------------
  virtual void sort(int arr[5]) {
    cout << "=== Selection Sort ===" << endl;

    for(int i = 0; i < 5-1; i++) {

      int min = i;
      for(int j = i+1; j < 5; j++) {
        if (
          arr[j] < arr[min]
        ) {
          min = j;
        }
      }

      int temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;

      // Solo imprime el array
      for (int x = 0; x < 5; x++) {
        cout << arr[x] << " ";
      }
      cout << endl;
    }
  }
};
#endif
