#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include "SleepNode.h"
using namespace std;

int main() {

	cout << "smartsleep hast started\n";

	map<int,SleepNode> sleepNodes;
	ifstream cfgfile("nodes_smartsleep.cfg");
	string line;
	while(getline(cfgfile, line)) {
		int value;
		istringstream(line) >> value;
		SleepNode snode(value);
		sleepNodes.insert(make_pair(value, snode));
		SleepNode n = sleepNodes.find(value)->second;
		cout << n.id << "\n";
	}


	return 0;
}
