# SUGARCANE - Rating 562

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T13:37:54.388Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        if (X * Y >= A * B)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SUGARCANE)