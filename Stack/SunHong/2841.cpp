2841번: 외계인의 기타연주
==================

result
------


source
------
```c++
#include <iostream>
#include <stack>

using namespace std;

stack<int> s[7];

int main() {
    int N, P, line, prat, cnt=0;
    cin >> N >> P;
    for (int i=0; i<7; i++) s[i].push(0);
    // empty 방지를 위해 초기화.
    
    while (N--) {
        cin >> line >> prat;
        
        while (s[line].top() > prat) {
            s[line].pop();
            cnt++;
        }
        if (s[line].top() < prat) {
            s[line].push(prat);
            cnt++;
        }
        else if (s[line].top() == prat) {
            continue;
        }
    }
    cout << cnt << endl;
}



```

comment
-----
