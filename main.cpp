#include <iostream>
#include <queue>
#include <math.h>

using namespace std;

int main()
{
    int ans = 0, cur, m=0;

    queue<int> Q;

    for (int i = 0; i < 8; i++){
        cin >> cur;
        Q.push(cur);
    }

    while (1){
        cin >> cur;
        if (cur < 0) break;

        m = max(m, Q.front());
        ans = max(ans, cur*m);

        Q.pop();
        Q.push(cur);
    }

    cout << ans << endl;

    return 0;
}
