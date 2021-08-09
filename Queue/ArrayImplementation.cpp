#include<bits/stdc++.h>
using namespace std ;
template <typename t>

class ArrayQueue{
    private:
     t *data ;
     int frontIndex ;
     int nextIndex ;
     int capacity ;
     int smallSize;

    public :
     ArrayQueue(int totalSize){
         data = new t[totalSize] ;
         frontIndex = -1 ;
         nextIndex = 0 ;
         capacity = totalSize ; 
         smallSize = 0 ;
     }

     int size(){
         return smallSize ;
     } 
     
     bool isEmpty(){
         return smallSize == 0 ;
     }

     void enqueue(int element){
         if(smallSize == capacity){
             cout << "Overflow" <<"\n" ;
             return ;
         }
         if(firstIndex == -1 ) firstIndex= 0 ;

         
         data[nextIndex] = element ;
         nextIndex = (nextIndex+1)%capacity ;
         smallSize++ ;
     }

     t dequeue(){
         if(isEmpty()){
             cout << "Underflow" <<"\n" ;
             return 0 ;
         }
         t ans = data[frontIndex] ;
         frontIndex = (frontIndex+1)%capacity ;
         smallSize-- ;
         if(size == 0){
             frontIndex = -1 ;
             nextIndex = 0 ;
         } 
         return ans ;
     }

     t front(){
         if(isEmpty()){
             cout << "Underflow" <<"\n";
             return 0 ;   
         }
            
         else return data[frontIndex] ;
     }
};

int main(){

    return 0 ;
}