#include<bits/stdc++.h>
using namespace std ;
template <typename t>


class StackDynamic{
    private :
     t *data ;
     int nextIndex ;
     int capacity ;

    public :
     StackDynamic(){
         data = new t [4];
         nextIndex = 0 ;
         capacity = 4 ;
     }

     bool isEmpty(){
         return nextIndex == 0 ; 
     }

    int size(){
        return nextIndex ;
    }

    void push(t element){
        if(nextIndex == capacity){
            t *newData = new t[capacity*2] ;
            for(int i=0 ; i<capacity;i++){
                newData[i] = data[i] ;
            }
            capacity *= 2;
            delete [] data ;
            data = newData ;
        }
        data[nextIndex] = element ;
        nextIndex++ ; 
    }

    int pop(){
        if(isEmpty){
            cout << "Stack Underflow" <<"\n" ;
            return 0 ;
        }
        nextIndex -- ;
        return data[nextIndex] ;
    }

    int top(){
        return data[nextIndex-1] ;
    }

};

int main(){

    return 0 ;
}