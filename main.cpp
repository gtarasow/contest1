#include <iostream>

using namespace std;

long long f(long long k){
  long long l = 0, r = k, m;
  while ((r-l)>1){
    m = (l + r)/2;
    if (m*m < k) {l = m;}
        else {r = m;};
  }
  m = l;
  if (r*r<k) {m = r;}
  return (m + 1);
}

int main()
{
    long long i = 0, n, ans = 0;

    cin >> n;

    long long r = f(n);

    while ((i * i) < n){
      while (!((r*r)<(n-i*i))&&(r>0)) {r--;};
      ans = ans + r+1;
      i++;
    }

    cout << ans << endl;

    return 0;
}
