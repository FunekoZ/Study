#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>		//����Ԥ����ָ�� ����ͷ�ļ���iostream��
using namespace std;	//ʹ�������ռ�std

//��������
void welcome;

int main()	//���������������������Է���һ��int���ͣ�
{	

	 /*
	<< �����������
	cout
	endl(endline)��ʾ������һ��
	���hello world
	*/
	cout << "hello world" << endl;

	welcome();

	//�ȴ��������� ����system("pause")
	cin.get();
	cin.get();

	return 0;	//���Ƿ���ֵ Ϊ0Ҳ���Բ�д

}