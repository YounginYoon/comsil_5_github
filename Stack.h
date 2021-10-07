#define _CRT_SECURE_NO_WARNINGS
#include "LinkedList.h"
#ifndef __Stack_H__
#define __Stack_H__

//1. ���ø� Ŭ������ Ȯ���ؾ���
//2. Stack�������� Delete �Լ� �������ؾ���
//����: first, current_size�� class�� ��� �����̱� ������ this �����͸� ����Ͽ� �����;���

//LinkedList class�� ��ӹ���
template <class T>
class Stack : public LinkedList<T> {
public:
	bool Delete(T &element) {
		//first�� 0�̸� false��ȯ
		if (this->first == 0) return false;
		// LinkedList�� �޸� Stack�� current�� ����Ű�� ���� ����
		Node<T> *current = this->first;
		element = current->data;
		this->first = this->first->link;
		delete current;
		this->current_size--;
		return true;
	}
};
#endif