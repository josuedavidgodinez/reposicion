/*
 * nodo.cpp
 *
 *  Created on: 22/10/2017
 *      Author: godin
 */

#include "nodo.h"
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

template <class T>
nodo<T>:: nodo(){

element=NULL;
next=NULL;

}


template <class T>
nodo<T>:: nodo( T dat, nodo<T> *sig){

element=dat;
next=sig;

}
