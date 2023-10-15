#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

// Given An Array With N Distinct Elements Convert The Given Array To A Form Where All Elements Are in Range From 1
// To N. The Order Of Elements Is The Same, i.e. 1 Is Placed In The Place Of The Smallest Element, 2 Is Placed For
// The Second Minimum Element,..... N Is Placed For The Largest Element.

// Sample Input :-  19, 12, 23, 8, 16
// Desired Output :-  3, 1, 4, 0, 2

vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

vector<int> replaceElements(vector <int>& v){
    vector<int> v1;
    return v;
}

int main(){
    vector <int> v;
    v = initialize();
    vector<int> v1 = replaceElements(v);
    cout<<"\nThe Vector After The Required Changes Is As Follows :- : ";
    for (int i=0; i<v1.size(); i++) cout<<v1[i]<< "  ";
    cout<<"\n\n";
    system("pause");
    return 0;
}