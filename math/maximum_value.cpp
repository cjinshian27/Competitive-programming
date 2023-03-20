#include <bits/stdc++.h>
using namespace std;

/*
maximum value x of function f

time complexity: O(log(n))
*/
int maximum_value(vector<int> & f){
	int x = -1;
	int size = f.size();
	for(int b = size; b >= 1; b = b / 2){
		while(f[x + b] <= f[x + b + 1]) x = x + b;
	}
	return x + 1;
}