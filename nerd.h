class Nerd
{
public:
    Nerd(int stink, int IQ){
        myStinkiness = stink;
        myIQ = IQ;
    }
    void study(int hours){
        myStinkiness += 3 * hours;
        myIQ *= 1.01;
    }
    
    int getStink(){
        return myStinkiness; 
    }
private:
    int myStinkiness, myIQ;
};