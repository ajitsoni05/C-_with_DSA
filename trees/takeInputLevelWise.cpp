//This code requires TreeNode class to be implemented.It has been provided under the trees folder.
#include<queue>
#include<vector>
#include<iostream>
TreeNode<int>* takeInputLevelWise()
{
  int rootdata;
  cout<<"Enter root data"<<endl;
  cin>>rootdata;
  TreeNode<int>* root=new TreeNode<int>(rootdata);
  queue<TreeNode<int>*> pendingNodes;
  pendingNodes.push(root);
  while(pendingNodes.size()!=0)
  {
    TreeNode<int>* front=pendingNodes.front();
    pendingNodes.pop();
    cout<<"Enter the number of children of "<<front->data<<endl;
    int numChild;
    cin>>numChild;
    for(int i=0;i<numChild;i++)
    {
      int childData;
      cout<<"Enter the data of "<<i <<"th child"<<endl;
      cin>>childData;
      TreeNode<int>*child=new TreeNode<int>(childData);
      front->children.push_back(child);
      pendingNodes.push(child);
    }
  }
}
