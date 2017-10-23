/*
 * nodo.h
 *
 *  Created on: 21/10/2017
 *      Author: godin
 */
#pragma once
#ifndef NODO_H_
#define NODO_H_

#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

template <typename T>
 class nodo {
public:
	nodo();
	 nodo(const T dat, nodo<T> *sig);
	T element;
		nodo* next;



};

#endif /* NODO_H_ */
