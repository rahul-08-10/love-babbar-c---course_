// #include<iostream>
// using namespace std;
// enum direction {East, West, North, South}dir;
// int main()
// {
//    dir = West;
//    cout<<dir;
//    return 0;
// }


















#include <iostream>
using namespace std;
enum direction {East=10, West=11, North=12, South=13};
int main(){
   direction dir;
   dir = South;
   cout<<dir<<"\n";
dir = North;
   cout<<dir;
   dir = East;
   cout<<dir;
   return 0;
}
