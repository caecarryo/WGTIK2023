#include "tree.h"

int main() {
   adrNode root = NULL;

   int x[9] = {5,3,9,10,4,7,1,8,6};
   // int x[9] = {8,3,10,1,6,4,7,14,13};
   /* Tampilkan isi dari array */
   for (int i = 0; i < 64; i++) cout << "="; cout << endl;

   for (int i = 0; i < 9; i++) {
       cout << x[i] << " ";
       insertNode_1301213514(root, newNode_1301213514(x[i]));
   }

   printf("\n");

   printf("\nPre Order\t\t: ");
   /* 2. Tampilkan node dari BST secara Pre-Order */
   printPreOrder_1301213514(root);
   printf("\n");

   printf("\nDescendent of Node 9\t: ");
   /* 3. Tampilkan keturunan dari node 9*/
   printDescendant_1301213514(root, 9);
   printf("\n\n");

   printf("Sum of BST Info\t\t: %d\n", sumNode_1301213514(root));
   /* 4. Tampilkan total info semua node pada BST */
   printf("Number of Leaves\t: %d\n", countLeaves_1301213514(root));
   /* 5. Tampilkan banyaknya daun dari BST */
   printf("Height of Tree\t\t: %d\n", heightTree_1301213514(root));
    /* 4. Tampilkan Tinggi dari Tree*/


   for (int i = 0; i < 64; i++) cout << "="; cout << endl;

   return 0;
}
