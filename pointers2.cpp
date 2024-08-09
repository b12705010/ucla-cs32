#include<iostream>
using namespace std;

void set(int *px){
    *px = 5;
}

void sett(int px){
    px = 10;
}

int main(){
    int *pp;
    int x = 1;
    set(&x);
    cout << x << endl;

    sett(x);
    cout << x;
}