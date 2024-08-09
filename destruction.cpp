#include <iostream>
using namespace std;

class Banana
{
public:
    ~Banana( ){
        cout << "Mmm rotten bananas\n";
    }
};

class Stomach
{
public:
    ~Stomach( ){
        cout << "Gurgle gurgle!\n";
    }
private:
    Banana banana_;
};

class Constipated
{
public:
    ~Constipated( ){
        cout << "Finally relieved!\n";
    }
private:
    Stomach tummy_;

};

int main( )
{
    Constipated d;
}