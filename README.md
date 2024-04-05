# Binary Trees


This repository contains a group project with C language on Binary Trees. 


All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89

```c
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

### Betty coding style:

All files are written in C and follows the Betty coding style for Holberton School. For more detail, check this page:


[Betty style documentation](https://github.com/holbertonschool/Betty/wiki)

# What are Binary Trees?

Binary Trees defines as a hierarchical structure where each node has at most two children, which are known as left child and right child.

**Parent nodes:** refers to the node has two or more subordinated nodes connected to it.

**Children nodes:** refers to the nodes that are directly connected and subordinated to another node, knows as teh parent node. 

## Binary Tree visually

![Binary Tree](https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEiUiMO7gKGW7TH4iUOfmbAkOID4Mto7R3i198BROpOB5BpQ3syNmfOSEx5czDF3q4dU3tN_yo6BSHpWBBC87Zfie4G8AQ06yx03i_XnSSyNWI26UKsn8mhutSOIo9uhpsGt0uqH1QdY0_99ay593GcrF1-4xdiV57i11HjHjVMkk9cPA6SknBC-rIVKQ4VN/s320/g.jpeg)

## Project Overview

`0. New node`

## Write a function that creates a binary tree node

**prototype**
```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
```

`1. Insert left`

## Write a function that inserts a node as the left-child of another node

**prototype**
```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
```

`2. Insert right`

## Write a function that inserts a node as the right-child of another node

**prototype**
```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
```

`3. Delete`

## Write a function that deletes an entire binary tree

**prototype**
```c
void binary_tree_delete(binary_tree_t *tree)
```

`4. Is leaf`

## Write a function that checks if a node is a leaf

**prototype**
```c
int binary_tree_is_leaf(const binary_tree_t *node)
```

`5. Is root`

## Write a function that checks if a given node is a root

**prototype**
```c
int binary_tree_is_root(const binary_tree_t *node)
```

`6. Pre-order traversal`

## Write a function that goes through a binary tree using pre-order traversal

**prototype**
```c
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
```

`7. In-order traversal`

## Write a function that goes through a binary tree using in-order traversal

**prototype**
```c
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
```

`8. Post-order traversal`

## Write a function that goes through a binary tree using post-order traversal

**prototype**
```c
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
```

`9. Height`

## Write a function that measures the height of a binary tree

**prototype**
```c
size_t binary_tree_height(const binary_tree_t *tree)
```

`10. Depth`

## Write a function that measures the depth of a node in a binary tree

**prototype**
```c
size_t binary_tree_depth(const binary_tree_t *tree)
```

`11. Size`

## Write a function that measures the size of a binary tree

**prototype**
```c
size_t binary_tree_size(const binary_tree_t *tree)
```

`12. Leaves`

## Write a function that counts the leaves in a binary tree

**prototype**
```c
size_t binary_tree_leaves(const binary_tree_t *tree)
```

`13. Nodes`

## Write a function that counts the nodes with at least 1 child in a binary tree

**prototype**
```c
size_t binary_tree_nodes(const binary_tree_t *tree)
```

`14. Balance factor`

## Write a function that measures the balance factor of a binary tree

**prototype**
```c
int binary_tree_balance(const binary_tree_t *tree)
```

`15. Is full`

## Write a function that checks if a binary tree is full

**prototype**
```c
int binary_tree_is_full(const binary_tree_t *tree)
```

`16. Is perfect`

## Write a function that checks if a binary tree is perfect

**prototype**
```c
int binary_tree_is_perfect(const binary_tree_t *tree)
```

`17. Sibling`

## Write a function that finds the sibling of a node

**prototype**
```c
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
```

`18. Uncle`

## Write a function that finds the uncle of a node

**prototype**
```c
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
```







## Contributors
##### Thais Rodriguez
Holberton School, cohort 23
##### Danielys Carrasquillo
Holberton School, cohort 23

