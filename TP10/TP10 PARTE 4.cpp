#include <iostream>
using namespace std;

int primos(int numero) {
    if(numero<2){
        return false;
    }
    
    for(int i=2; i<=numero/2; ++i){
        if (numero%i==0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int numero;
    cout<<"Introduce un numero: ";
    cin>>numero;

    if(primos(numero)){
        cout<<numero<<" es un numero primo."<<endl;
    }else{
        cout<<numero<<" no es un numero primo."<<endl;
    }

    return 0;
}
