/*
 * listasimpenl.cpp
 *
 *  Created on: 21/10/2017
 *      Author: godin
 */
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>
#include "listadoble.h"


template<typename T>
 listadoble<T>::listadoble(){
	head=NULL;
	trailer=NULL;
}

template<typename T>
int listadoble<T>::getsize(){
	return size;

}

template<typename T>
bool listadoble<T>::isempty(){

	if(size==0){

		return true;
	}else{

		return false;
	}
}

template<typename T>
T listadoble<T>::first(){
	if(isempty()){

		return 0;
	}

	return head->next->element;

}

template<typename T>
T listadoble<T>::last(){
	if(isempty()){

		return 0;
	}

	return trailer->previo->element;

}

template<class T>
void listadoble<T>::addfirst(T nuevo){
	addbetween(nuevo,head,head->next);
}

template<typename T>
void listadoble<T>::addlast(T nuevo){

	addbetween(nuevo, trailer->prev, trailer);
}




template<typename T>
T listadoble<T>::removefirst(){


	if (isempty())
		{return NULL;
		}
      return remove(head->next);
}

template<typename T>
T listadoble<T>::removelast(){
	if (isempty())
			{return NULL;
			}

						return remove(trailer->previo);
}

template<typename T>
 void listadoble<T>::addbetween(T nuevo,nododoble<T>* pred,nododoble<T> *susce){

	nododoble<T>* tempo;

	tempo=new nododoble<T>(nuevo, pred,susce);
		pred->next=susce;
		susce->previo=tempo;
		size++;
}


template<typename T>
T listadoble<T>::remove(nododoble<T> nuevo){

nododoble<T>*predecesor;
nododoble<T>*suscesor;
predecesor=nuevo->previo;
suscesor=nuevo->next;
predecesor->next=suscesor;
suscesor->previo=predecesor;

size--;
return nuevo->element;
}
