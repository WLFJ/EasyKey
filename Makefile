VERSION = 0.0.1
PREFIX  = /usr/local
NAME    = vimek

MAIN    = ./src/main.cpp

install:
	rm ${NAME}
	g++ -std=c++11 ${MAIN} -Wall -o ./${NAME}
	cp ./${NAME} ${PREFIX}/bin/${NAME}

uninstall:
	rm ./${NAME}
	rm ${PREFIX}/bin/${NAME}

clean:
	rm ./${NAME}
