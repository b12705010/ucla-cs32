#include<iostream>
using namespace std;

class Stomach{
public:
    ~Stomach(){
        cout << "Bye Stomach!" << endl;
    }
};

class Intestine{
public:
    ~Intestine(){
        cout << "Bye Intestine!" << endl; 
    }
};

class Constipated{
public:
    ~Constipated(){
        cout << "Still no poop!" << endl;
    }
private:
    Stomach tummy_;
    Intestine guts_;
};
int main( )
{
    cout << "hi!!!1" << endl;
    Constipated d;
    
}