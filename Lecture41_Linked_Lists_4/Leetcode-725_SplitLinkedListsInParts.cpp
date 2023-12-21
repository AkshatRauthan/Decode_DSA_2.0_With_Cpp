#include "iostream"
#include "linkedlist"
#include "vector"

vector<Node*> splitInParts(int k, Node* head){
    int size = 0;
    for(Node* temp = head; temp != nullptr; temp = temp->next, size++);
    int n = size/k, x;
    x = size - k*n;
    vector<Node*> final;
    while (size > 0 && head != nullptr){
        Node* temp = head;
        Node* temp2;
        for (int j=1; j<n; j++) head = head->next;
        size -= n;
        if (x > 0){
            head = head->next;
            size--;
            x--;
        }
        temp2 = head;
        head = head->next;
        temp2->next = nullptr;
        final.push_back(temp);
    }
    while (size != k && n==1){
        Node* temp = new Node;
        final.push_back(temp);
        k--;
    }
    return final;
}

int main(){
    LinkedList ll;
    initializeLinkedList(ll);
    int n;
    cout<<"\nEnter The Number Of Parts Into Which You Want To Split Your Linked List : \n";
    cin>>n;
    vector<Node*> final = splitInParts(n, ll.head);
    cout<<"\nThe Split Linked List Is As Follows :\n";
    for (Node* node : final){
        LinkedList t;
        t.head = node;
        t.display();
        cout<<endl;
    }
}