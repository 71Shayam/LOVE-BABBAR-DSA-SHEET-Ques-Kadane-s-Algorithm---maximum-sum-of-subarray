#include <iostream>
using namespace std ;

int maxSumSubArray(int arr[],int size){
    int maxSum=0 ;
    int curSum=0 ;
    for(int i=0; i<size;i++){
        curSum+=arr[i] ;
        if(curSum>maxSum){
            maxSum=curSum ;
        }
        if(curSum<0){
            curSum=0;
        }
    }
    return maxSum ;
}
int main()
{
    int arr[]={-5,4,6,-3,4,-1};
    int n=sizeof(arr)/sizeof(int);
    int ans=maxSumSubArray(arr,n);
    cout<<"maximum sum of contigious subarray is:"<<ans ;
    return 0 ;

}

