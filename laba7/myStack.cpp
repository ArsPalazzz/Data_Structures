//#include <iostream>
//#include "myStack.h"
//#include <fstream>
//using namespace std;
//void push(int x, Stack* myStk)   //���������� �������� � � ����	
//{
//	Stack* e = new Stack;    //��������� ������ ��� ������ ��������
//	e->data = x;             //������ �������� x � ���� v 
//	e->next = myStk->head;   //������� ������� �� ��������� ������� 
//	myStk->head = e;         //����� ������� �� ������� ������
//}
//int pop(Stack* myStk)   //���������� (��������) �������� �� �����
//{
//	if (myStk->head == NULL)
//	{
//		cout << "���� ����!" << endl;
//		return -1;               //���� ���� ���� - ������� -1 
//	}
//	else
//	{
//		Stack* e = myStk->head;   //� - ���������� ��� �������� ������ ��������
//		int a = myStk->head->data;   //������ ����� �� ���� data � ���������� a 
//		myStk->head = myStk->head->next; //������� �������
//		delete e;                        //�������� ��������� ����������
//		return a;                        //������� �������� ���������� ��������
//	}
//}
//void show(Stack* myStk)    //����� �����
//{
//	Stack* e = myStk->head;    //����������� ��������� �� ������� �����
//	int a;
//	if (e == NULL)
//		cout << "���� ����!" << endl;
//	while (e != NULL)
//	{
//		a = e->data;          //������ �������� � ���������� a 
//		cout << a << " ";
//		e = e->next;
//	}
//	cout << endl;
//}
//
//void diap(Stack* myStk, int first, int second) {
//	Stack* e = myStk->head;    //����������� ��������� �� ������� �����
//	int a = 0;
//	while (e != NULL)
//	{
//		if ((e->data > first) && (e->data < second)) {
//			a++;
//		}
//		e = e->next;
//	}
//	if (a) {
//		printf("����\n");
//	}
//	else {
//		printf("���\n");
//	}
//}
//
//void clear(Stack* myStk) {
//	while (myStk->head != nullptr) {
//		Stack* e = myStk->head;   //� - ���������� ��� �������� ������ ��������
//		int a = myStk->head->data;   //������ ����� �� ���� data � ���������� a 
//		myStk->head = myStk->head->next; //������� �������
//		delete e;
//	}
//	printf("���� ������\n");
//}
//
//void inFile(Stack* myStk) {
//	ofstream fout("myStack.txt");
//	Stack* e = myStk->head;    //����������� ��������� �� ������� �����
//	int a;
//	if (e == NULL)
//		cout << "���� ����!" << endl;
//	while (e != NULL)
//	{
//		fout << e->data << " ";
//		e = e->next;
//	}
//	fout.close();
//	printf("������ ��������");
//	cout << endl;
//}
//
//void outFile(Stack* myStk) {
//	ifstream fin("myStack.txt");
//	Stack* e = myStk->head;    //����������� ��������� �� ������� �����
//	char file[20];
//	fin.getline(file, 20);
//	cout << file << endl;
//
//	fin.close();
//	printf("������ �������");
//	cout << endl;
//}