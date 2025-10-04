#include <iostream>

using namespace std;

template <class t>
class cola{
private:
    t a[10];
    t* head=nullptr;
    t* tail=nullptr;
public:
    
    bool vacio(){
        if(head==nullptr && tail==nullptr){
            return true;
        }
        else{
            return false;
        }
    }
    bool lleno(){
        if(vacio()){
            return 0;
        }
        if(head==a && tail==a+9){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool push(t n){
        if(lleno()){
            cout<<"Esta lleno"<<endl;
            return 0;
        }
        if(vacio()){
            tail=a;
            head=a;
            *tail=n;
            return 1;
        }
        else{
            tail++;
            *tail=n;
            return 0;
        }
    }
    bool pop(){
        if(vacio()){
            cout<<"La cola esta vacia"<<endl;
            return 0;
        }
        else{
            if(head==tail){
                head=nullptr;
                tail=nullptr;
            }
            else{
                head++;
            }
            
            return 1;
        }
    }
    void mostrarMemoria(){
        cout<<"Head: "<<head<< endl;
        cout<<"Tail: "<<tail<<endl;
    }
    void mostrarValor(){
        cout<<"Head: "<<*head<< endl;
        cout<<"Tail: "<<*tail<<endl;
    }
};

int main(){
    cola<int>cola_int;
    cola_int.mostrarMemoria();

    cola_int.pop();
    cola_int.push(12);
    cola_int.pop();
    cola_int.push(50);
    cola_int.push(15);

    cola_int.mostrarMemoria();
    cola_int.mostrarValor();

}
