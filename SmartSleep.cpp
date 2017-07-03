#include <iostream>
#include <fstream>
#include <sstream>
#include "SmartSleep.h"
using namespace std; 


void SmartSleep::init(string filename) {
	ifstream cfgfile(filename.c_str());
	string line;
	while(getline(cfgfile, line)) {
		int value;
		istringstream(line) >> value;
		SleepNode snode(value);
		nodes.insert(make_pair(value, snode));
		SleepNode n = nodes.find(value)->second;
		cout << n.id << "\n";
	}

}


bool SmartSleep::processMessage(MyMessage &message) {
	cout << "processing message from sensor " << unsigned(message.sensor) << "\n";

	it = nodes.find(message.sensor);
	if(it != nodes.end()) {
		cout << "sensor " << unsigned(message.sensor) << " is a sleeping node\n";
		SleepNode& n = it->second;
		n.addMessage(message);
		return true;
	}

	return false;
}

void SmartSleep::print() {
	map<int,SleepNode>::iterator it;
	for(it = nodes.begin(); it != nodes.end(); it++) {
		SleepNode& n = it->second;
		cout << n.id << "   with " << n.messages.size() << "\n";
		while(!n.messages.empty()) {
			MyMessage m = n.messages.front();
			n.messages.pop();
			cout << "   sensor:" << unsigned(m.sensor) << "   type:" << unsigned(m.type) << "\n";
		}
	}
}
