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
			if(arr[i][j] == 0) zero_cnt++;	// 0의 개수가 결정되면 1의 개수도 결정.
		}
		result[i] = zero_cnt;
		zero_cnt = 0;	// 0값 초기화 
	}
	
	for(int i=0; i<3; i++) {
		if(result[i] == 0) cout << "E";	// 모 
		else if(result[i] == 1) cout << "A";
		else if(result[i] == 2) cout << "B"; // 개 
		else if(result[i] == 3) cout << "C";
		else cout << "D";	// 윷
		cout << endl;
	}
	
	return 0;
}
