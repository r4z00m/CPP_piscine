#include "Character.hpp"

Character::Character() : slot() {}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		if (this->slot[i]) {
			delete this->slot[i];
		}
	}
}

Character::Character(std::string name) : name(name), slot() {}

Character::Character(const Character &character) : name(character.name) {
	for (int i = 0; i < 4; ++i) {
		if (character.slot[i]) {
			this->slot[i] = character.slot[i]->clone();
		} else {
			this->slot[i] = 0;
		}
	}
}

Character &Character::operator=(const Character &character) {
	if (this != &character) {
		this->name = character.name;
		for (int i = 0; i < 4; ++i) {
			if (this->slot[i]) {
				delete this->slot[i];
			}
			this->slot[i] = 0;
			if (character.slot[i]) {
				this->slot[i] = character.slot[i]->clone();
			}
		}
	}
	return *this;
}

const std::string &Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (!this->slot[i]) {
			this->slot[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (this->slot[idx]) {
		this->slot[idx] = 0;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (this->slot[idx]) {
		this->slot[idx]->use(target);
	}
}
