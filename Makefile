Chat: main.o Message.o sha1.o ExceptionHandling.o User.o UserBase.o Chat.o Functions.o
	g++ -o Chat main.o Message.o sha1.o ExceptionHandling.o User.o UserBase.o Chat.o Functions.o

Message.o: Message.cpp
	g++ -c Message.cpp
sha1.o: sha1.cpp
	g++ -c sha1.cpp
ExceptionHandling.o: ExceptionHandling.cpp
	g++ -c ExceptionHandling.cpp
User.o: User.cpp
	g++ -c User.cpp
UserBase.o: UserBase.cpp
	g++ -c UserBase.cpp
Chat.o: Chat.cpp
	g++ -c Chat.cpp
Functions.o: Functions.cpp
	g++ -c Functions.cpp
main.o: main.cpp
	g++ -c main.cpp
