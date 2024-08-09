#include<iostream>
using namespace std;

int main(){
    bool silly = true;

    bool *ptr;
    ptr = &silly;

    cout << "silly : " << &silly << endl;
    cout << "ptr : " << &ptr << endl;
    cout << "ptr : " << ptr << endl;
}