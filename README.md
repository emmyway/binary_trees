# 0x1D. C - Binary trees
`**C**`   `**Algorithm**`     `**Data Structure**`

## About
`0x1D. C- Binary trees` is one of many data structure algorithms project done in C. It covers all aspect of binary trees and it types to give clear understanding of the functionality of Binary Tree and how they can be used in effective management of data.

## Concepts Covered
- Binary trees
- Binary Search Trees
- AVL Trees
- Big O notation of these trees

## Structures/Types
### Basic Binary Tree
```C
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
}

typedef struct binary_tree_s binary_tree_t;
```
### Binary Search Tree
```C
typedef struct binary_tree_s bst_t;
```
### AVL Tree
```C
typedef struct binary_tree_s avl_t;
```
### Max Binary Heap
```C
typedef struct binary_tree_s heap_t;
```

## Examples and Types of Binary Trees
```C
  .--(098)--.   -> Full and Perfect Binary Tree
(012)     (402)

       .--(098)-------.
  .--(054)--.        .--(402)  -> Complete Binary Tree
(012)     (023)    (128)

       .-------(098)-------.
  .--(012)--.         .--(402)--.   -> Perfect Binary Tree
(006)     (056)     (256)     (512)
```

## Authors
[emmyway](https://github.com/emmyway)
[John Eric (Vulcanric)](https://github.com/Vulcanric)

