/*
 * nodo.h
 *
 *  Created on: 21/10/2017
 *      Author: godin
 */

#ifndef NODODOBLE_H_
#define NODODOBLE_H_

#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

template <typename T>
 class nododoble {
public:
	nododoble();
	nododoble(const T dat, nododoble<T> *prev, nododoble<T> *sig);
	T element;
	nododoble* next;
	nododoble* previo;



};

#endif /* NODODOBLE_H_ */
