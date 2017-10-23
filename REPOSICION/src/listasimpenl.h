/*
 * listasimpenl.h
 *
 *  Created on: 21/10/2017
 *      Author: godin
 */

#ifndef LISTASIMPENL_H_
#define LISTASIMPENL_H_
#include "nodo.h"

#include "nodo.cpp"
template<class T>
class listasimpenl{
private:
	nodo<T>* head;
	nodo<T>* tail;
	int size=0;

public:



	int getsize();
	bool isempty();
	T first();
	T last();
	void addfirst(T nuevo);
	void addlast(T nuevo);

	T removefirst();
	void push(T e);

	T top();
	T pop();
	void enqueque();
	void dequeque();

};

#endif /* LISTASIMPENL_H_ */
