// Trapping Rain Water
// here we calculate for each building maxm values from both lft and right and then take the maxm of it

// if u encounter a greater building than before then u will hv to start move from the other side, as soon as the 2 pointers meet we will reach the end of our algorithm

#include<bits/stdc++.h>

using namespace std;

int main() {

}
// using 2 pointer mthd:
class Solution {
    public:
      int maxWater(vector<int> &a){
            int n=a.size();
            int lft=0,rgt=n-1;

            int lftMax=0,rgtMax=0;
            int water=0;

            while (lft<rgt)
            {
                if(a[lft]<=a[rgt]){
                    if(a[lft]>=lftMax){
                        lftMax=a[lft];
                    }
                    else{
                        water+=lftMax-a[lft];
                    }
                    lft++;
                }
                else{
                    if(a[rgt]>=rgtMax){
                        rgtMax=a[rgt];
                    }
                    else{
                        water+=(rgtMax-a[rgt]);
                    }
                    rgt--;
                }
            }
            return water;
      }
  };
  