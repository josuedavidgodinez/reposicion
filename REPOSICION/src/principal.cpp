/*
 * principal.cpp
 *
 *  Created on: 22/10/2017
 *      Author: godin
 */


#include <iostream>
#include "listasimpenl.cpp"
#include "listasimpenl.h"
#include "listacircular.cpp"
#include "listacircular.h"
#include "listadoble.cpp"
#include "listadoble.h"

#include "ganadores.h"
using namespace std;



int main(){

	listasimpenl<string> listagente;
	listasimpenl<string> premios;

int no_g;
int no_p;
string nombre;
string premio;
	cout<< "ingrese cantidad de  personas"<<endl;
	cin>>no_g;
	cout<< "ingrese cantidad de  premios"<<endl;
		cin>>no_p;

if(no_p<=no_g){
for(int x=1;x<=no_g;x++){
	int v1;
	v1=rand()%2+1;
	cout<< "ingrese nombre de persona"<<endl;
			cin>>nombre;
if(v1==1){
	listagente.addfirst(nombre);
}else if(v1==2){
	listagente.addlast(nombre);

}
}

for(int x=1;x<=no_p;x++){
	int v1;
	v1=rand()%2+1;
	cout<< "ingrese premio"<<endl;
			cin>>premio;
			if(v1==1){
				premios.addfirst(premio);
			}else if(v1==2){
				premios.addlast(premio);

			}
}




for(int x=1;x<=no_p;x++){

	cout<<"ganador: "<<listagente.removefirst()<<"premio: "<<premios.removefirst()<<endl;
}


}else{

	cout<<"numero de premios mayor que de persona esto no es valido";
}


	return 0;
}



