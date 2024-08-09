#include <iostream>
using namespace std;

 #define PI 3.14


int main(){

#ifdef PI 
    cout << "哥哥哈囉！" << endl;
#endif 

#ifndef PI
    cout << "叭叭哈囉！" << endl;
#endif

    cout << "媽咪哈囉！" << endl;
}



