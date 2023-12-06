#include "iostream"
#include "stack"
using namespace std;

// Stacks:-
//  a) Elements Can Only Be Inserted On The Top Of Stack.
//  b) At One Time, Only The Top-Most Element Of The Stack Can Be Accessed.
//  c) Deletion Of Element Can Only Take Place With The Top-Most Element.

// Due To Their Nature Stacks Are Also Called LIFO Or FILO :-
// Last In First Out : As The Last Inserted Element Is The One Which Is Accessed First.
// First In Last Out : As The First Inserted Element Is The One Which Is Accessed Last.

// Difference Between Stacks And Linked List :-

int main(){
    stack<int> st;
    st.push(100);
    cout<<st.size();
    cout<<"\n\n";
    system("pause");
}