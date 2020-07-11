#include <bits/stdc++.h>

using namespace std;
vector<string> solve(string y) {
auto vec = vector<string>();
for(int i = 0; i < y.length(); i++){
  if(y[i] == ' '){
    continue;
  }
  else {
    y[i] = toupper(y[i]);
    vec.push_back(y);
    y[i] = tolower(y[i]);

  }
} 

for(string s : vec)
  cout << s << endl;

  return vec;
}

int main(){

solve(" gap ");

}