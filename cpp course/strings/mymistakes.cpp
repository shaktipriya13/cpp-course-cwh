//silly mistakes i did:
1. used || instead of && in joining conditions:
if(s[i]!='a'|| s[i]!='e'|| s[i]!='i'|| s[i]!='o'|| s[i]!='u'||s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U'){
                s.erase(i,1);
                i--;
                n--;
            }

..here && has to be used

2.intialize an integer array having only zeros:
int arr[25]={0};