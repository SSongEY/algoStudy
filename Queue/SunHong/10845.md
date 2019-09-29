10845번: 프린터 큐
==================

result
------


source
------
```c++
#include <iostream>
#include <queue>

using namespace std;

int main () {
    int N;
    cin >> N;
    queue<int> q;
    
    for (int i=1; i<=N; i++) q.push(i);
    
    while (q.size() != 1) {
        q.pop();
        if (q.size() == 1) break;
        int front = q.front();
        q.pop();
        q.push(front);
    }
    cout << q.front() << endl;
}


```

comment
-----
