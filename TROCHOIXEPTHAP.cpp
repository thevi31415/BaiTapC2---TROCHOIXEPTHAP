
#include <iostream>
using namespace std;
void xepthap(int n, int k);
int main()
{
    int n, k;
    cin >> n >> k;
    xepthap(n, k);
}
void xepthap(int n, int k) {
    int sl =0;
    int t = 0;
    for (int i = 1; i <= n; i++)
    {
        sl = sl + i;
    }
    for (int i = 1; k > 0; i++)
    {
        k = k - i;
        if (k >= 0){
            t = t + 1;
        }
    }
    cout << sl << " ";
    cout << t;
  
}
