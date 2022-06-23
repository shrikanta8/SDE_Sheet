//https://practice.geeksforgeeks.org/problems/power-set4302/1/#
    
    vector<string> AllPossibleStrings(string s){
		    int n =s.length();
		    vector<string> ans;
		    string str;
        
        //power-set will have 2^n values
        
		    for(int i=1;i<pow(2,n);i++){  //start from i=0 for empty string
		        str="";
		        for(int j=0;j<n;j++){
		            if(i & (1<<j) )   //finding set bits
		                str += s[j];
		        }
		        ans.emplace_back(str);
		    }
		    // Code here
		    //sort(ans.begin(), ans.end());
		    return ans;
		}
    
    
    //input: abc
    //output:
    a
    b
    ab
    c
    ac
    bc
    abc
