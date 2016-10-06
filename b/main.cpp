#include <iostream>
#include <string>

using namespace std;

void gray(string/*, char*/);
void grayreverse(string/*, char*/);
int n;
int main()
{
    cin >> n;
    gray("");
    return 0;
}

void gray(string s){
    if (s.length() == n) {cout << s << endl;}
    else{
        gray(s+'0');
        grayreverse(s+'1');
    }
}

void grayreverse(string s){
    if (s.length() == n) {cout << s << endl;}
    else{
        gray(s+'1');
        grayreverse(s+'0');
    }
}
