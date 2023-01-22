#include "MutantStack.hpp"
#include <iostream>
#include <list>

void test_subject( void )
{
	std::cout << "======= MutantStack test subject =====" << std::endl;
	MutantStack<int>	mstack;
	std::cout << "empty()\t" << mstack.empty() << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << "empty()\t" << mstack.empty() << std::endl;
	std::cout << "top()\t" << mstack.top() << std::endl;
	std::cout << "size()\t" << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "top()\t" << mstack.top() << std::endl;
	std::cout << "size()\t" << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "======================================" << std::endl << std::endl;
}

void test_construct_iter( void )
{
	std::cout << "===== MutantStack test construct =====" << std::endl;
	MutantStack<int>	ms0;
	ms0.push(10);
	ms0.push(20);
	ms0.push(30);
	ms0.push(40);
	ms0.push(50);
	MutantStack<int>	ms1(ms0);
	MutantStack<int>	ms2 = ms1;
	std::cout << "ms0 top()\t" << ms0.top() << std::endl;
	std::cout << "ms0 size()\t" << ms0.size() << std::endl;
	std::cout << "ms1 top()\t" << ms1.top() << std::endl;
	std::cout << "ms1 size()\t" << ms1.size() << std::endl;
	std::cout << "ms2 top()\t" << ms2.top() << std::endl;
	std::cout << "ms2 size()\t" << ms2.size() << std::endl;

	std::cout << "===== MutantStack test iter ==========" << std::endl;

	std::cout << "ms0 with begin() and end()" << std::endl;
	for (MutantStack<int>::iterator it = ms0.begin() ; it != ms0.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "ms1 with cbegin() and cend()" << std::endl;
	for (MutantStack<int>::const_iterator it = ms0.cbegin() ; it != ms0.cend(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "ms2 with rbegin() and rend()" << std::endl;
	for (MutantStack<int>::reverse_iterator it = ms0.rbegin() ; it != ms0.rend(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "ms1 with crbegin() and crend()" << std::endl;
	for (MutantStack<int>::const_reverse_iterator it = ms0.crbegin() ; it != ms0.crend(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "increment decrement" << std::endl;
	MutantStack<int>::iterator it1 = ms0.begin();
	MutantStack<int>::iterator ite1 = ms0.end();
	std::cout << *(++it1) << ' ';
	std::cout << *(--it1) << ' ';
	--ite1;
	std::cout << *(--ite1) << ' ';
	std::cout << *(++ite1) << ' ';
	std::cout << std::endl;

	MutantStack<int>::const_iterator it2 = ms0.cbegin();
	MutantStack<int>::const_iterator ite2 = ms0.cend();
	std::cout << *(++it2) << ' ';
	std::cout << *(--it2) << ' ';
	--ite2;
	std::cout << *(--ite2) << ' ';
	std::cout << *(++ite2) << ' ';
	std::cout << std::endl;

	MutantStack<int>::reverse_iterator it3 = ms0.rbegin();
	MutantStack<int>::reverse_iterator ite3 = ms0.rend();
	std::cout << *(++it3) << ' ';
	std::cout << *(--it3) << ' ';
	--ite3;
	std::cout << *(--ite3) << ' ';
	std::cout << *(++ite3) << ' ';
	std::cout << std::endl;

	MutantStack<int>::const_reverse_iterator it4 = ms0.crbegin();
	MutantStack<int>::const_reverse_iterator ite4 = ms0.crend();
	std::cout << *(++it4) << ' ';
	std::cout << *(--it4) << ' ';
	--ite4;
	std::cout << *(--ite4) << ' ';
	std::cout << *(++ite4) << ' ';
	std::cout << std::endl;
	std::cout << "======================================" << std::endl << std::endl;
}

int main( void )
{
	test_subject();
	test_construct_iter();
	return 0;
}