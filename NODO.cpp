#include <iostream>
using namespace std;

struct nodo {
	int valor ;
	struct nodo *ptr;
};

int main (){
	struct nodo *inicio;
	struct nodo *nodo;
	
	nodo= new struct nodo;
	inicio=nodo;
	inicio ->ptr=NULL;
	inicio->valor=10;
	nodo=new struct nodo;
	inicio->ptr= nodo;
    inicio->ptr->ptr=NULL;
    inicio->ptr-> valor = 20;
    
    inicio->valor;
    cout<<"valor 10"<<inicio<<endl;
    cout<<"valor 20"<<inicio->ptr->valor;
    return 0;
    
    
}
