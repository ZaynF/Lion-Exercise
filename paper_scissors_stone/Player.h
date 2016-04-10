#include <iostream>
#include <string>

using namespace std;

class Player{
public:
	Player();
	static void printName(Player & p);
	void input(int hand);
	friend void judge(Player & a, Player & b);
	
private:
	int id;
	string name;
	int hand;
	bool inputed;
};
