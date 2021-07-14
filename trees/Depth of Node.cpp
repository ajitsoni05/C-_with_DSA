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
void printAtLevelK(TreeNode<int>*root,int k)
{
//Edge case(if root is NULL)
if(root == NULL)
{
return;
}
for(int i=0;i<root->children.size();i++)
{
printAtLevelK(root->children[i],k-1);
}
}
