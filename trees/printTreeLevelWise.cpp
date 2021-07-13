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
#include<queue>
void printLevelWise(TreeNode<int>* root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<TreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0)
    {
        TreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";
        int numchild=front->children.size();
        for(int i=0;i<numchild;i++)
        { 
            if(i==numchild-1)
        {
            cout<<front->children[i]->data;   
        }
         else
         {
            cout<<front->children[i]->data<<",";
         }
            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
        
    }
}
