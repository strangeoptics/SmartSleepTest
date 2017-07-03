#include <queue>
#include "MyMessage.h"
using namespace std;

class SleepNode {
	public :
		int id;
		queue<MyMessage> messages;
		SleepNode(const int id);
		void addMessage(MyMessage &message);
}; 
