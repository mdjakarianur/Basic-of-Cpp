/*
To solve this problem, we can observe that the number of nodes at each depth follows a
geometric progression with a common ratio of 3. Specifically, the number of nodes at depth
can be calculated as 3^D.*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
int N;
cin>>N;
if(N==0){
    cout<<"1"<<endl;
    return 0;
}
long long a1=3, r=3;
long long totalNodes = (r*(pow(r,N)-1)/(r-1))+1;
cout<<totalNodes <<endl;
return 0;
}

