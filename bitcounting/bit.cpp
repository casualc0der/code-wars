#include <bits/stdc++.h>

using namespace std;

void countBits(unsigned long long n){
  auto a = vector<int>();
for(int i = 0; n > 0; i++) {
  a.push_back(n % 2);
  n= n/2;
}

int answer = 0;

for(int x : a )
  answer += x;

return answer;
}



int main (){
countBits(26);

}