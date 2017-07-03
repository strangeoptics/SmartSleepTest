#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
//#include "SleepNode.h"
#include "SmartSleep.h"
//#include "MyMessage.h"
using namespace std;

int main() {
	
	cout << "smartsleep hast started\n";

	SmartSleep ss;

	ss.init("nodes_smartsleep.cfg");

	MyMessage m0 = MyMessage(22, 0);
	ss.processMessage(m0);
	MyMessage m1 = MyMessage(22, 1);
	ss.processMessage(m1);

	ss.print();

	return 0;
}
