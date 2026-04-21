#include<iostream>
using namespace std;

class MaxHeap{
    public:
    int *arr;
    int index;
    int size;
//    index: it is pointing to the index where next element will be inserted: (current size of your heap)
    MaxHeap(int n){
        arr = new int[n];
        size = n;
        index = 0;
    }

    void insert(int value){
        // heap overflow
        if(index==size){
            cout<<"Heap is Overflow\n";
            return;
        }

        

        if(index==0){
            arr[index] = value;
            cout<<arr[index]<<" element inserted into maxheap\n";
            index++;
            return;
        }
        

        arr[index] = value;
        int i = index;
        index++;

        while(i>0 && arr[i] > arr[(i-1)/2]){
            swap(arr[i],arr[(i-1)/2]);
            i = (i-1)/2;
        }

        cout<<arr[i]<<" element inserted into maxheap\n";

    }

    void Heapify(int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;

        if(left<index && arr[largest]< arr[left]){
            largest = left;
        }

        if(right<index && arr[largest]< arr[right]){
            largest = right;
        }

        if(largest!=i){
            swap(arr[largest],arr[i]);
            Heapify(largest);
        }


    }

   void deleteHeap(){
    //  heap is empty
      if(index==0){
        cout<<"Heap underflow\n";
        return;
      }

      if(index==1){
        cout<<arr[0]<<" delete the maxheap element\n";
        index--;
        return;
      }


      cout<<arr[0]<<" delete the maxheap element\n";
      arr[0] = arr[index-1];
      index--;

      Heapify(0);
   }

    void printHeap(){
        for(int i=0;i<index;i++){
            cout<<arr[i]<<" ";
        }
    }
};



int main(){
   MaxHeap h1(5);
   h1.insert(10);
   h1.insert(20);
   h1.insert(30);
   h1.insert(5);
   h1.insert(90);
   h1.deleteHeap();
   h1.deleteHeap();
   h1.printHeap();

   return 0;
};