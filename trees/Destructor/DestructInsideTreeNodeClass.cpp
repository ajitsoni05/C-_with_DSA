template<typename T>
#include<vector>
class TreeNode{
	T data;
	vector<TreeNode<T>*> children;
	
	TreeNode(T data)
	{
		this->data=data;
	};
	
	//Destructor
	~TreeNode()
	{
		for(int i=0;i<children.size();i++)
		{
			delete children[i];
		}
	};
