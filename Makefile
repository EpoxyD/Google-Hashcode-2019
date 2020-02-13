CC=g++

SRC_FOLDER=src
OUT_FOLDER=build

all: compile

compile:
	@ mkdir -p ${OUT_FOLDER}
	@ ${CC} ${SRC_FOLDER}/* -o ${OUT_FOLDER}/solution

clean:
	@ rm -rf ${OUT_FOLDER}