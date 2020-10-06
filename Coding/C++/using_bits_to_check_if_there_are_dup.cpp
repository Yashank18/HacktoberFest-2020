#include<bits/stdc++.h>
using namespace std;
// our string contains alphabets between range 97 to 122
int main(){
    char str[20]="helloworld";
    int var=0;
    int d=1;
    int me=0;
    for(int i=0;str[i]!='\0';i++){
        int c=str[i]-97;
         var=d<<c;
        if( (me&var) !=0){
             cout<<str[i]<<" is  duplicate"<<endl;
        }
        else{
           
        
            me=me|var;
        }
    }
}
