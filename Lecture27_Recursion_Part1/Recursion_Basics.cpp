#include "iostream"
using namespace std;

// Recursion Is Simply A Replacement Of Hectic And Lengthy Loops.
// Recursion ==>> Problem = Something + Sub-Problem.

int fun(int n){
    cout<<n<<"\n";
    if (n) return 0;
    else return fun (n-1);
}

int main(){
    int n;
    cout<<"\nEnter The Value Of n :-\n";
    cin>>n;
    fun(n);
}