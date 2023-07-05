#include "Btree.h"
#include <math.h>
#include <exception>
#include <iostream>
namespace btree 
{
	//Btree* Insert(int val, Btree* tree)
	//{
	//	if (tree == nullptr)
	//	{
	//		tree = new Btree();
	//		tree->value = val;
	//		tree->left = nullptr;
	//		tree->right = nullptr;
	//	}
	//	else
	//	{
	//		if (val < tree->value) tree->left = Insert(val, tree->left);
	//		else if (val > tree->value) tree->right = Insert(val, tree->right);
	//	}
	//	return tree;
	//}
	//int CountLevels(Btree* tree)
	//{
	//	int ret = 0;
	//	if (tree)
	//	{
	//		int left = CountLevels(tree->left);
	//		int right = CountLevels(tree->right);
	//		ret = left > right ? left + 1 : right + 1;
	//	}
	//	return ret;
	//}
	//int* FindElements(Btree* tree, int k, int level)
	//{
	//	if (tree == nullptr) throw std::out_of_range("Level out of range");
	//	static int* elements = new int[pow(2, k)] {0};
	//	if (tree == nullptr) return elements;
	//	if (k == level)
	//	{
	//		int i = 0;
	//		for (; elements[i]; i++);
	//		elements[i] = tree->value;
	//		return elements;
	//	}
	//	FindElements(tree->left, k, level + 1);
	//	FindElements(tree->right, k, level + 1);
	//	return elements;
	//}
	//int FindSumOnLevel(Btree* tree, int k, int level)
	//{
	//	if (k <= 0) throw std::invalid_argument("Level below zero"); //если уровень <= 0 - ошибка
	//	if (tree == nullptr) throw std::out_of_range("Level out of range tree"); //если дерево пустое - ошибка
	//	if (k == level) return tree->value; //если мы на нужном уровне - возвращаем значение текущей ячейки
	//	int sum = 0;
	//	sum += FindSumOnLevel(tree->left, k, level + 1); // идем на уровень вниз влево
	//	sum += FindSumOnLevel(tree->right, k, level + 1); // идем на уровень вниз вправо
	//	return sum;
	//}
}