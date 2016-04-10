#include "Player.h"

Player::Player():inputed(false){
	static int playerCount = 1;
	cout << "Player " << playerCount <<" input name: ";
	cin >> name;
	id = playerCount++;
}

void Player::printName(Player & p){
	cout << "Player "<< p.id <<" : " << p.name;
}

void Player::input(int hand){
	this->hand = hand;
	inputed = true;
	cout << name << " Input!" << endl;
}
