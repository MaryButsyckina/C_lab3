#include "Test.h"
#include <iostream>
#include <exception>
namespace test
{
	//using std::cout;

	//int TestAll()
	//{
	//	cout << "START TEST\n";
	//	testInsert1();
	//	testInsert2();
	//	testInsert3();
	//	testCountLevels1();
	//	testCountLevels2();
	//	testFindElements1();
	//	testFindElements2();
	//	testFindElements3();
	//	testFindSumOnLevel1();
	//	testFindSumOnLevel2();
	//	testFindSumOnLevel3();
	//	cout << float(passed_tests) / tests * 100 << "%\n";
	//	cout << "END TEST";
	//	return 0;
	//}

	//int testInsert1()
	//{
	//	tests++;
	//	cout << "Testing Insert. Tree is empty.\n";
	//	Btree* tree = nullptr;
	//	tree = Insert(8, tree);
	//	if (tree->value != 8)
	//	{
	//		cout << "\tWrong output. Expected: 3. Got: " << tree->left->value << std::endl;
	//		return 1;
	//	}
	//	passed_tests++;
	//	cout << "\tTest passed.\n";
	//	return 0;
	//}
	//int testInsert2()
	//{
	//	tests++;
	//	cout << "Testing Insert. Add left.\n";
	//	Btree* tree = nullptr;
	//	tree = Insert(8, tree);
	//	tree = Insert(3, tree);
	//	if (tree->left->value != 3)
	//	{
	//		cout << "\tWrong output. Expected: 3. Got: " << tree->left->value << std::endl;
	//		return 1;
	//	}
	//	passed_tests++;
	//	cout << "\tTest passed.\n";
	//	return 0;
	//}
	//int testInsert3()
	//{
	//	cout << "Testing Insert. Add right.\n";
	//	tests++;
	//	Btree* tree = nullptr;
	//	tree = Insert(8, tree);
	//	tree = Insert(10, tree);
	//	if (tree->right->value != 10)
	//	{
	//		cout << "\tWrong output. Expected: 10. Got: " << tree->right->value << std::endl;
	//		return 1;
	//	}
	//	passed_tests++;
	//	cout << "\tTest passed.\n";
	//	return 0;
	//}
	//int testCountLevels1()
	//{
	//	tests++;
	//	cout << "Testing CountLevels. Not empty tree.\n";
	//	Btree* tree = nullptr;
	//	tree = Insert(8, tree);
	//	int lev = CountLevels(tree);
	//	if (lev != 1)
	//	{
	//		cout << "\tWrong output. Expected: 1. Got: " << lev << std::endl;
	//		return 1;
	//	}
	//	passed_tests++;
	//	cout << "\tTest passed.\n";
	//	return 0;
	//}
	//int testCountLevels2()
	//{
	//	tests++;
	//	cout << "Testing CountLevels. Not empty tree.\n";
	//	Btree* tree = nullptr;
	//	int lev = CountLevels(tree);
	//	if (lev != 0)
	//	{
	//		cout << "\tWrong output. Expected: 0. Got: " << lev << std::endl;
	//		return 1;
	//	}
	//	passed_tests++;
	//	cout << "\tTest passed.\n";
	//	return 0;
	//}
	//int testFindElements1()
	//{
	//	tests++;
	//	cout << "Testing FindElements. All correct\n";
	//	Btree* tree = nullptr;
	//	tree = Insert(8, tree);
	//	tree = Insert(3, tree);
	//	tree = Insert(10, tree);
	//	int* elements;
	//	elements = FindElements(tree, 2);
	//	if (elements[0] != 3 || elements[1] != 10)
	//	{
	//		cout << "\Wrong output. Expected: 3, 10. Got: " << elements[0] << ", " << elements[1] << std::endl;
	//		return 1;
	//	}
	//	passed_tests++;
	//	cout << "\tTest passed.\n";
	//	return 0;
	//}
	//int testFindElements2()
	//{
	//	tests++;
	//	cout << "Testing FindElements. Empty list.\n";
	//	Btree* tree = nullptr;
	//	int elements[2];
	//	try
	//	{
	//		FindElements(tree, 2);
	//		cout << "\tDidn't catch the error.\n";
	//		return 1;
	//	}
	//	catch(std::out_of_range)
	//	{
	//		passed_tests++;
	//		cout << "\tTest passed.\n";
	//		return 0;
	//	}
	//	catch(...)
	//	{
	//		cout << "\tHandled unknown error.\n";
	//		return 1;
	//	}
	//}
	//int testFindElements3()
	//{
	//	tests++;
	//	cout << "Testing FindElements. Level out of range .\n";
	//	Btree tree = Btree();
	//	tree.value = 8;
	//	tree.left = nullptr;
	//	tree.right = nullptr;
	//	int elements[2];
	//	try
	//	{
	//		FindElements(&tree, 2);
	//		cout << "\tDidn't catch the error.\n";
	//		return 1;
	//	}
	//	catch (std::out_of_range)
	//	{
	//		passed_tests++;
	//		cout << "\tTest passed.\n";
	//		return 0;
	//	}
	//	catch (...)
	//	{
	//		cout << "\tHandled unknown error.\n";
	//		return 1;
	//	}
	//}
	//int testFindSumOnLevel1()
	//{
	//	tests++;
	//	cout << "Testing FindSumOnLevel. All correct.\n";
	//	Btree* tree = nullptr;
	//	tree = Insert(8, tree);
	//	tree = Insert(3, tree);
	//	tree = Insert(10, tree);
	//	int sum = FindSumOnLevel(tree, 2);
	//	if (sum != 13)	
	//	{
	//		cout << "\tWrong output. Expected: 13. Got: " << sum << std::endl;
	//		return 1;
	//	}
	//	passed_tests++;
	//	cout << "\tTest passed.\n";
	//	return 0;
	//}
	//int testFindSumOnLevel2()
	//{
	//	tests++;
	//	cout << "Testing FindSumOnLevel. Empty tree.\n";
	//	Btree* tree = nullptr;
	//	try
	//	{
	//		int sum = FindSumOnLevel(tree, 2);
	//		cout << "\tDidn't catch the error.\n";
	//		return 1;
	//	}
	//	catch(std::out_of_range)
	//	{
	//		passed_tests++;
	//		cout << "\tTest passed.\n";
	//		return 0;
	//	}
	//	catch(...)
	//	{
	//		cout << "\tHandled unknown error.\n";
	//		return 1;
	//	}
	//}
	//int testFindSumOnLevel3()
	//{
	//	tests++;
	//	cout << "Testing FindSumOnLevel. Level out of range.\n";
	//	Btree* tree = nullptr;
	//	Insert(8, tree);
	//	Insert(3, tree);
	//	Insert(10, tree);
	//	try
	//	{
	//		int sum = FindSumOnLevel(tree, 3);
	//		cout << "\tDidn't catch the error.\n";
	//		return 1;
	//	}
	//	catch (std::out_of_range)
	//	{
	//		passed_tests++;
	//		cout << "\tTest passed.\n";
	//		return 0;
	//	}
	//	catch (...)
	//	{
	//		cout << "\tHandled unknown error.\n";
	//		return 1;
	//	}
	//}
	//int testFindSumOnLevel4()
	//{
	//	tests++;
	//	cout << "Testing FindSumOnLevel. Level below zero.\n";
	//	Btree* tree = nullptr;
	//	Insert(8, tree);
	//	Insert(3, tree);
	//	Insert(10, tree);
	//	try
	//	{
	//		int sum = FindSumOnLevel(tree, -3);
	//		cout << "\tDidn't catch the error.\n";
	//		return 1;
	//	}
	//	catch (std::invalid_argument)
	//	{
	//		passed_tests++;
	//		cout << "\tTest passed.\n";
	//		return 0;
	//	}
	//	catch (...)
	//	{
	//		cout << "\tHandled unknown error.\n";
	//		return 1;
	//	}
	//}
}