#pragma once
#include <stack>
#include <iostream>
#include <vector>
using namespace std;

#ifndef TRAINF_H
#define TRAINF_H

class ConductorZ {
public:
	static void MoveTrain(stack<int>t[], vector<int> in, int numstack, int numtrain); // main algorithm
	static bool Holdit(stack<int> t[], int n, int numstack); // move cars from input track to holding track
	static void goOut(stack<int> t[], int n, int numstack, int& min); // move cars from holding track to output track
private:

};
#endif
