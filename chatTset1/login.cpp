#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::endl;


void login() {
	int key_num;
	string id, pw, name, phone, birth;

	while (1) {
		cout << "� ������ ���� ��ų ������ �������ּ���.(�̿��� ���� �Է½� ���α׷� ����)" << endl;
		cout << "�� 1. �α��� �ϱ�" << endl;
		cout << "�� 2. ID ã��" << endl;
		cout << "�� 3. PW ã��" << endl;
		cout << "�� 4. ȸ������" << endl;
		cout << "�� 0. ���� �ϱ�" << endl;
		cin >> key_num;
		cout << endl;

		switch (key_num) {
		case '0':
			cout << "���α׷��� �����մϴ�. �̿����ּż� �����մϴ�." << endl;
			break;

		case '1':
			cout << "ID�� PW�� �Է����ּ���." << endl;
			cin >> id;
			cout << endl << "ID�� �ԷµǾ����ϴ�." << endl;
			cin >> pw;
			cout << endl << "PW�� �ԷµǾ����ϴ�." << endl;
			cout << "����ö��, ȯ���մϴ�." << endl; // ���� DB�� ����� user name�� �ҷ����� ������ ���� �ʿ�

		case '2':
			cout << "ȸ�� ���Խ�, �Է��Ͻ� �̸�, ��ȭ��ȣ, ���� 8�ڸ��� �Է����ּ���." << endl;
			cin >> name >> phone >> birth;
			//if ���� Ȱ���ؼ� DB�� ����� �����Ϳ��� ������ġ ���ο� ���� �ٸ� ���� ��� �����ϰ� ���� �ʿ�
				//cout << "ȸ������ ID�� OO�Դϴ�." << endl; // ������ ��ġ�ϴ� ���, �ش� ȸ���� ID ���

				//cout << "��ġ�ϴ� ȸ���� �����ϴ�." << endl; // ������ ��ġ���� �ʴ� ���, �� ���� ���

		case '3':
			cout << "ȸ�� ���Խ�, �Է��Ͻ� ID, �̸�, ��ȭ��ȣ, ���� 8�ڸ��� �Է����ּ���." << endl;
			cin >> id >> name >> phone >> birth;
			//if ���� Ȱ���ؼ� DB�� ����� �����Ϳ��� ������ġ ���ο� ���� �ٸ� ���� ��� �����ϰ� ���� �ʿ�
				//cout << "�����Ͻ� PW�� �Է����ּ���" << endl; // ������ ��ġ�� ��� ��й�ȣ�� ������ �� �ְ� ����
				//cout << "��ġ�ϴ� ȸ���� �����ϴ�." << endl; // ������ ��ġ���� �ʴ� ���, �� ���� ���

		case '4':
			cout << "ȸ�� ������ ���� ID, PW" << endl;

			cout << "ȸ�� ������ ���� ID�� �Է����ּ���." << endl;
			cin >> id;
			cout << endl;
				//if�� ����ؼ� �ߺ� �˻�
			cout << "ȸ�� ������ ���� PW�� �Է����ּ���." << endl;
			cin >> pw;
			cout << endl;
			cout << "ȸ�� ������ ���� �̸��� �Է����ּ���." << endl;
			cin >> name;
			cout << endl;
			cout << "ȸ�� ������ ���� ��ȭ��ȣ�� �Է����ּ���." << endl;
			cin >> phone;
			cout << endl;
			cout << "ȸ�� ������ ���� ���� 8�ڸ��� �Է����ּ���." << endl;
			cin >> birth;
			cout << endl;
			cout << "ȸ�� ������ ��� �Ϸ�Ǿ����ϴ�." << endl << "�ű� ȸ���� �ǽ� ���� ȯ���մϴ�" << endl;

		default: break;
		}

	}
 }

int main() {
	void login();
}