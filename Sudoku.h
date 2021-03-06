#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Sudoku {
	public:
		void giveQuestion();
		void readIn();
		void solve();
		void change();
		void printOut(bool isAns);
		void changeNum(int a, int b);
		void changeRow(int a, int b);
		void changeCol(int a, int b);
		void rotate(int n);
		void flip(int n);
		void transform();
		bool checkUnity(int arr[]);
		bool isCorrect();
		bool nozero();
		void zero_position();
		void possible(int arr[][9]);
		void backtrack();
	private:
		int real_map[9][9];
		int ans[9][9];
		int possible_num[9];
		int zero_posRow[81];
		int zero_posCol[81];
		int answer;
		int index;
};
