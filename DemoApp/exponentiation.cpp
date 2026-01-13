#include<iostream>
using namespace std;

long long MOD = 1e9 + 7;

long long power(long long a, long long b){
  if(b == 0) return 1;
  long long x = power(a, b/2);
  x = (x * x) % MOD;
  if(b % 2) x = (x * a) % MOD;
  return x;
}

int main(){
  int n;
  long long a, b;
  cin >> n;
  long long results[n];
  for(int i = 0; i < n; i++){
    cin >> a >> b;
    results[i] = power(a % MOD, b);
  }
  for(int i = 0; i < n; i++){
    cout << results[i] << "\n";
  }
  
  //
  return 0;
}