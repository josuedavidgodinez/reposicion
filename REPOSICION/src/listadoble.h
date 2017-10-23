/*
 * listadoble.h
 *
 *  Created on: 22/10/2017
 *      Author: godin
 */
#ifndef LISTADOBLE_H_
#define LISTADOBLE_H_
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>



#include "nododoble.h"

template<class T>
class listadoble{
public:
	nododoble<T>* head;
	nododoble<T>* trailer;
	int size=0;




 listadoble();
	int getsize();
	bool isempty();
	T first();
	T last();
	void addfirst(T nuevo);
	void addlast(T nuevo);

	T removefirst();
	T removelast();
	void addbetween(T nuevo,nododoble<T>* pred,nododoble<T>* susce);

	T remove(nododoble<T> nuevo);


};

#endif /* LISTADOBLE_H_ */
