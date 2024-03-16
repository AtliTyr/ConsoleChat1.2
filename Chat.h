#pragma once
#include "UserBase.h"
#include <vector>
#include "Message.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include "ExceptionHandling.h"

using namespace std;

class Chat
{
private:
	std::vector <Message> chat; // Array of chat messages 
	UserBase base;  // Chat user base
	User authorized; // Currently authorized user
public:
	Chat();
	~Chat();

	// Authorization in chat, returns true if the entered login and password match in the user database
	bool EnterChat(); 

	// Registration taking into account the uniqueness of the login in the user database
	void Registration();

	// Accelerated registration option, without checks for the uniqueness of the login, for quick Debugging
	void Registration(std::string name, std::string login, std::string password);
	
	// Allows you to write a public message
	void WriteMessageToAll();
	
	// Allows you to write a message that is accessible only to a user with a given login
	void WritePrivateMessage(std::string login);
	
	// Adds several public messages to the chat. Needed to check functionality. Can be deleted
	void WriteTestMessages();
	
	// Output messages
	void CheckMessage();

	// Removes the current authorized user from the chat user database
	void DeleteUserFromChat();
 
	// Output chat users
	void DisplayUserList();	
};
