#include <map>
#include <string>
#include "SleepNode.h"
//#include "MyMessage.h"
using namespace std;

class SmartSleep {
	public:
		map<int,SleepNode> nodes;
		map<int,SleepNode>::iterator it;
		void init(string);
		bool processMessage(MyMessage &message);
		void print();
};
