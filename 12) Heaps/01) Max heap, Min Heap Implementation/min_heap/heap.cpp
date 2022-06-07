//A) complete binary tree(CBT): tree last level can be incomplete but the last level should be filled in continuous manner
//B) heap order property: 
   //     B)1)minHeap - the root should be less than both it's childs
     //   B)2)max heap - the root should be greater than both it's childs


//minHeap code
#include<bits/stdc++.h>
using namespace std;
#include"PriorityQueue1.h"
int main(){
    PriorityQueue p;

    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(4);
    p.insert(17);
    p.insert(21);
    p.insert(67);

    cout<< "size:"<<p.getSize() <<endl;
    cout<< "min element :"<<p.getMin() <<endl;

    while(!p.isEmpty()){
        cout<<p.removeMin()<<" is removed"<<endl;
    }

}
