#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

//  Given an array nums of size n, return the majority element.
//  The majority element is the element that appears more than ⌊n / 2⌋ times.
//  You may assume that the majority element always exists in the array.

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
    int n=v.size(),maj=v[0];
    sort(v.begin(),v.end());
    for (int i=0,count=0; i<n; i++){
        if (v[i] == maj) count++;
        else {
            maj = v[i+1];
            count = 1;
            i++;
        }
        if (count > (n/2)) return maj;
    }
    return -1;
}

int main(){
    vector <int> v;
    v = initialize();
    int maj_ele = majorityElement(v);
    cout<<"\nThe Majority Element In The Vector Is : "<<maj_ele<<"\n";
    return 0;
}