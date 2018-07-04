void printSibling(Node* node)
{
   vector<int> res;
   stack<Node*> st;
   st.push(node);
   while(!st.empty())
   {
       Node* temp=st.top();
       st.pop();
       if(temp->left && !temp->right)
       res.push_back((temp->left)->data);
       else if(temp->right && !temp->left)
       res.push_back((temp->right)->data);
       
       if(temp->left)
       st.push(temp->left);
       if(temp->right)
       st.push(temp->right);
   }
   sort(res.begin(),res.end());
   auto it=res.begin();
   for(it=res.begin();it!=res.end();it++)
   {
       cout<<(*it)<<' ';
   }
   if(res.empty())
   cout<<"-1";
   res.clear();
//   cout<<endl;
}