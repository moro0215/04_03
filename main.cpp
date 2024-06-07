#include <stdio.h>
#include "animal.h"
#include "Human.h"
#include "peacock.h"

int main() {

	Animal* animals[3];

	//生成フェーズ
	for (int i = 0; i < 3; i++) {
		if (i == 0) {
			animals[i] = new Animal;
		}
		if (i == 1) {
			animals[i] = new Peacock;
		}
		if(i==2){
			animals[i] = new Human;
		}
	}

	//求愛フェーズ
	for (int i = 0; i < 3; i++) {
		animals[i]->Courtship();
	}

	//破棄フェーズ
	for (int i = 0; i < 3; i++) {
		delete animals[i];
	}


	return 0;
}