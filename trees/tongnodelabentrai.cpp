#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left;
    node *right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};

bool check(node *root){
    if(root == NULL)
        return false;
    if(root ->left == NULL && root ->right == NULL)
        return true;
    return false;  
}
int tong(node *root){
    int ok =0;
    if(root !=NULL){
        // if(check(root ->left )){
            if(check(root ->right )){
            ok += root->right->data;
            // ok += root->left->data;
        }
        else{
            ok += tong(root->right);
            // ok += tong(root->left);
        }
        ok += tong(root ->left);
        // ok += tong(root ->right);
    }
    return ok;
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        map<int,node*>m;
        node *root=NULL;
        node *check;
        node *tmp;
        while(n--){
            int n1,n2;
            char c;
            cin>>n1>>n2>>c;
            if(m.find(n1)==m.end()){
                check = new node(n1);
                m[n1] = check;
                if(root==NULL){
                    root = check;
                }
            }
            else check = m[n1];
            tmp = new node(n2);
            if(c=='L')check->left = tmp;
            else check ->right =tmp;
            m[n2] = tmp;
        }
        cout<<tong(root)<<endl;
    }
    
}

