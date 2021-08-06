#include<bits/stdc++.h>
using namespace std ;

class StackUsingArray{
    private:
     int *data;
     int nextIndex ;
     int capacity ;

    public:

    StackUsingArray(int totalSize){
        data = new int[totalSize] ;
        nextIndex = 0 ;
        capacity = totalSize ;
    }

    //return number of elements in stack
    int size(){
        return nextIndex ;
    }

    bool isEmpty(){
        return nextIndex == 0 ;       
        /*  Means as same as 
         if(nextIndex == 0) {
            return true ;
        }
        else{ 
            return false ;
        }*/
    }

    //insert element
    void push(int element){
        if(nextIndex == capacity){
            cout << "Overflow" <<"\n";
            return ;
        }
        data[nextIndex] = element ;
        nextIndex++;
    }   

    //delete element
    int pop(){
        if (isEmpty()){
            cout << "Underflow" <<"\n";
            return INT_MIN ;        //climits is used for INT_MIN or INT_MAX 
        }
        nextIndex--;
        return  data[nextIndex] ;
    }

    int top(){
        if(isEmpty()){
            cout << "Underflow" <<"\n" ;
            return INT_MIN ;
        }
        return data[nextIndex-1];
    }


};


int main(){
    StackUsingArray s1(5) ;
    cout << s1.isEmpty() <<"\n";
    cout <<s1.pop() <<"\n" ;
    s1.push(10) ;
    s1.push(20) ;
    s1.push(30) ;
    s1.push(40) ;
    cout << s1.top() <<"\n" ;
    s1.push(50) ;
    s1.push(60) ;
    cout << s1.pop() <<"\n" ;
    cout << s1.size() <<"\n" ;
    cout << s1.top() <<"\n" ;

    return 0 ;
}