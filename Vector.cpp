// Vector.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <chrono>
#include <vector>
#include "stdafx.h"
#include "hvector.cpp"
using namespace std;
int main()
{
	auto t1 = std::chrono::high_resolution_clock::now();
	hvector<int> v;
	for (auto j = 0; j < 10000000; j++)
	{
		v.add(j);
	}
	auto t2 = std::chrono::high_resolution_clock::now();
	cout << "hvector took: "<< std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count()<< "ms"<<endl;
	t1 = std::chrono::high_resolution_clock::now();
	vector<int> k;
	for (auto j = 0; j < 10000000; j++)
	{
		k.push_back(j);
	}
	t2 = std::chrono::high_resolution_clock::now();
	cout << "vector took: "<< std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count()<< "ms"<<endl;
	char c; cin >> c;
    return 0;
}

