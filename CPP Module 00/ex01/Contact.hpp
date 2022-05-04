#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact {

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	int phoneNumber;
	int darkestSecret;

public:
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	int getPhoneNumber();

	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickname(std::string nickname);
	void setPhoneNumber(int phoneNumber);
	void setDarkestSecret(int darkestSecret);
};

#endif
