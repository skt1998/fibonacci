#include <iostream>
using namespace std;
 
 int main(){
   int n; 
   cin>>n; 
   int f1,f2,next;
   f1 = 0;
   f2 = 1;
   cout<<f1<<","<<f2<<",";
for(int i = 0; i<= n; i++){
   next = f1+f2;
   cout<<next<<",";
   f1 = f2;
   f2 = next;
}
   
 }