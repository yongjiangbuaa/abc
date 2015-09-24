OBJS = game.o Role.o GameClient.o Logger.o 
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

g1:
    g++ -std=c++11 -o g1 *.cpp

clean:
    \rm *.o *~ g1

