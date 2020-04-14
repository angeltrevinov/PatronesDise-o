/*
  Autor:       Angel Odiel Treviño Villanueva
  Matricula:   A01336559

  Descripcion: Este es nuestro Nodo, el cual seran los
                objetos que se van a comunicar a traves de
                nuestra mediador lista
*/
#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;

template <class T>

class Node {
// =========================================================
public:
  T data;
  Node <T> *pNext;

  // -------------------------------------------------------
  Node <T> (
    // Constructor vacio
  ) {
    pNext = NULL;
  }
  // -------------------------------------------------------
  Node <T> (
    // constructor que recibe algun tipo de dato para llenar
    // nuestro nodo
    T data
  ) {
    this->data = data;
    pNext = NULL;
  }
};
#endif
