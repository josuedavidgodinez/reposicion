#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>
#include "listacircular.h"




template<typename T>
int listacircular<T>::getsize(){
	return size;

}

template<typename T>
bool listacircular<T>::isempty(){

	if(size==0){

		return true;
	}else{

		return false;
	}
}

template<typename T>
T listacircular<T>::first(){
	if(isempty()){

		return 0;
	}

	nodo<T>*pointer=tail->next;
	return pointer->element;

}

template<typename T>
T listacircular<T>::last(){
	if(isempty()){

		return 0;
	}

	return tail->element;

}

template<class T>
void listacircular<T>::rotate(){
	if(tail!=NULL){

		tail=tail->next;

	}
}

template<class T>
void listacircular<T>::addfirst(T nuevo){


if(isempty()){

	tail=new nodo<T>(nuevo,NULL);
	tail->next=tail;
}else{

	nodo<T>* tempo;

tempo=new nodo<T>(nuevo, tail->next);
nodo<T>*pointer=tempo;
	tail->next=pointer;
}
size++;
}

template<typename T>
void listacircular<T>::addlast(T nuevo){

addfirst(nuevo);
tail=tail->next;
}




template<typename T>
T listacircular<T>::removefirst(){


	if (isempty())
		{return NULL;
		}
	T respuesta;
	nodo<T> head;
     head=tail->next;

    if(head==tail){
    	tail=NULL;

    }else{
    	tail->next=head->next;
    }

			size--;

					return head->element;
}

