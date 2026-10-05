# BLACKJACK - Rating 679

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T14:09:11.699Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << x * y + ((x - 1) / 3) * z << endl;

    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BLACKJACK)