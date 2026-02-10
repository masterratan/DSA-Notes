// For a node at index i:
// Parent = i/2
// Left child = 2*i | Right child = 2*i + 1

// Heapify Up
// After inserting a new element, you always insert at the end of the array.
// That might break the min-heap property. So you move the element UP until the heap becomes valid again.

// Heapify Down
// After deleting the root (min element), you replace the root with the last element, 
// which may violate the heap. So you push it DOWN to its correct position.

#include <bits/stdc++.h>
using namespace std;

class MinHeap {
private:
    vector<int> arr;

public:
    MinHeap(){
        arr.push_back(-1); // waste 0th index
    }

    int top(){
        if(size() == 0){
            cout<<"Heap is empty!\n";
            return -1;
        } 
        return arr[1];
    }

    void push(int val){ // Heapify Up
        arr.push_back(val);
        int i = arr.size()-1;
        while(i>1 and arr[i] < arr[i/2]){
            swap(arr[i], arr[i/2]); // swap with parent
            i /= 2;
        }
    }

    void pop(){ // Heapify Down
        if(size() == 0) return;
        arr[1] = arr.back();
        arr.pop_back();
        int i = 1;
        while(true){
            int l = 2*i; // left child
            int r = 2*i + 1; // right child
            int smallest = i;

            if(l < arr.size() and arr[l] < arr[smallest]) smallest = l;
            if(r < arr.size() and arr[r] < arr[smallest]) smallest = r;
            
            if(smallest == i) break;
            swap(arr[i], arr[smallest]);
            i = smallest;
        }
    }

    int size(){
        return arr.size()-1;
    }

    void display(){
        for(int i=1; i<arr.size(); i++) cout<<arr[i]<<" ";
        cout<<"\n";
    }
};

int main() {
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.display();
    cout<<pq.size()<<"\n";
    pq.push(4);
    pq.push(7);
    pq.display();
    pq.pop();
    pq.pop();
    pq.display();
    cout<<pq.size()<<"\n";

    return 0;
}