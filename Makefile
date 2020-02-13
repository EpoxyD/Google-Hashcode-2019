CC=g++

SRC_FOLDER=src
OUT_FOLDER=build

all:
	@ ${CC} ${SRC_FOLDER}/* -o ${OUT_FOLDER}/solution