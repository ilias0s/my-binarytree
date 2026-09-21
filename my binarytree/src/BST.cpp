#include<iostream>
#include "../include/BST.h"
bt::bt()
{
	root = nullptr;
}
void bt::add(int value)
{
	if (root == nullptr)
	{
		root = new node{ value,nullptr,nullptr};
		return;
	}
	node* current = root;

	while (current != nullptr)
	{
		if (value < current->value)
		{
			if (current->left != nullptr)
			{
				current = current->left;
				continue;
			}
			current->left = new node{ value,nullptr,nullptr };
			return;
		}
		else if (value > current->value)
		{
			if (current->right != nullptr)
			{
				current = current->right;
				continue;
			}
			current->right = new node{ value,nullptr,nullptr };
			return;
		}
		else
		{
			return;
		}

	}
}

bool bt::contains(int value)
{
	node* current = root;
	while (current != nullptr)
	{
		if (current->value == value)
			return true;
		if (value < current->value)
		{
			current = current->left;
		}
		else if (value > current->value)
		{
			current = current->right;
		}
	}
	return false;
}
int bt::min()
{
	if (root == nullptr)
	{
		throw std::runtime_error("BST is empty !");
	}
	node* current = root;
	while (current->left != nullptr)
	{
		current = current->left;
	}
	return current->value;

}
int bt::max()
{
	if (root == nullptr)
	{
		throw std::runtime_error("BST is empty !");
	}
	node* current = root;
	while (current->right != nullptr)
	{
		current = current->right;
	}
	return current->value;

}

