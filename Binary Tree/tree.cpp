#include "tree.h"

adrNode newNode_1301213514(infotype x) {
   return adrNode{ new Node { x, nil, nil } };
}

adrNode findNode_1301213514(adrNode root, infotype x) {
   if (!root || root->info == x)
       return root;

   if (x < root->info)
       return findNode_1301213514(root->left, x);

   return findNode_1301213514(root->right, x);
}

void insertNode_1301213514(adrNode &root, adrNode p) {
   if (!root) {
       root = p;
   } else {
       if (p->info < root->info)
           insertNode_1301213514(root->left, p);
       else
           insertNode_1301213514(root->right, p);
   }
}
void printPreOrder_1301213514(adrNode root) {
   if (root) {
       cout << root->info << " ";
       printPreOrder_1301213514(root->left);
       printPreOrder_1301213514(root->right);
   }
}

void printDescendant_1301213514(adrNode root, infotype x) {
   adrNode node = findNode_1301213514(root, x);
   if (node) {
       printPreOrder_1301213514(node->left);
       printPreOrder_1301213514(node->right);
   }
}

int sumNode_1301213514(adrNode root) {
   if (root)
       return root->info + sumNode_1301213514(root->left)
                         + sumNode_1301213514(root->right);
   return 0;
}

int countLeaves_1301213514(adrNode root) {
   if (!root->left || !root->right) {
       return 1;
   }
   return countLeaves_1301213514(root->left) + countLeaves_1301213514(root->right);
}

int heightTree_1301213514(adrNode root) {
   if (!root)
       return -1;

   int heightLeft = heightTree_1301213514(root->left);
   int heightRight = heightTree_1301213514(root->right);

   return max(heightLeft, heightRight) + 1;
}
