#include <bits/stdc++.h>
using namespace std;
vector<int> levelOrder(TreeNode* root) {
        vector<int> ans; 
        
        if(root == NULL) 
            return ans; 
            
        queue<TreeNode*> q; 
        q.push(root); 
        
        while(!q.empty()) {
           
            TreeNode *temp = q.front(); 
            q.pop(); 
            
            if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right); 
                
            ans.push_back(temp->val); 
        }
        return ans; 
    }

int main() {
    
    #ifndef  ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);

    freopen("output1.txt", "w", stdout);
#endif 


}
