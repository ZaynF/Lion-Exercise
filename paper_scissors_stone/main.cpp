#include "Player.h"
#include "io.h"

void judge(Player & a, Player & b){
	if(a.inputed && b.inputed){
		if(a.hand == b.hand){
			cout << "== Tied ==" << endl;
		}else{
			if(a.hand == 1 && b.hand == 3){
				cout << "== " << a.name <<" Win ==" << endl;
			}else{
				if(a.hand == 3 && b.hand == 1){
					cout << "== " << b.name <<" Win ==" << endl;
				}else{
					if(a.hand > b.hand){
						cout << "== " << a.name <<" Win ==" << endl;
					}else{
						cout << "== " << b.name <<" Win ==" << endl;
					}
				}
			}
		}
		a.inputed = false;
		b.inputed = false;
	}
}

int main(){
	Player p1,p2;
	
	Player::printName(p1);
	cout << " , ";
	Player::printName(p2);
	cout << endl;
	cout << "--- Start game (p1: A(paper)/S(Scissor)/D(Stone) | p2: J(paper)/K(Scissor)/L(Stone)) ---" << endl;
	
	nonblock(1);
	while(1){
		char c = getch();
		switch(c){
			case 27:
				nonblock(0);
				return 0;
			case -1:
				break;
			case 'a':
				p1.input(1);
				break;
			case 's':
				p1.input(2);
				break;
			case 'd':
				p1.input(3);
				break;
			case 'j':
				p2.input(1);
				break;
			case 'k':
				p2.input(2);
				break;
			case 'l':
				p2.input(3);
				break;
		}
		judge(p1,p2);
	}
}
