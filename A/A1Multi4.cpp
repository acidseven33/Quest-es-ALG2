#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void mult(int x){
x= x/4;
 if(x!=0){
        cout << "Número é múltiplo de 4" << endl;
    }
    else{
        cout << "Número não é múltiplo de 4" << endl;
    }
}

int main (){
    int x;
    cin >> x;
    mult(x);
}