// twoswap.cpp : 定義主控台應用程式的進入點。
//abcdedfghijklmop


#include "stdafx.h"
#include<iostream>

template<typename T>
void Swap(T&a, T&b);

struct  job
{
	char name[40];
	double salary;
	int floor;
};

template<>void Swap<job>(job &j1, job&j2);



int main()
{
    return 0;
}

