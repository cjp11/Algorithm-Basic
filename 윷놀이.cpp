#include <iostream>
using namespace std;

int arr[3][4];
int result[3];
int zero_cnt;

int main(void) {

	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			cin >> arr[i][j];
		}		
	}
	
	for(int i=0; i<3; i++) {
		for(int j=0; j<4; j++) {
			if(arr[i][j] == 0) zero_cnt++;	// 0�� ������ �����Ǹ� 1�� ������ ����.
		}
		result[i] = zero_cnt;
		zero_cnt = 0;	// 0�� �ʱ�ȭ 
	}
	
	for(int i=0; i<3; i++) {
		if(result[i] == 0) cout << "E";	// �� 
		else if(result[i] == 1) cout << "A";
		else if(result[i] == 2) cout << "B"; // �� 
		else if(result[i] == 3) cout << "C";
		else cout << "D";	// ��
		cout << endl;
	}
	
	return 0;
}
