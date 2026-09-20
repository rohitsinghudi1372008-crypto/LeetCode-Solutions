# MAXTASTE - Rating 622

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-20T10:27:46.644Z  

```c_cpp
#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << max(a, max(b, c)) << endl;
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/MAXTASTE)