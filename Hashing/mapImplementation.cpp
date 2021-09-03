#include<bits/stdc++.h>
using namespace std ;

template<typename V> 
class mapNode{
    public :
     string key ;
     V value ;
     mapNode * next ;

     mapNode(string key , V value){
         this->key = key ;
         this->value = value ;
         next = NULL ;
     }

     ~mapNode(){
         delete next ;
     }
};


template <typename V>
class ourmap{
    mapNode<V>** bucket ;
    int count ;
    int numBucket ;
    
    public :
     ourmap(){
         count = 0 ;
         numBucket = 5 ;
         bucket = new mapNode<V>* [numBucket] ;
         for(int i=0;i<numBucket;i++)[
             bucket[i] = NULL ;
         ]
     }

     ~ourmap(){
         for(int i=0;i<numBucket;i++){
             delete bucket[i] ;
         }
         delete [] bucket ;
     }

    private:
     int getBucketIndex(string key){
         int hashCode = 0 ;

         int currCoeff = 1 ;
         for(int i=key.length()-1;i>=0;i--){
             hashCode += key[i] * currCoeff ;
             hashCode  %= numBucket ;
             currCoeff *= 37 ;
             currCoeff %= numBucket ;
         }
         return hashCode % numBucket ;
     }

    public:
     int size(){
         return count ;
     }

     void insert(string key , V value ){
         int bucketIndex = getBucketIndex(value) ;
         mapNode<V>* head = bucket[bucketIndex] ;
         while(head != NULL){
             if(head->key == key){
                 head->value = value ;
                 return ;
             }
             head = head->next ;
         }
         head = bucket[bucketIndex] ;
         mapNode<V>* newNode = new mapNode<V>* (key,value) ;
         newNode->next = head ;
         bucket[bucketIndex] = newNode ;
         count ++;
     }

     V remove(string key){
         int bucketIndex = getBucketIndex(key) ;
         mapNode<V> *head = bucket[bucketIndex] ;
         mapNode<V *prev = NULL ;
         while(head){
             if(head->key == key ) {
                if(prev){
                    bucket[bucketIndex] = prev ;
                }
                else{
                    prev->next = head->next ;
                }
                V value = head->value ;
                head->next = NULL ;
                delete head ;
                count -- ;
                return value ;
             }
             prev = head ;
             head= head->next ;
         }
         return 0 ;
     }

     V getValue(string key){
         int bucketIndex = getBucketIndex(key) ;
         mapNode<V> *head = bucket[bucketIndex] ;
         while(head){
             if(head->key == key){
                 return head->value ;
             }
             head= head->next ;
         }
         return 0 ;
     }
};

int main(){

    return  0 ;
}