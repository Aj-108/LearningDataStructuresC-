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


Node *deleteNode(Node *head,int i){
    Node *temp = head ;
    if(i==0){
        head = head->next ;
        delete temp ;
        return head ;
    }
    int n = 0 ;
    while( n < i-1){
        temp = temp->next ;
        n++ ;
    }

    Node *a = temp->next ;
    temp->next = temp->next->next ;
    delete a;
    return head ;
}

void print(Node *head){
    Node *temp = head ;
    while(temp){
        cout << temp->data << " " ;
        temp = temp->next ;
    }
}

int main(){
    Node *head = takeInput();
    head = deleteNode(head,2);
    print(head); 

    return 0 ;
}