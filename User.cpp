#include "User.h"

using namespace std;

User::User()
{
	_name = "";
	_login = "";
	_password = 0;
}
User::~User() = default;

User::User(std::string name, string password, std::string login)
{
	_name = name;
	_login = login;
	char* temp = new char[password.length() + 1];
	//strcpy(temp, password.c_str());
	strcpy(temp, password.c_str());
	_password = sha1(temp, password.length());

	delete[] temp;
}
User::User(const User& user)
{
	this->_login = user._login;
	this->_name = user._name;
	this->_password = user._password;
}
User& User::operator=(const User& user)
{
	this->_login = user._login;
	this->_name = user._name;
	this->_password = user._password;
	return *this;
}

void User::setName(std::string name)
{
	_name = name;
}
std::string User::getName() const
{
	return _name;
}
void User::setLogin(std::string login)
{
	_login = login;
}
std::string User::getLogin() const
{
	return _login;
}
void User::setPassword(std::string password)
{
	char* temp = new char[password.length() + 1];
	strcpy(temp, password.c_str());	
	_password = sha1(temp, password.length());
}
uint* User::getPassword() const
{
	return _password;
}
void User::setUserData()
{
	std::string a;
	std::cout << "Enter your name: ";
	std::cin >> a;
	setName(a);
	std::cout << "Enter your login: ";
	std::cin >> a;
	setLogin(a);
	std::cout << "Enter your password: ";
	std::cin >> a;
	setPassword(a);

}
std::ostream& operator<< (std::ostream& os, const User& user)
{
	return os << "Name: " << user.getName() << endl
			  << "Login: " << user.getLogin() << endl;
}
