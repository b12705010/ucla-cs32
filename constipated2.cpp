#include <iostream>
using namespace std;


class Stomach
{
public:
    Stomach(){
        cout << "Empty Stomach! " << endl;
    }
};

class Intestine
{
public:
    Intestine(){
        cout << "Empty Guts! \n";
    }
};

class Constipated
{
public:
    Constipated(){
        cout << "But can't poop! " << endl;
    }
private:
    Stomach tummy_;
    Intestine guts_;
};

int main()
{
    Constipated david;
} 
