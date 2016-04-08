#include<iostream>
using namespace std;

class data{
	int valor;
	data *next;
	
	data(){}
	};
	
class setTDA{
	data *head;
	setTDA(){}
	
//  metodos .....
	}

class conjuntoTDA{
public:
	setTDA *a;
	data *aux;
	data *aux2;
	
	conjunto(){}
	
	void agrega(data x){
		a->insert(x);
		}
	void saca(){
		return a->delete();
		}
	bool estavacio(){
		if(a->isempy()) return 1;
		else return 0;
		}
	bool pertenece(data x){
		if(estavacio()) return 0;
		aux=a->head;
		while(aux!=nullptr){
			if(x==aux) return 1;
			aux=aux->next;
			}
		}
	conjuntoTDA interseccion(conjunto c){
		conjuntoTDA b;
		aux=c->head;
		while(aux!=nullptr){
			aux2=a->head;
			while(aux2!=nullptr){
				if(aux2==aux) b->agrega(aux2); 
				aux2=aux2->next;
				}
			aux1=aux->next
			}
		return b;
		}
	void intersecta(conjunto c){
		aux=c->head;
		while(aux!=nullptr){
			aux2=a->head;
			bool e=false;
			while(aux2!=nullptr){
				if(aux2==aux) e=true; 
				aux2=aux2->next;
				}
			if(e==true) aux1=aux->next
			else{
				data *burbuja=aux;
				aux=aux->next;
				delete burbuja;
			}
		}
		return c;
	}
	conjuntoTDA union(conjunto c){
		conjuntoTDA b;
		while(c!=nullptr){
			b->agrega(c->saca());
			}
		while(a!=nullptr){	
			b->agrega(a->saca());
			}
		return b;
		}
	conjuntoTDA une(conjunto c){
		aux=c->head;
		while(aux!=nullptr){
			aux2=a->head;
			bool e=false;
			while(aux2!=nullptr){
				if(aux2==aux) e=true; 
				aux2=aux2->next;
				}
			if(e==true) aux1=aux->next
			else{
				data *burbuja=aux;
				aux=aux->next;
				delete burbuja;
			}
		}
		return c;
	}
















//ejercicio 2
class item{
	public:
		string valor;
		int cant_llamados;
		item *next;
		
		item(){
			valor=nullptr;
			cant_llamados=nullptr;
			next=nullptr;
		}
};

class lista{
	item* head;
	item* aux;
	
	lista(){}
	bool isempy(){
		if(!head) return 1;
		return 0;
	}
	void agregar(item i){
		if(isempy){
			head=i;
			return 1;
		}
		else{
			aux=head;
			while(aux!=nullptr){
				if(aux->valor==i->valor){
				aux->cant_llamados+=i->cant_llamados;
				item aux2=head;
				while(aux2!=nullptr){
					if(aux2->cant_llamados<=i->cant_llamados){
						i->next=aux;
						head=i;
						}
					else{
						while(aux!=nullptr){
						if(aux->next->cant_llamados<=i->cant_llamados){
							i->next=aux->next;
							aux->next=i;
							return 1;
							}
						}
					}
				return 1;
				}
			}
			if(aux->cant_llamados<=i->cant_llamados){
				i->next=aux;
				head=i;
				return 1;
			}
			while(aux!=nullptr){
				if(aux->next->cant_llamados<=i->cant_llamados){
					i->next=aux->next;
					aux->next=i;
					return 1;
				}
			}
		}
	}
	int probabilidad(string valor){
		if(isempy()) return 0;
		int a=0,b=0;
		aux=head;
		while(aux!=nullptr){
			if(aux->valor==valor) b=aux->cant_llamados;
			a=a+aux->cant_llamados;
		}
		return (a/b);
	}
	srting llamar_kenesimo(int k){
		if(isempy()) return 0;
		aux=head;
		for(int a=1;a<k;a++){
			aux=aux->next;
		}
		return aux->valor;
	}
};























