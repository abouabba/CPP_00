NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBG = ${SRC:.cpp=.o}

all: ${NAME}

${NAME}: ${OBG}
	${CC} ${CFLAGS} -o ${NAME} ${OBG}

clean:
	rm -rf ${OBG}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: clean