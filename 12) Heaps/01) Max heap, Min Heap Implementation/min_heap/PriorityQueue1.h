
using namespace std;
#include<vector>

class PriorityQueue{
    vector<int> pq;
    public:

    PriorityQueue(){
    }

    bool isEmpty(){
        return pq.size()==0;
    }

    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(isEmpty()){
            return 0;
        }
        return pq[0];
    }

    void insert(int element){
        pq.push_back(element);

        int childIndex = pq.size()-1;
        while(childIndex > 0){
            int parentIndex = (childIndex-1) / 2;   //to get parentIndex from childIndex 
            
            if( pq[childIndex] < pq[parentIndex] ){
                swap(pq[childIndex],pq[parentIndex]);
            }
            else{
                break;
            }
            childIndex = parentIndex;
        }
    }

    int removeMin(){
        if(isEmpty()){
            return 0;
        }

        int ans=pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();

        //down-heapify

        int parentIndex=0;
        int lChildIndex = 2*parentIndex + 1;
        int rChildIndex = 2*parentIndex + 2;

        while(lChildIndex < pq.size() ){
            int minIndex = parentIndex;
            if(pq[minIndex] > pq[lChildIndex]){
                minIndex = lChildIndex;
            } 
            if(rChildIndex < pq.size() && pq[minIndex] > pq[rChildIndex]){
                minIndex = rChildIndex;
            } 
            if(minIndex == parentIndex){
                break;
            }
            swap(pq[minIndex],pq[parentIndex]);

            parentIndex = minIndex;
            lChildIndex = 2*parentIndex + 1;
            rChildIndex = 2*parentIndex + 2;
        }
        return ans;
    }
};
