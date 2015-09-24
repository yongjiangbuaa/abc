OBJS = game.o Role.o GameClient.o Logger.o
CC = g++
DEBUG = -g
CFLAGS = -std=c++11 -Wall -c $(DEBUG)
LFLAGS = -std=c++11 -Wall $(DEBUG)

g1 : $(OBJS)
	$(CC)	$(LFLAGS)	$(OBJS) -o g1
game.o : game.cpp Role.h
	$(CC) $(CFLAGS) game.cpp

Role.o : Role.h Role.cpp Logger.h
	$(CC) $(CFLAGS) Role.cpp

GameClient.o : GameClient.h GameClient.cpp Logger.h
	$(CC) $(CFLAGS) GameClient.cpp

Logger.o : Logger.h Logger.cpp
	$(CC) $(CFLAGS) Logger.cpp


clean:
	\rm *.o *~ g1
