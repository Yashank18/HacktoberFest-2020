

#include<bits/stdc++.h>
using namespace std;
void TOH(int a,int A,int B, int C){
    if(a > 0){
        TOH(a-1,A,C,B);
        cout<<A<<"->"<<C<<endl;
        TOH(a-1,B,A,C);

    }
}
int main(){
    TOH(4,1,2,3);
}
