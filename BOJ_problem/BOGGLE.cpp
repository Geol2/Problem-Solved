#include <iostream>
#include <string>

using namespace std;

char board[5][5];

const int dx[8] = { -1, -1, -1, 1, 1, 1, 0, 0 };
const int dy[8] = { -1, 0, 1, -1, 0, 1, -1, 1 };

bool hasword(int y, int x, const string word);
bool inRange(int y, int x);

bool hasword(int y, int x, const string word) {
	if (!inRange(y, x)) return false;
	if (board[y][x] != word[0]) return false;
	if (word.size() == 1) return true;

	for (int direction = 0; direction < 8; ++direction) {
		int nextY = y + dy[direction];
		int nextX = x + dx[direction];

		if (hasword(nextY, nextX, word.substr(1)))
			return true;
	}
	return false;
}

bool inRange(int y, int x) {
	if(y > 5 || x > 5) 
		return false;
	return true;
}

int main() {
	
	int i = 0, j = 0;
	int TestCase = 0, start = 0, numOfWord = 0;
	string word;
	
	bool checkOfWord = false;

	cin >> TestCase;
	//cout << TestCase << endl;
	
	for (start = 0; start < TestCase; start++) {
		
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				cin >> board[i][j];
			}
		}

		cin >> numOfWord;
		while (numOfWord--) {
			
			checkOfWord = false;

			cin >> word;
			for (i = 0; i < 5; i++) {
				for (j = 0; j < 5; j++) {
					if (checkOfWord = hasword(i, j, word)) break;
					if (checkOfWord) break;
				}
			}

			if (checkOfWord == true) {
				cout << word << " YES" << endl;
			}
			else {
				cout << word << " NO" << endl;
			}
		}
	}
	return 0;
}