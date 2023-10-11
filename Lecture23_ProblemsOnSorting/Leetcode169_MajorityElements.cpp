#include "iostream"
#include "vector"
using namespace std;

vector<int> initialize(){
    int n;
    cout<<"\nEnter The Number Of Elements To Be Present In The Vector.\n";
    cin>>n;
    vector<int> v(n);
    cout<<"\nEnter The Elements Of The Vector.\n";
    for (int i=0; i<n; i++) cin>>v[i];
    return v;
}

int majorityElement(vector <int>& v){
    int n=v.size();
}

int main(){
    vector <int> v;
    v = initialize();
    int maj_ele = majorityElement(v);
    cout<<"\nThe Majority Element In The Vector Is : "<<maj_ele<<"\n";
    return 0;
}