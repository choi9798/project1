#ifndef SUDOKU_H
#define SUDOKU_H
#include<iostream>
#include<cstdlib>

class Sudoku {
	public:
		void giveQuestion();
		void readIn();
		void solve();
		void changeNum(int a, int b, int c, int d);
		void changeRow(int a, int b);
		void changeCol(int a, int b);
		void rotate(int n);
		void flip(int n);
		void transform();
		void change();
	private:
		
};
