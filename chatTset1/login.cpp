#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;


void login() {
	int key_num;
	string id, pw, name, phone, birth;

	while (1) {
		cout << "어떤 동작을 실행 시킬 것인지 결정해주세요.(이외의 숫자 입력시 프로그램 종료)" << endl;
		cout << "▶ 1. 로그인 하기" << endl;
		cout << "▶ 2. ID 찾기" << endl;
		cout << "▶ 3. PW 찾기" << endl;
		cout << "▶ 4. 회원가입" << endl;
		cout << "▶ 0. 종료 하기" << endl;
		cin >> key_num;
		cout << endl;

		switch (key_num) {
		case '0':
			cout << "프로그램을 종료합니다. 이용해주셔서 감사합니다." << endl;
			break;

		case '1':
			cout << "ID와 PW를 입력해주세요." << endl;
			cin >> id;
			cout << endl << "ID가 입력되었습니다." << endl;
			cin >> pw;
			cout << endl << "PW가 입력되었습니다." << endl;
			cout << "정제철님, 환영합니다." << endl; // 추후 DB에 저장된 user name을 불러오는 것으로 수정 필요

		case '2':
			cout << "회원 가입시, 입력하신 이름, 전화번호, 생일 8자리를 입력해주세요." << endl;
			cin >> name >> phone >> birth;
			//if 문을 활용해서 DB에 저장된 데이터와의 정보일치 여부에 따라 다른 반응 출력 가능하게 수정 필요
				//cout << "회원님의 ID는 OO입니다." << endl; // 정보가 일치하는 경우, 해당 회원의 ID 출력

				//cout << "일치하는 회원이 없습니다." << endl; // 정보가 일치하지 않는 경우, 이 문구 출력

		case '3':
			cout << "회원 가입시, 입력하신 ID, 이름, 전화번호, 생일 8자리를 입력해주세요." << endl;
			cin >> id >> name >> phone >> birth;
			//if 문을 활용해서 DB에 저장된 데이터와의 정보일치 여부에 따라 다른 반응 출력 가능하게 수정 필요
				//cout << "변경하실 PW를 입력해주세요" << endl; // 정보가 일치할 경우 비밀번호를 변경할 수 있게 설정
				//cout << "일치하는 회원이 없습니다." << endl; // 정보가 일치하지 않는 경우, 이 문구 출력

		case '4':
			cout << "회원 가입을 위해 ID, PW" << endl;

			cout << "회원 가입을 위해 ID를 입력해주세요." << endl;
			cin >> id;
			cout << endl;
				//if문 사용해서 중복 검사
			cout << "회원 가입을 위해 PW를 입력해주세요." << endl;
			cin >> pw;
			cout << endl;
			cout << "회원 가입을 위해 이름을 입력해주세요." << endl;
			cin >> name;
			cout << endl;
			cout << "회원 가입을 위해 전화번호를 입력해주세요." << endl;
			cin >> phone;
			cout << endl;
			cout << "회원 가입을 위해 생일 8자리를 입력해주세요." << endl;
			cin >> birth;
			cout << endl;
			cout << "회원 가입이 모두 완료되었습니다." << endl << "신규 회원이 되신 것을 환영합니다" << endl;

		default: break;
		}

	}
 }

int main() {
	void login();
}