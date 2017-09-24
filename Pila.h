
typedef char Tdato;
class Lista{
	
	public:
		Tdato dato;
		Lista *sgte;
		Lista(){
			sgte=NULL;
		}
};

class Pila{
	private:
		Lista *cima;
		
	public:
		Pila(){
			cima=NULL;
		}
		
		bool pilaVacia(){
			return cima==NULL;
		}
		
		
		void insertar(Tdato d){
			Lista *lista=new Lista();
			
			lista->dato=d;
			lista->sgte=cima;
			cima=lista;
		}
		
		
		Tdato quitar(){
			Lista *p=new Lista();
			Tdato aux;
			if(!pilaVacia()){
				p=cima;
				cima=cima->sgte;
				aux=p->dato;
				delete p;
				
				return aux;
			}else{
				cout<<"UNDREFLOW";
			}
		}
		
		
		int tamahno(){
			Lista *t=new Lista();
			int c=0;
			
			if(!pilaVacia()){
				t=cima;
				while(t!=NULL){
					c++;
					t=t->sgte;
				}
				return c;
			}
		}
		void vaciar(){
			Lista *p=cima;
			while(cima!=NULL){
				p=cima;
				cima=cima->sgte;
				delete (p);
			}
		}
		void imprimir(){
			Lista *p=cima;
			
			while(p!=NULL){
				cout<<"["<<p->dato<<"]->";
				p=p->sgte;
			}
		}
};







