#ifndef BINARYTREE_H
#define BINARYTREE_H
template <class T>
class BinaryTree
{
public:
	BinaryTree();
	bool IsEmpty();
	BinaryTree(BinaryTree <T> &bt1, BinaryTree <t> &bt2);
	BinaryTree<T> LeftSubtree();
	BinaryTree<T> RightSubtree();
	T RootData();
};
#endif
