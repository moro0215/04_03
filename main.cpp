#include <stdio.h>
#include "animal.h"
#include "Human.h"
#include "peacock.h"

int main() {

	Animal* animals[3];

	//�����t�F�[�Y
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

	//�����t�F�[�Y
	for (int i = 0; i < 3; i++) {
		animals[i]->Courtship();
	}

	//�j���t�F�[�Y
	for (int i = 0; i < 3; i++) {
		delete animals[i];
	}


	return 0;
}