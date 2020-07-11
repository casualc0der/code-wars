#include <bits/stdc++.h>

using namespace std;

int digital_root(int n)
{
  //base case. Return sum if less than 10, i.e single digit
  if (n < 10)
  {
    return n;
  }
  // create sum to accumulate sum of digits
  int sum = 0;

  
  while (n > 0)
  {
    //add the smallest number to the sum, and then 
    //divide n by 10 each time.
    //because we are using an int, any remainders will get
    // truncated
    sum += n % 10;
    n = n / 10;
  }
  // recursively call the digital root function until
  // the sum is a single digit.
  return digital_root(sum);
}
//or, use the below lol
// int digital_root(int Z) {
//     return --Z % 9 + 1;
// }

int main()
{
  int z;
  z = digital_root(195);
  cout << z << endl;
}