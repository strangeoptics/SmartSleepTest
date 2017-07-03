#include "SleepNode.h"
using namespace std;

SleepNode::SleepNode(const int id) {
	this->id = id;
}

void SleepNode::addMessage(MyMessage &message) {
	messages.push(message);
}
