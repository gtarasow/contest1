#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> Q;
    int n1, n2, cur, num = 0;

    cin >> n1 >> n2;
    for (int i = 0; i < n1; i++){
        cin >> cur;
        Q.push(cur);
    }

    for (int i = 0; i < n2; i++){
        cin >> cur;
        while (!(Q.empty())&&(Q.front()<cur)) {Q.pop();};
        if (!(Q.empty())&&(Q.front()==cur)){
            num++;
            Q.pop();
        }
    }
    cout << num << endl;
    return 0;
}
