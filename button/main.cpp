#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
#include <set>
#include<bitset>
#include<string>
#include<iomanip>
 
#define null -1

using namespace std;
struct arr1;
struct arr2;

struct arr1 {
	vector<arr2> arr;
	int value;
};
struct arr2 {
	vector<arr1> arr;
	int value;
};
arr2 zero2;
arr1 zero1;
vector<int> platten(arr1 A,arr2 B,int which) {
	if (which == 1) {
		vector<int> out;
		if (A.arr.size() == 0) {
			out.push_back(A.value);
			return out;
		}
		for (int i = 0; i < A.arr.size(); i++) {
			vector<int> result = platten(zero1, A.arr[i], 2);
			for (int j = 0; j < result.size(); j++)
				if (result[j]!=null) out.push_back(result[j]);
		}
		return out;
	}
	else {
		vector<int> out;
		if (B.arr.size() == 0) {
			out.push_back(B.value);
			return out;
		}
		for (int i = 0; i < B.arr.size(); i++) {
			vector<int> result = platten( B.arr[i],zero2, 1);
			for (int j = 0; j < result.size(); j++)
				if (result[j] != NULL) out.push_back(result[j]);
		}
		return out;
	}
}
int main() {
	///prepare test [0,2,[[2,3],8,100,null,[[null]]],-2]);
	arr1 input;

	arr2 variable2;
	arr1 variable1;
	arr2 variable3;
	variable2.value = 0;
	input.arr.push_back(variable2);

	variable2.value = 2;
	input.arr.push_back(variable2);



	variable3.value = 2;
	variable1.arr.push_back(variable3);
	variable3.value = 3;
	variable1.arr.push_back(variable3);

	variable2.arr.push_back(variable1);
	

	variable1.arr.clear();
	variable1.value = 8;

	variable2.arr.push_back(variable1);

	variable1.arr.clear();
	variable1.value = 100;

	variable2.arr.push_back(variable1);

	variable1.value = null;

	variable2.arr.push_back(variable1);

	variable1.arr.clear();
	variable3.value = null;
	variable1.arr.push_back(variable3);
	variable2.arr.push_back(variable1);

	input.arr.push_back(variable2);

	variable2.arr.clear();
	variable2.value = -2;
	input.arr.push_back(variable2);


	 
	vector<int> result = platten(input,zero2,1);
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << " ";

	int wait;
	cin >> wait;
	return 0;
}