// Given a alphanumeric string S, extract maximum numeric value from S.
int extractMaximum(string s) 
    { 
        //code here.
        int n=s.size(),cur=0,maxi=-1;
        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                cur=cur*10+(s[i]-'0');
                maxi=max(maxi,cur);
            }
            else{
                cur=0;
            }
        }
        return maxi;
    } 