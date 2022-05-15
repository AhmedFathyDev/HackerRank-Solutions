
SinglyLinkedListNode *insertNodeAtHead(SinglyLinkedListNode *llist, int data)
{
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    newNode->next = llist;
    llist = newNode;
    return llist;
}