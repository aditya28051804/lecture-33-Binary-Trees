#include<iostream>
 #include<string>
 #include<vector>
using namespace std;
 
 class node {
    public:
    int data;
    node* left; //left child 
    node* right;  //right child 

    node(int data){           // constructor 
         this->data = data;    
         left = right = NULL;
    }
 };

 static int idx = -1;  // value remain same while whole running of program 

 node* buildTree(vector<int> nodes){
                  idx++;

                  if (nodes[idx] == -1)
                  {
                    return NULL;
                  }
                  
                  node* currentNode =   new node(nodes[idx]);
                  currentNode -> right = buildTree(nodes);
                  currentNode -> left = buildTree(nodes);
                  return currentNode;
 };
 
 int main() {
             
    vector <int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root = buildTree(nodes);
    cout << "root node = " << root ->data << endl;
    cout << "left address = " << root -> left << endl;
    cout << "right address = " << root -> right << endl;

 return 0;   
}