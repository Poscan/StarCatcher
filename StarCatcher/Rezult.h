#pragma once
ref class Rezult
{
public:
	int** rez;
	Rezult() {
		rez = new int* [7];
		for (int i = 0; i < 8; i++) rez[i] = new int[8];
		for (int i = 0; i < 7; i++) for (int j = 0; j < 8; j++) rez[i][j] = 0;
	}

	int Sum(int Quest) {
		int s = 0;
		for (int i = 0; i < 8; i++) s += rez[Quest][i];
		return s;
	}
};

