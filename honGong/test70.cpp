#include <iostream>
using namespace std;

class Animal {
public:
	virtual void cry() = 0;

};

class Dog:public Animal {
	void cry()  {
		cout << "²Ü²Ü" << endl;
	}
};
class Cat: Animal {
	void cry()  {
		cout << "¸í?" << endl;
	}
};


void punch(Animal &animal){
	animal.cry();
}

int main(void) {
	Cat º´Àç;
	Dog dongYu;
	punch(dongYu);
	return 0;
}