#include "iostream"
#include "string"
using namespace std;

class player{

private:            // Access Specifier
    int health;
    int score;      // Data Fields Or Attributes
    string name;

public:
    player(string name, int health, int score){    //
        this -> health = health;  // This : Generic Pointer To Passed Variable Present In Parent Class.
        this -> name = name;      // Therefore, This Statement Put The Values Passed In Function To Their
        this -> score = score;    // Respective Data Fields Of The Current Object Of Parent Class.
    }

    void stats(){   // Getter Function
        cout<<"\n"<<name;
        cout<<"\n"<<score;
        cout<<"\n"<<health;
    }
};

int main(){
    // Alan : An Object Belonging To Player Class.
    player alan("Alan", 1000, 250);
    alan.stats();
    cout<<"\n\n";
}