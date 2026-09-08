# NOTEBOOK - Rating 563

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-08T13:43:42.389Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int income = 50 * n;
        int profit = (income * 30) / 100;

        cout << profit << endl;
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NOTEBOOK)