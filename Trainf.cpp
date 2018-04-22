#include "trainf.h"

void ConductorZ::MoveTrain(stack<int> k[], vector<int> in, int numstack, int numtrain){
	int MAX = numtrain; //max number of trains
	int MIN = 1; //will act as a search value, assuming the first train will always be TRAIN 1
	for (int i = 0; i < MAX; ++i) {
		if (in[i] == MIN) { //moves cars directly to output if it is equal to the search value
			cout << "Move car " << in[i] << " from input track to output track." << endl;
			++MIN; //increments to the next car
			goOut(k, in[i], numstack, MIN); //begin to search through holding tracks
		}
		else {// no solution
			if (!Holdit(k, in[i], numstack)) { //calls hold function tries to put the car into a holding track if possible, else no solution
				cout << "No solution." << endl;
				break;
			}
		}
	}
}
bool ConductorZ::Holdit(stack<int> k[], int current, int numstack){
	for (int i = 0;i < numstack; ++i) {
		if (k[i].empty() || (!k[i].empty() && k[i].top() > current)) { //checks if track is empty, if not, checks if the front of the input track is of lower value
			cout << "Move car " << current << " from input track to holding track " << i + 1 << "." << endl;
			k[i].push(current);
			return true; 
		}
	}
	return false; //flags for MoveTrain()
}

void ConductorZ::goOut(stack<int> k[], int current, int numstack, int& min){
	for (int j = 0;j < numstack; ++j) {
		if (!k[j].empty() && k[j].top() == min) { //checks if holding track is empty and if the top of the holding track is equal to the search value
			cout << "Move car " << k[j].top() << " from holding track " << j + 1 << " to output track." << endl;
			k[j].pop();
			++min; //increments search value
			j=-1; //finds the next car from the first holding track
		}
	}
}



