/*
 * listacircular.h
 *
 *  Created on: 22/10/2017
 *      Author: godin
 */

#ifndef LISTACIRCULAR_H_
#define LISTACIRCULAR_H_
#include "nodo.h"

template<typename T>
class listacircular {
public:

	nodo<T>* tail;
	int size=0;

public:



	int getsize();
	bool isempty();
	T first();
	T last();
	void rotate();

	void addfirst(T nuevo);
	void addlast(T nuevo);

	T removefirst();
	void push(T e);

	T top();
	T pop();
	void enqueque();
	void dequeque();


};

#endif /* LISTACIRCULAR_H_ */
