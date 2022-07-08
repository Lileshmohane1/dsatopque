//  also known as  kadane algorithm
#include<iostream>
using namespace std;
int maxi(int arr[],int n){
    //  firt we take max in which store minelement 
    int max=INT8_MIN;
    int sum=0;
    int s= 0;
    int st=0;
    int end=0;
    for (int  i = 0; i < n; i++)
    {
         //sum+=arr[i];
         sum =  sum+arr[i];
        if (max<sum)
        {
           max=sum;
           st=s;
           end=i;
        }
        if (sum<0)
        {
           sum=0;
       // when element less then zzero so it s start  with that pogition  
          s=i+1;
        }
        
    }
    return max;
}
int main(){
int arr[5]={1,2,3,-2,5};

int ma= maxi(arr,5);
cout<<ma;
return 0;
}
