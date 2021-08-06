#include<bits/stdc++.h>
using namespace std ;
template <typename T>

class StackUsingTemplates{
    private :
     T data* ;
     int nextIndex ;
     int capacity ;

    public :
     StackUsingTemplates(int TotalSize){
         data = new T[TotalSize] ;
         nextIndex = 0;
         capacity = TotalSize ;
     }

     int size(){
         return capacity ;
     }

     bool isEmpty(){
         return nextIndex == 0 ;
     }

     void push(T element){
         if(capacity == nextIndex){
             cout <<"Overflow" <<"\n";
             return ;
         }
         data[nextIndex] = element ;
         nextIndex++ ;
     }

     T pop(){
         if(isEmpty()){
             cout << "Underflow" <<"\n" ;
             return ;
         }
         nextIndex-- ;
         return data[nextIndex] ;
     }

     T top(){
         if(isEmpty()){
             cout <<"Underflow"<<"\n";
             return 0;
         }
         return data[nextIndex-1] ;
     }
};

int main(){

    return 0 ;
}