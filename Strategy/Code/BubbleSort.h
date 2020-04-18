/*
  Autor:       Angel Odiel Treviño Villanueva
  Matricula:   A01336559

  Descripcion: Este es donde establecemos nuestro metodo de
                Bubble sort
*/
#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>

#include "SortBehavior.h"

using namespace std;

class BubbleSort: public SortBehavior {
// =========================================================
public:
  // -------------------------------------------------------
  virtual void sort(
    // implementación de bubble sort
    int arr[5]
  ) {
    cout << "=== Bubble Sort ===" << endl;
    for (int i = 0; i < 5-1; i++) {
      for(int j = 0; j < 5-i-1; j++) {
        if (
          arr[j] > arr[j+1]
        ) {
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;

          // Solo imprime el array
          for (int x = 0; x < 5; x++) {
            cout << arr[x] << " ";
          }
          cout << endl;
        }
      }
    }
  }
};
#endif
