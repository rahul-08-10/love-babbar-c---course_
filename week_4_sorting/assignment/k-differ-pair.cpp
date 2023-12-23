#include <bits/stdc++.h>
using namespace std;
// using two pointer approach 
int diff(vector<int>a  ,  int k){ 
    sort(a.begin() , a.end());
    set<pair<int , int >>ans;
    int i=0,j=1;
    while(i<sizeof(a)){
        int difference=a[i]-a[j];
        if(difference==k){
            cout<<i<<" "<<j<<endl;
            i++;
            j++;
        }
        if(difference>k){
            i++;
        }
        if(difference<k){
            j++;
        }
        if(i==j){
            j++;
        }
        return ans.size();
    }
}
int main(){

  vector<int> a = {3, 1, 4, 1, 5};  
  int k;
  cin>>k;
  cout<<diff(a ,  k );
  return 0;  
}  

