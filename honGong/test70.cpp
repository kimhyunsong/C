#include <iostream>
using namespace std;

class Animal {
public:
	virtual void cry() = 0;

};

class Dog:public Animal {
	void cry()  {
		cout << "�ܲ�" << endl;
	}
};
class Cat: Animal {
	void cry()  {
		cout << "��?" << endl;
	}
};


void punch(Animal &animal){
	animal.cry();
}

int main(void) {
	Cat ����;
	Dog dongYu;
	punch(dongYu);
	return 0;
}