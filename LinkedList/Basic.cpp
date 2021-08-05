#include<bits/stdc++.h>
using namespace std ;

class Node{
    public :
     int data ;
     Node *next ;
    
    Node(int data){
        this->data = data ;
        next = NULL ;
    }
};

// Time complexity of O(n^2)
Node* takeInput(){
    int data ;
    cin >> data ;
    Node *head = NULL ;
    while(data != -1){
        Node *newNode = new Node(data) ;
        if(head == NULL){
            head = newNode;
        }
        else{
            Node *temp = head ;
            while(temp->next) temp = temp->next ;
            temp->next = newNode ;

        }
        cin >> data ;
        }
    return head ;
}

Node *takeInput2(){
    int data ;
    cin >> data ;
    Node *head = NULL ;
    Node *tail = NULL ;
    while(data != -1){
        Node *newNode = new Node(data) ;
        if(head == NULL){
            head = newNode ;
            tail = newNode ;
        }
        else{
            tail->next = newNode ;
            tail = newNode ;
        }
        cin >> data ;
    }
    return head ;
}

void print(Node *head){
    Node *temp = head ;
    while(temp){
        cout << temp->data <<" ";
        temp = temp->next ;
    }
}

int main(){
    Node *head = takeInput2();
    print(head) ;
    return 0 ; 
}