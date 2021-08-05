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

Node* takeInput(){
    int data ;
    cin >> data ;
    Node *head = NULL ;
    Node *tail = NULL ;
    while(data != -1){
        Node *newNode = new Node(data) ;
        if(head == NULL ){
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

int getCount(Node *head){
    if(head == NULL ) return 0 ;
    return 1+getCount(head->next) ;
}

Node* insertNode(Node *head,int i,int data){
    if(head == NULL) return head ;
    if(i==0){
        Node *newNode = new Node(data) ;
        newNode->next = head ;
        head = newNode ;
    }
}

int main(){
    Node *head = takeInput() ;
    cout << getCount(head) ;
    return 0 ;
}