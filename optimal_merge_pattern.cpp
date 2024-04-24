
#include <iostream>
#include<algorithm>
using namespace std;

int merge(int arr[],int n)
{
    sort(arr,arr+n);
    int totalcost=0;
    while(n>1)
    {
        int small=arr[0];
        int small1=arr[1];
        
        int mergecost=small+small1;
         totalcost +=mergecost;
    
    for (int i = 2; i < n; i++) {
            arr[i - 2] = arr[i];
        }
        n -= 1;
        arr[n - 1] = mergecost; 
    }
    return totalcost;
}

int main() {
   int arr[]={10,5,9,6,12};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"optimal solution :"<<merge(arr,n)<<endl;
    return 0;
}
