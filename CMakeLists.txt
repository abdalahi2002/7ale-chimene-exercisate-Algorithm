cmake_minimum_required(VERSION 3.26)
project(Testfilepile C)

set(CMAKE_C_STANDARD 11)

add_executable(Testfilepile main.c
        TestPile.c
        TestFile.c
        TestFile.h
        ListeDouble.h
        ListeDouble.c)
