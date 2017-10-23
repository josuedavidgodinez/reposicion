/*
 * listasimpenl.cpp
 *
 *  Created on: 21/10/2017
 *      Author: godin
 */
#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>
#include "listasimpenl.h"




template<typename T>
int listasimpenl<T>::getsize(){
	return size;

}

template<typename T>
bool listasimpenl<T>::isempty(){

	if(size==0){

		return true;
	}else{

		return false;
	}
}

template<typename T>
T listasimpenl<T>::first(){
	if(isempty()){

		return 0;
	}

	return head->element;

}

template<typename T>
T listasimpenl<T>::last(){
	if(isempty()){

		return 0;
	}

	return tail->element;

}

template<class T>
void listasimpenl<T>::addfirst(T nuevo){
	head = new nodo<T>(nuevo, head);

if(isempty()){

	tail=head;
}
size++;
}

template<typename T>
void listasimpenl<T>::addlast(T nuevo){

	nodo<T> *tempo=new nodo<T>();
tempo->element=nuevo;
tempo->next=nullptr;

	if (size == 0)
		{
		head=tempo;

		}else{

			tail->next=tempo;
			tail=tempo;
		}
			size++;
}




template<typename T>
T listasimpenl<T>::removefirst(){


	if (isempty())
		{return NULL;
		}
	T respuesta;
       respuesta=head->element;

      head=head->next;

			size--;
   if(size == 0) {

	tail=NULL;

   };
					return respuesta;
}



