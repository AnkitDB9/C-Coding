#include <iostream>

using namespace std;
bool fun(string s,int start,int end){
   if(start >= end){
      return true;
   }
   if(s[start]!=s[end]){
      return false;
   }
   return fun(s,start+1,end-1);
}
int main()
{
   string s="abma";
    cout<<fun(s,0,3);
    return 0;
}
