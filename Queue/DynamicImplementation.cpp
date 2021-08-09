#include<bits/stdc++.h>
using namespace std ;
template <typename T>

class DynamicStack{
    private :
     T *data;
     int nextIndex ;
     int firstIndex ;
     int size ;
     int capacity ;

    public :
     DynamicStack(){
         data = new T[4] ;
         capacity = 4 ;
         size = 0 ;
         nextIndex = 0 ;
         firstIndex = 0 ;
     }

     void getSize(){
         return size ;
     }
     bool empty(){
         return size == 0 ;
     }

     void enqueue(int element ){
         if(size == capacity){
            T newData = new T [capacity *2];
            int j =0 ;
            for(int i=firstIndex;i<capacity;i++,j++){
                newData[j] = data[i] ;
            }
            for(int i=0 ; i<firstIndex ; i++,j++){
                newData[j] = data[i] ;
            }
            delelte data ;
            data = newData ;
            firstIndex = 0 ;
            nextIndex = capacity ;
            capacity *= 2;
         }
         if(firstIndex == -1) firstIndex = 0 ;

         data[firstIndex] element ;
         nextIndex = (nextIndex+1)%capacity ;
         size++ ;
     }

     int dequeue(){
         if(empty()){
             cout << "Underflow " <<"\n" ;
             return 0 ;
         }
         T ans = data[firstIndex] ;
         firstIndex = (firstIndex+1)%capacity ;
         size -- ;
         if(size == 0){
             firstIndex = -1 ;
             nextIndex = 0 ;
         }

         return ans ;
     }
     
     int front(){
         if(empty()){
             cout << "Underflow " <<"\n" ;
             return 0 ;
         }
         return data[firstIndex] ;
     }
};

int main(){

    return 0 ;
}