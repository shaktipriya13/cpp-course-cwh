#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){ //i=0;i=9
        temp.push_back(arr[right]);
        right++;
    }
    //keeping them back to original array
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergeSort(vector<int> &arr,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
int main(){

    //merge sort
    /*
    pehla divide kro subarrays me ..untilu get base case of single elements..then start merging them..until finally u get a sorted array...how to merge ..compare corresponding elements of divided arrays ...if elements are left on either half then insert the left elements into the temp array
    ....then copy those elements into the temp arrays and finnally greturn back to original list 
    */
   vector<int>a={2,1,3,9,3,0,4};
   mergeSort(a,0,6);
   for(int i=0;i<a.size();i++){
    cout<<a[i]<<' ';
   }
    return 0;
}