//time-O(n)
//space-O(1)
int searchInLinkedList(LinkedListNode<int> *head, int k) {
     while(head!=NULL){
		 if(head->data==k)return 1;
		 head=head->next;
	 }
	 return 0;
}