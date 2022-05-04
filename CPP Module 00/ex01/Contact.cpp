#include "Contact.hpp"

std::string Contact::getFirstName() {
	return Contact::firstName;
}

std::string Contact::getLastName() {
	return Contact::lastName;
}

std::string Contact::getNickname() {
	return Contact::nickname;
}

int Contact::getPhoneNumber() {
	return Contact::phoneNumber;
}

void Contact::setFirstName(std::string firstName) {
	Contact::firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	Contact::lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
	Contact::nickname = nickname;
}

void Contact::setPhoneNumber(int phoneNumber) {
	Contact::phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(int darkestSecret) {
	Contact::darkestSecret = darkestSecret;
}
