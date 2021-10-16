# Competitive Programming
 
## CPP - Tricks

Header
```cpp
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
using namespace std;
```

Include the STL - (⚠️ it's an internal GCC header file):

 `#include <bits/stdc++.h>`

Fast I/O

 ```cpp
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
 ```

Read line scanf/fgets
```cpp
scanf(" %[^\n]",line);
fgets(line, sizeof(line), stdin);
```

Debug
```cpp
#define debug freopen("in.in","r",stdin);freopen("out.out","w",stdout);
```


## Primes
```cpp
bitset<1000000100> prime;
void sieve(int n) {
  for (long long p = 2; p * p <= n; p++) { 
	if (prime[p] == 0) { 
	  for (long long i = p * p; i <= n; i += p) 
		prime[i] = 1; 
	} 
  } 
  prime[1] = prime[0] = 1;
} 
```

## ASCII

* lower to upper -32