#include <iostream>

using namespace std;

class Vettore{

    private:

    int size, len, delta;
    public: int * v;

    public:

    Vettore( int size, int delta ){
        this->size = size;
        this->delta = delta;
        len = 0;
        v = new int[size];
    }

    void add( int  n ){
        if (len == size){
            cout <<"Estendo da " << size << " a " << size+delta << endl;
            int *nuovov = new int[size + delta];
            for(int i = 0; i<size;i++) nuovov[i] = v[i];
            size += delta;
            delete[] v;
            v = nuovov;
        }
        v[len] = n;
        len++;
    }

    int pop()
    {
        if(len==0) {cout<< "\nERRORE Pila Vuota\n"; return 0;}
        return v[--len]
        
    }
    
    int getElement(int index)
    {
        return v[index];
    }

    void setElement(int index, int newvalue)
    {
        v[index]= newvalue;
    }

    void print () {
        cout << "Contenuto del vettore: ";
        for(int i = 0;i < len;i++) cout << v[i] << " ";
        cout << endl;
    }
};

int main(int argc, char *argv[]){
    Pila vett(10, 10);
    for(int i=0;i<100;i++) vett.add(i);
    for(int i=0;i<10;i++) cout<<vett.pop()<<" ";
    cout<<endl;

    

    
    
}

