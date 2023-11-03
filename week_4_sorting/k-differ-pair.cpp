#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// using two pointer approach 
int diff(vector<int>a  ,  int k){ 
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
    }
}
int main(){

  vector<int> a = {3, 1, 4, 2, 5};  
  sort(a.begin(), a.end());  
  cout<<"\nAfter sorting:  ";  
  for_each(a.begin(),a.end(), [](int x) {  
    cout << x << " ";  
  }); 
  int k;
  cin>>k;
  diff(a ,  k );
  return 0;  
}  

