#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : store() {}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if (this->store[i]) {
			delete this->store[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	for (int i = 0; i < 4; ++i) {
		if (materiaSource.store[i]) {
			this->store[i] = materiaSource.store[i]->clone();
		} else {
			this->store[i] = 0;
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	if (this != &materiaSource) {
		for (int i = 0; i < 4; ++i) {
			if (this->store[i]) {
				delete this->store[i];
			}
			this->store[i] = 0;
			if (materiaSource.store[i]) {
				this->store[i] = materiaSource.store[i]->clone();
			}
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *aMateria) {
	for (int i = 0; i < 4; ++i) {
		if (!this->store[i]) {
			this->store[i] = aMateria;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 3; i >= 0; i--) {
		if (this->store[i]) {
			if (this->store[i]->getType() == type) {
				return this->store[i]->clone();
			}
		}
	}
	return 0;
}