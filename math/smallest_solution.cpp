#include <bits/stdc++.h>
using namespace std;

/*
smallest value x that is solution (i.e., true) for function f

time complexity: O(log(n))
*/
int smallest_solution(vector<int> & f){
	int x = -1; 
	int size = f.size();
	for (int b = size; b >= 1; b /= 2) {
		while (!f[x+b]) x += b;
	}
	return x+1;
}		
