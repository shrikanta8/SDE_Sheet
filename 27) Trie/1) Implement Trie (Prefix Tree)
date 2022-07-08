//https://leetcode.com/problems/implement-trie-prefix-tree/

struct Node{
    bool flag=false;
    Node* alpha[26];
    
    bool isPre(char ch){
        return alpha[ch-'a']!=NULL;
    }
    
    void addChar(char ch, Node* newNode){
        alpha[ch-'a']=newNode;
    }
    
    Node* nextChar(char ch){
        return alpha[ch-'a'];
    }
    
    void setEnd(){
        flag=true;
    }
    
    bool isTrue(){
        return flag;
    }
};

class Trie {
    private:
    Node *root;
    
    public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* temp = root;
        for(int i=0;i<word.length();i++){
            if(!temp->isPre(word[i])){
                temp->addChar(word[i],new Node());    
            }
            temp= temp->nextChar(word[i]);
        }
        temp->setEnd(); //word is fnished
    }
    
    bool search(string word) {
        
        Node* temp = root;
        
        for(int i=0;i<word.length();i++){
            if(!temp->isPre(word[i])) 
                return false;
            
            temp = temp->nextChar(word[i]);
        }
        
        return temp->isTrue();
    }
    
    bool startsWith(string word) {
        
        Node* temp = root;
        
        for(int i=0;i<word.length();i++){
            if(!temp->isPre(word[i])) 
                return false;
            temp = temp->nextChar(word[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
