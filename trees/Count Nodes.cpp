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
(
************************************************************/
int numNodes(TreeNode<int>*root)
{
//Edge case
if(root==NULL)
{
return 0;
}
int ans=1;
for(int i=0;i<root->children.size();i++)
{
  ans+=numNodes(root->children[i]);
}
return ans;
}
