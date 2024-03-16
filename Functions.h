#pragma once
#include <iostream>
#include "ExceptionHandling.h"
#include "Chat.h"

//Displaying user data available for initial work 
void DisplayValidUsers();


// Asks the user for a login and returns it
std::string loginRequest();


// 1 - Write a message to the general chat
// 2 - Write a private message
// 3 - Read messages
// 4 - View users
// 5 - Delete account
// 6 - Leave chat
void Menu2();
void ChatMenu();



// 1 - Register
// 2 - Enter the chat
// 3 - Exit
void Menu1();
void MainMenu();
