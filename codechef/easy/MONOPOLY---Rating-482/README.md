# MONOPOLY - Rating 482

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Monopoly in Chefland

Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.

There are exactly $3$ companies in the market each of whose revenues are denoted by $R_1$, $R_2$ and $R_3$ respectively. A company is said to have a monopolistic advantage if its revenue is  **strictly**  greater than the sum of the revenues of its competitors.

Given the revenue of the $3$ companies, help Chef determine if any of them has a monopolistic advantage.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input containing three space separated integers $R_1$, $R_2$ and $R_3$ denoting the revenue of the three companies respectively.
### Output Format

For each test case, output $\texttt{YES}$ if any of the companies has a monopolistic advantage over its competitors, else output $\texttt{NO}$.

You may print each character of the string in uppercase or lowercase (for example, the strings $\texttt{YeS}$, $\texttt{yEs}$, $\texttt{yes}$ and $\texttt{YES}$ will all be treated as identical).

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq R_1, R_2, R_3 \leq 10$
### Sample 1:
Input
Output

```
4
1 1 1
1 2 4
2 10 3
1 2 3

```

```
No
Yes
Yes
No

```

### Explanation:

 **Test case 1:**  All the companies have equal revenue so none have a monopolistic advantage.

 **Test case 2:**  The third company has a monopolistic advantage as $1 + 2 < 4$.

 **Test case 3:**  The second company has a monopolistic advantage as $2 + 3 < 10$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-28T17:28:43.916Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int R1, R2, R3;
        cin >> R1 >> R2 >> R3;

        if (R1 > R2 + R3 || 
            R2 > R1 + R3 || 
            R3 > R1 + R2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/MONOPOLY)