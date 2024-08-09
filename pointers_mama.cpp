#include<iostream>

using namespace std;

int main(){
    bool silly = true;

    bool *ptr;
    ptr = &silly;

    cout << "silly" << endl;
    cout << *ptr << endl;
    cout << ptr << endl;
    cout << &silly << endl;
    cout << &ptr << endl;

}