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

TreeNode<int>* maxDataNode(TreeNode<int>* root) {
   
    TreeNode <int>* maxm = root;
    for (int i = 0; i<root->children.size(); i++)
    {
        TreeNode <int>* node = maxDataNode(root->children[i]);
        if (maxm->data<node->data)
            maxm = node;
    }
	return maxm;
}
