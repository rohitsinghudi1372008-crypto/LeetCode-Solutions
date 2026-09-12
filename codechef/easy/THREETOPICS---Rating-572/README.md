# THREETOPICS - Rating 572

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-12T15:50:37.435Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	     if (c >= a && d >= b)
            cout << "POSSIBLE\n";
        else
            cout << "IMPOSSIBLE\n";
	}

}

```

---

[View on CodeChef](https://www.codechef.com/problems/THREETOPICS)