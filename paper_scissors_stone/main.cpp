#include "Player.h"
#include "io.h"

void judge(Player & a, Player & b){

}

int main(){
	Player p1,p2;
	
	// printName(p1) here
	cout << " , ";
	// printName(p2) here
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
