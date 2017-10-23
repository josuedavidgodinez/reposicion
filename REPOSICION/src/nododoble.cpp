/*
 * nodo.cpp
 *
 *  Created on: 22/10/2017
 *      Author: godin
 */

#include "nododoble.h"
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>

template <class T>
nododoble<T>::nododoble(){

element=NULL;
next=NULL;
previo=NULL;

}


template <class T>
nododoble<T>:: nododoble( T dat,  nododoble<T> *prev,nododoble<T> *sig){

element=dat;
next=sig;
previo=prev;
}
