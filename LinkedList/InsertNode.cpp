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

Node *insertNode (Node *head,int i,int data){
    Node *temp = head ;
    Node *newNode = new Node(data) ;
    if( i == 0){
        head = newNode ;
        head->next = temp ;
        return head ;
    }
    int n = 0 ;
    while(temp!=NULL && n<i-1){
        temp = temp->next ;
        n++ ;
    } 

    if(temp!=NULL){
        newNode->next = temp->next ;
        temp->next = newNode ;
    }

    return head ;
}

Node *takeInput(){
    int data ;
    cin >> data ;
    Node *head = NULL ;
    Node *tail = NULL ;
    while(data!=-1){
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
        cout << temp->data <<" " ;
        temp = temp->next ;
    }
}
int main(){
    Node *head = takeInput() ;
    head = insertNode(head,2,60) ;
    print(head) ;

    return 0 ;
}