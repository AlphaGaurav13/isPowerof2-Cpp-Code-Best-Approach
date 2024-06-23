#include<iostream>
#include<math.h>
using namespace std;

int main() {

  int n;

  cin >> n;

  int ans = 0;
  int i = 0;
  while( n != 0) {
    int bit = n & 1;
    ans = (bit * pow(10, i)) + ans;
    n = n >> 1;
    i++;
  }
  int z = ans;
  int sum = 0;
  while(ans != 0) {
    int digit = ans % 10;
    sum = digit;
    ans = ans / 10;
  }
  
  cout << z << endl;
  cout << sum << endl;
  if(sum == 1) {
    cout << "Yes it is the Power of 2! " << endl;
  }else{
    cout << "No it is not the Power of 2!" << endl;
  }
  return 0;
}
