#include "iostream"
#include "vector"
using namespace std;

//                                          Leetcode - 1052

// There is a bookstore owner that has a store open for n minutes.
// Every minute, some number of customers enter the store.
// You are given an integer array customers of length n where customers[i] is the number of the customer
// that enter at the start of the ith minute and all those customers leave at the end of that minute.
// On some minutes, the bookstore owner is grumpy. You are given a binary array grumpy
// where grumpy[i] is 1 if the bookstore owner is grumpy during the ith minute, and is 0 otherwise.
// When the bookstore owner is grumpy, the customers of that minute are not satisfied,
// otherwise, they are satisfied.
// The bookstore owner knows a secret technique to keep themselves not grumpy for "minutes"
// consecutive minutes, but can only use it once, where "minutes" is an integer.
// Return the maximum number of customers that can be satisfied throughout the day.

// Input: customers = [1,0,1,2,1,1,7,5], grumpy = [0,1,0,1,0,1,0,1], minutes = 3
// Output: 16
// Explanation: The bookstore owner keeps themselves not grumpy for the last 3 minutes.
// The maximum number of customers that can be satisfied = 1 + 1 + 1 + 1 + 7 + 5 = 16.

void initialize(vector<int> &v){
    for (int i=0; i<v.size(); i++) cin>>v[i];
}

int maxSatisfiedCustomers(vector<int>& customers, vector<int>& grumpy, int& minutes){
    int  totalSum = 0, idx = 0, currSum = 0;
    for (int i=0; i<minutes; i++){
        currSum += customers[i];
        if (grumpy[i] == 0) totalSum += customers[i];
    }
    int maxSum = currSum;
    for (int i=2, j=minutes; j < customers.size(); i++,j++){
        if (grumpy[i] == 0) totalSum += customers[i];
        currSum += customers[j] - customers[i-1];
        if (currSum > maxSum){
            maxSum = currSum;
            idx = i;
        }
    }
    for (int i=0; i<minutes; i++) if (grumpy[i+idx] == 1) totalSum += customers[i+idx];
    for (int i=0; i<minutes-1; i++) if (grumpy[customers.size()-i] == 0) totalSum += customers[customers.size()-i];
    return totalSum;
}

int main(){
    int n, minutes;
    cout<<"\nEnter The Number Of Minutes For Which The Bookstore Was Open :\n";
    cin>>n;
    vector<int> customers(n,0), grumpy(n,0);
    cout<<"\nEnter The Value Of Customers Vector : \n";
    initialize(customers);
    cout<<"\nEnter The Value Of Grumpy Vector : \n";
    initialize(grumpy);
    cout<<"\nEnter The Number Of Minutes For Which The Customers Can Be Made Happy :\n";
    cin>>minutes;
    cout<<"\nThe Maximum Satisfied Customers In The Given Day Is : \n";
    int sum = maxSatisfiedCustomers(customers,grumpy,minutes);
    cout<<sum;
    cout<<"\n\n";
    system("pause");
}