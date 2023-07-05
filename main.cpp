#include <math.h>
#include <exception>
#include <iostream>

struct Btree //��������� ��������� ������
{
	int value; //�������� ������
	Btree* left, * right; //������ �� ����� � ������ ������. � ����� �������� ������� ��������, � ������ - �������
};

/*
* �-�� ������� ������� � ������
* ������ �������� - ��������, ��� ����� ��������
* ������ �������� - ��������� �� ������
* ���������� ��������� �� ������
*/
Btree* Insert(int val, Btree* tree);
/*
* �-��, ��� ������� ���-�� ������� � ������
* ������ �������� - ��������� �� ������
* ���������� ���-�� �������
*/
int CountLevels(Btree* tree);
/*
* ����������� �-��, ��� ������� �������� �� ������������ ������
* ������ �������� - ��������� �� ������
* ������ �������� - �������, �� ������� ����� ����� ��������
* ������ �������� - (��������������, �� ��������� = 1) ������� �������
* ���������� ��������� �� ������ ���������
*/
int* FindElements(Btree* tree, int k, int level = 1);
/*
* ����������� �-��, ��� ������� ����� ��������� �� ��� ������
* ������ �������� - ��������� �� ������
* ������ �������� - �������, �� ��� ����� ����� ��������
* ������ �������� - (��������������, �� ��������� = 1) ������� �������
* ���������� ����� ���������� �� ������ ������
*/
int FindSumOnLevel(Btree* tree, int k, int level = 1);

int main()
{
	Btree* tree = nullptr;
	tree = Insert(8, tree);
	tree = Insert(3, tree);
	tree = Insert(10, tree);
	int sum = FindSumOnLevel(tree, 2);
	printf_s("%d", sum); //13
}

Btree* Insert(int val, Btree* tree)
{
	if (tree == nullptr)
	{
		tree = new Btree();
		tree->value = val;
		tree->left = nullptr;
		tree->right = nullptr;
	}
	else
	{
		if (val < tree->value) tree->left = Insert(val, tree->left);
		else if (val > tree->value) tree->right = Insert(val, tree->right);
	}
	return tree;
}
int CountLevels(Btree* tree)
{
	int ret = 0;
	if (tree)
	{
		int left = CountLevels(tree->left);
		int right = CountLevels(tree->right);
		ret = left > right ? left + 1 : right + 1;
	}
	return ret;
}
int* FindElements(Btree* tree, int k, int level)
{
	if (tree == nullptr) throw std::out_of_range("Level out of range");
	static int* elements = new int[pow(2, k)] {0};
	if (tree == nullptr) return elements;
	if (k == level)
	{
		int i = 0;
		for (; elements[i]; i++);
		elements[i] = tree->value;
		return elements;
	}
	FindElements(tree->left, k, level + 1);
	FindElements(tree->right, k, level + 1);
	return elements;
}
int FindSumOnLevel(Btree* tree, int k, int level)
{
	if (k <= 0) throw std::invalid_argument("Level below zero"); //���� ������� <= 0 - ������
	if (tree == nullptr) throw std::out_of_range("Level out of range tree"); //���� ������ ������ - ������
	if (k == level) return tree->value; //���� �� �� ������ ������ - ���������� �������� ������� ������
	int sum = 0;
	sum += FindSumOnLevel(tree->left, k, level + 1); // ���� �� ������� ���� �����
	sum += FindSumOnLevel(tree->right, k, level + 1); // ���� �� ������� ���� ������
	return sum;
}