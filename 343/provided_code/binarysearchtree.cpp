// stub file
// provided so that the BinarySearchTree can be compiled
// none of the functions are implemented

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree() {
    //ctor
}

template<class ItemType>
BinarySearchTree<ItemType>::~BinarySearchTree() {
    //dtor
}

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(const ItemType& rootItem) {
}

template<class ItemType>
BinarySearchTree<ItemType>::BinarySearchTree(const BinarySearchTree<ItemType>& bst) {
}

template<class ItemType>
bool BinarySearchTree<ItemType>::isEmpty() const {
}

template<class ItemType>
int BinarySearchTree<ItemType>::getHeight() const {
    return 0;
}


template<class ItemType>
int BinarySearchTree<ItemType>::getNumberOfNodes() const {
    return 0;
}

template<class ItemType>
bool BinarySearchTree<ItemType>::add(const ItemType& item) {
    return true;
}

template<class ItemType>
void BinarySearchTree<ItemType>::clear() {
}

template<class ItemType>
bool BinarySearchTree<ItemType>::contains(const ItemType& item) const {
    return true;
}

template<class ItemType>
BinaryNode<ItemType>* BinarySearchTree<ItemType>::placeNode(BinaryNode<ItemType>* subTreePtr, BinaryNode<ItemType>* newNodePtr) {
    return nullptr;
}  // end placeNode

template<class ItemType>
BinaryNode<ItemType>* BinarySearchTree<ItemType>::findNode(BinaryNode<ItemType>* subTreePtr, const ItemType& target) const {
    return nullptr;
}  // end findNode

template<class ItemType>
void BinarySearchTree<ItemType>::inorderTraverse(void visit(ItemType&)) const {
}  // end inorder

template<class ItemType>
void BinarySearchTree<ItemType>::rebalance() {
}

template<class ItemType>
bool BinarySearchTree<ItemType>::readTree(ItemType arr[], int n) {
    return true;
}


template<class ItemType>
void BinarySearchTree<ItemType>::displaySideways() const {
    sideways(rootPtr, 0);
}

template<class ItemType>
void BinarySearchTree<ItemType>::sideways(BinaryNode<ItemType>* current, int level) const {
    if (current != NULL) {
        level++;
        sideways(current->getRightChildPtr(), level);

        // indent for readability, 4 spaces per depth level
        for (int i = level; i >= 0; i--) {
            cout << "    ";
        }

        cout << current->getItem() << endl;        // display information of object
        sideways(current->getLeftChildPtr(), level);
    }
}

template<class ItemType>
bool BinarySearchTree<ItemType>::operator==(const BinarySearchTree<ItemType>& other) const {
    return true;
}

template<class ItemType>
bool BinarySearchTree<ItemType>::operator!=(const BinarySearchTree<ItemType>& other) const {
    return true;
}
