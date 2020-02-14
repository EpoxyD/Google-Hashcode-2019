CC=g++

SRC_FOLDER=src
INC_FOLDER=include
OUT_FOLDER=build


all: compile

compile:
	@ mkdir -p ${OUT_FOLDER}
	@ ${CC} -g -I ${INC_FOLDER} ${SRC_FOLDER}/* -o ${OUT_FOLDER}/solution

clean:
	@ rm -rf ${OUT_FOLDER}