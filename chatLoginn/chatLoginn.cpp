#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;


void login() {
	int c_num, button = 0;
	string id, pw, name, phone, birth;

	while (1) {
		cout << "▶ ";
		cin >> c_num;
		cout << endl;

		switch (c_num) {
			case 1:
				cout << "ID를 입력해주세요." << endl;
				cin >> id;
				cout << "ID가 입력되었습니다." << endl << endl;
				cout << "PW를 입력해주세요." << endl;
				cin >> pw;
				cout << "PW가 입력되었습니다." << endl << endl;
				cout << "정제철님, 환영합니다." << endl; // 추후 DB에 저장된 user name을 불러오는 것으로 수정 필요
				button = 1;
				break;

			case 2:
				cout << "회원 가입시, 입력하신 이름, 전화번호, 생일 8자리를 입력해주세요." << endl;
				//cin >> name >> phone >> birth;
				//if 문을 활용해서 DB에 저장된 데이터와의 정보일치 여부에 따라 다른 반응 출력 가능하게 수정 필요
					//cout << "회원님의 ID는 OO입니다." << endl; // 정보가 일치하는 경우, 해당 회원의 ID 출력

					//cout << "일치하는 회원이 없습니다." << endl; // 정보가 일치하지 않는 경우, 이 문구 출력
				button = 1;
				break;

			case 3:
				cout << "회원 가입시, 입력하신 ID, 이름, 전화번호, 생일 8자리를 입력해주세요." << endl;
				//cin >> id >> name >> phone >> birth;
				//if 문을 활용해서 DB에 저장된 데이터와의 정보일치 여부에 따라 다른 반응 출력 가능하게 수정 필요
					//cout << "변경하실 PW를 입력해주세요" << endl; // 정보가 일치할 경우 비밀번호를 변경할 수 있게 설정
					//cout << "일치하는 회원이 없습니다." << endl; // 정보가 일치하지 않는 경우, 이 문구 출력
				button = 1;
				break;

			case 4:
				cout << "회원 가입을 위해 ID, PW, 이름, 전화번호, 생일 8자리를 입력해주세요." << endl;

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
				cout << "회원 가입이 모두 완료되었습니다." << endl << endl << name << "님 신규 회원이 되신 것을 환영합니다" << endl;
				button = 1;
				break;

			case 0:
				cout << "프로그램을 종료합니다. 이용해주셔서 감사합니다." << endl;
				button = 1;
				break;

			default: 
				cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
				break;
		}

		if (button == 1) {
			break;
		}
		
	}
}

void basement() {
	int m_num, f_num, s_num, c_num, cli_num, button = 0;
	string chn_pw;
	while (1) {
		cout << endl << "▶ 1. 내 프로필" << endl;
		cout << "▶ 2. 친구" << endl;
		cout << "▶ 3. 채팅" << endl;
		cout << "▶ 4. 설정" << endl;
		cout << "▶ 0. 종료" << endl;
		cout << endl << "▶ ";
		cin >> c_num;
		cout << endl;

		switch (c_num) {
			case 1:
				cout << endl << ">> 내 프로필 <<" << endl;
				cout << "▶ 1. 프로필 보기" << endl;
				cout << "▶ 2. 상태메시지 등록/ 수정" << endl;
				cout << "▶ 3. 노래 설정" << endl;
				while (1) {
					cout << endl << "▶ ";
					cin >> m_num;
					cout << endl;

					if (m_num == 1) {
						//프로필 정보 호출 기능 구현 예쩡
					}
					else if (m_num == 2) {
						// 상태 메시지 등록/ 수정 기능 구현 예정
					}
					else if (m_num == 3) {
						// 노래 설정 기능 구현 예정
					}
					else {
						cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
					}break;
				}
				break;

			case 2:
				cout << ">> 친구 <<" << endl;
				cout << "▶ 1. 친구 목록 확인" << endl;
				cout << "▶ 2. 생일 검색하기" << endl;
				cout << endl << "▶ ";
				cin >> f_num;
				cout << endl;
				while (1) {
					if (f_num == 1) {
						cout << "친구 목록 확인" << endl; // SELECT를 활용한 친구 목록 확인 기능 구현 예정

					}
					else if (f_num == 2) {
						cout << "생일 검색하기" << endl; //SELECT를 활요한 생일자별 검색 기능 구현 예정

					}
					else {
						cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
					}
					break;
				}
				
				break;

			case 3:
				cout << ">> 채팅 입장 <<" << endl;
				// 채팅창 입장 => 기존 채팅 내역 불러오기 => 채팅방에 입장하셨습니다 출력, '~' 입력하면 종료. 기능 구현 예정
				break;

			case 4:
				cout << ">> 설정 <<" << endl;
				cout << "▶ 1. 비밀 번호 변경" << endl;
				cout << "▶ 2. 회원 탈퇴" << endl;
				cout << endl << "▶ ";
				cin >> s_num;
				cout << endl;
				while (1) {
					if (s_num == 1) {
						cout << "비밀 번호 변경을 진행합니다." << endl; 
						cout << "변경할 비밀번호를 입력해주세요." << endl;
						cout << endl << "▶ ";
						cin >> chn_pw; //입력한 비밀번호를 DB에 저장
						cout << endl;
					}
					else if (s_num == 2) {
						cout << "회원 탈퇴를 진행하시겠습니까?" << endl;
						cout << "1: 탈퇴를 진행한다." << endl;
						cout << "2: 탈퇴를 취소한다." << endl;
						cin >> cli_num;
						cout << endl;
						if (cli_num == 1) {
							cout << "회원 탈퇴를 진행합니다." << endl;
							//회원 정보 ROW만 DROP하는 코드가 필요
							cout << "탈퇴가 완료되었습니다." << endl;
						}
						else if (cli_num == 2) {
							cout << "회원 탈퇴가 취소 되었습니다." << endl;
						}
						else cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
					}else cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
					break;
				}
				break;
			case 0:
				button = 1;
				break;
			default :
				cout << "잘못된 입력입니다. 다시 입력해주세요." << endl;
				break;
		}
		
		if (button == 1){
			break;
			}
	}
}

int main() {
	login();
	basement();
	return 0;
}