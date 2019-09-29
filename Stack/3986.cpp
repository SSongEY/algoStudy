2164번: 좋은 단어
==================

result
------


source
------
```c++
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;
    int answer = N;
    string str;
    
    while (N--) {
        stack<char> s;
        cin >> str;
        char cur, st;
        
        for (int i=0; i<str.length(); i++) {
            cur = str[i];
            // str[i]의 타입은 string이 아닌 char.
            
            if (!s.empty()) {
                st = s.top();
                if (cur == st) s.pop();
                else s.push(cur);
            }
            
            else s.push(cur);
        }
        
        if (!s.empty()) answer--;
    }
    cout << answer << endl;
}


```

comment
-----
