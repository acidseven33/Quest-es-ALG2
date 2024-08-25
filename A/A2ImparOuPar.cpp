#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void par(int x){
x= x/2==0;
 if(x!=0){
        cout << "Número é par" << endl;
    }
    else{
        cout << "Número é impar" << endl;
    }
}

int main (){
    int x;
    cin >> x;
    par(x);
}