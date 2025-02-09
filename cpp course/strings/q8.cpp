// Given a string consisting of lowercase english alphabets, reverse only the vowels present in it and print the resulting string.
/*Input:
S = "geeksforgeeks"
Output: geeksforgeeks
Explanation: The vowels are: e, e, o, e, e
Reverse of these is also e, e, o, e, e.
*/


string modify (string s)
        {
            //code here.
            int l=s.size(); //meayl====output:maeyl
            int i=0,j=l-1;
            while(i<j){
                if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') && (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')){
                        swap(s[i++],s[j--]);
                }
                else{
                    if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')){
                        i++;
                    }
                    if(!(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')){
                        j--;
                    }
                }
            }
            return s;
        }