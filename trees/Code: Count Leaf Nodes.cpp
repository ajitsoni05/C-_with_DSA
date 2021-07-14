/************************************************************
 
    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
    
        TreeNode(T data) {
            this->data = data;
        }
    
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/
/*
Time complexity: O(N)
Space complexity: O(H)
where N is the number of nodes in the tree and
H is the height/depth of the tree
*/
int getLeafNodeCount(TreeNode<int>*root)
{
	if(root->children.size()==0)
	{
		return 1;
	}
	int count=0;
	for(int i=0;i<root->children.size();i++)
	{
		count+=getLeafNodeCount(root->children[i]);
	}
	return count;
}
