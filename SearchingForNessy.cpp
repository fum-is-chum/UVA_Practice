#include <iostream>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  int t; cin >> t;
  while(t--){
    int a,b; cin >> a >> b;
    cout << (a/3) * (b/3) << '\n';
  }
  return 0;
}