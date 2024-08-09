#include <iostream>
using namespace std;

class Constipated
{
public:
    Constipated(){
        cout << "Build!!" << endl;
    }
    void hello(){
        cout << "Hi! I'm " << name_ << "!\n" ;
        cout << "I haven't pooped in " << days_ << " days !\n";
    }
private:
    string name_;
    int days_;
};

int main()
{
    Constipated d;
    Constipated arr[10];
    
}