#include<iostream>
using namespace std;

long long MOD = 1e9 + 7;

long long power(long long a, long long b, long long c){
  if(c == 0) return 1;
  long long x = power(a, b  , c/2);
  x = (x * x) % MOD;
  
  if(c % 2){ 
    x = (x * a) % MOD;
    
  }
  return x;
}

int main(){
  int n;
  long long a, b, c;
  cin >> n;
  long long results[n];
  for(int i = 0; i < n; i++){
    cin >> a >> b >> c;
    results[i] = power(a % MOD, b % MOD, c);
  }
  for(int i = 0; i < n; i++){
    cout << results[i] << "\n";
  }
  

  return 0;
}