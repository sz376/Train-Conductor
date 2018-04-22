#include "trainf.h"

//main

int main() {

	const int maxHolding = 10;
	stack<int> t[maxHolding];
	int numTrains;
	int holdingTracks;
	/*int numTrains = 9;*/
	/*int holdingTracks = 3;*/
	/*vector<int> inputTrack{ 3,6,9,2,4,7,1,8,5 };*/
	vector<int> inputTrack{};
	cout << "Enter number of cars: ";
	cin >> numTrains;
	cout << "Enter number of  holding tracks: ";
	cin >> holdingTracks;
	cout << "Enter car sequence on input track: ";
	for (int i = 0; i < numTrains; ++i) { //vector initialization
		int input;
		cin >> input;
		inputTrack.push_back(input);
	}
	ConductorZ::MoveTrain(t, inputTrack, holdingTracks, numTrains);

}
