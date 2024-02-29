#include <iostream>
using namespace std;
int sum,sub,result;
int a, b;
int *pa = &a, *pb = &b;
   void update(int *a,int *b) {
     sum = *pa + *pb;  
     sub = *pa - *pb; 
     result=abs(sub);
}

int main() {
    
   cin>>a>>b;
   update(pa, pb);
   cout<<sum<<endl;
   cout<<result;
  return 0;
}
