// Remove all characters except the numeric characters from an alphanumeric string.
class Solution{
public:	
    
    bool chk(char i){
        int val=i-'0';
        if(val>=0 && val<=9){
            return true;
        }
        return false;
    }
	string removeCharacters(string S) 
	{
	    // Your code goes here
	    
	    int n=S.length();
	    for(int i=0;i<S.length();i++){
	        if(!chk(S[i])){
	            S.erase(i,1);
	            n=S.length();
	            i--;
	        }
	    }
	    
	    return S;
	}
};