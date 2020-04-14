/*
  Autor:       Angel Odiel Treviño Villanueva
  Matricula:   A01336559

  Descripcion: Este es la lista el cual servira como nuestro
                Mediador para que nuestros nodos puedan
                interactuar entre ellos
*/
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "Node.h"

using namespace std;

template <class T>

class List {
// =========================================================
private:
  Node <T> *pBeginner;
// =========================================================
public:
  // -------------------------------------------------------
  List(
    // Constructor vacio
  ) {
    pBeginner = NULL;
  }
  // -------------------------------------------------------
  void insertStart(
    // Metodo que recibe un dato para insertar al principio
    // de la lista
    T dato
  ) {
    Node <T> *pP = new Node <T>(dato);
    pP->pNext = pBeginner;
    pBeginner = pP;
  }
  // -------------------------------------------------------
  void deleteFirst(
    // Metodo que borra el primer nodo de la lista
  ) {
    if (pBeginner != NULL) {
      Node <T> *pP = pBeginner;
      pBeginner = pBeginner -> pNext;
      delete pP;
    }
  }
  // -------------------------------------------------------
  void deleteLast(
    // Metodo que borra el ultimo nodo de la lista
  ) {
    Node <T> *pP = pBeginner;
    if(
      // checar si la lista esta llena o solo hay un
      // nodo en la lista
      pP != NULL &&
      pBeginner -> pNext != NULL
    ) {
      Node <T> *pQ = NULL;
      while(pP -> pNext != NULL) {
        pQ = pP;
        pP = pP -> pNext;
      }
      pQ -> pNext = NULL;
      delete pP;
    } else {
      deleteFirst();
    }
  }
  // -------------------------------------------------------
  void showContents(
    // Metodo que muestra todos los contenidos de la lista
  ) {
    Node <T> *pP = pBeginner;
    while(pP != NULL) {
      cout << pP -> data << " ";
      pP = pP -> pNext;
    }
    cout << endl;
  }
};
#endif
