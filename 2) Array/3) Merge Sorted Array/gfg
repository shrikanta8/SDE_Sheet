//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

  void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int gp = ceil((float)(n + m) / 2);
            int fir,sec;
            
            //starting from gap = (n + m) / 2) till 1
            
            while(gp>0){
                fir=0;
                sec= gp;
                
                while(sec < n+m){
                    if( sec < n && arr1[fir] > arr1[sec]){  //both indices are in first array
                        swap(arr1[fir], arr1[sec]);
                    }
                    else if(fir < n && sec >= n && arr1[fir] > arr2[sec-n]){    //first is in arr1 and secon
                        swap(arr1[fir], arr2[sec-n]);
                    }
                    else if(fir >= n && sec >= n && arr2[fir-n] > arr2[sec-n]){ //both indices are in second array
                        swap(arr2[fir-n], arr2[sec-n]);
                    }
                    fir++;
                    sec++;
                } 
                if(gp==1)
                    gp=0;   //1/2 is ceil(0.5)=1 //we will get 1 again
                else{
                    gp=ceil((float) gp / 2);    //next gap
                }
            }
            // code here 
        } 
