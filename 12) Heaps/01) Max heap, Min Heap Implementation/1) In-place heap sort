
//max heap

#include <iostream>

using namespace std;

void heapSort(int arr[], int n) {
    int childIndex,parentIndex;
    
    for(int i = 1;i<n;i++){
        childIndex = i;
        
        while(childIndex > 0 ){
            parentIndex = (childIndex-1)/2;
            if(arr[parentIndex] > arr[childIndex])
                swap(arr[parentIndex], arr[childIndex]);
            else
                break;
            childIndex =parentIndex;
        }
    }
    
    for(int i = n-2;i>=0;i--){
        swap(arr[i+1],arr[0]);
        parentIndex =0;
        int child1 = 2 * parentIndex + 1;
        int child2 = 2 * parentIndex + 2,minIndex;
        
        while(child1 <= i){
            minIndex = parentIndex;
            if(arr[minIndex] > arr[child1])
                minIndex = child1;
            if(child2 <= i && arr[minIndex] > arr[child2])
                minIndex = child2;
            if(minIndex == parentIndex)
            	break;
            swap(arr[minIndex], arr[parentIndex]);
            parentIndex = minIndex;
             child1 = 2 * parentIndex + 1;
        	 child2 = 2 * parentIndex + 2;
        }
    }      
    // Write your code
};

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}
