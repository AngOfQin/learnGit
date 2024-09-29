/*创建链表*/
struct Node {
	int data;
	struct Node *next;
};

struct Node * CreateList (int num){
	int i;
	struct Node *head = (struct Node *)malloc(sizeof(struct Node));
	struct Node *tail;
	struct Node *node;

	tail = head;
	tail->next = NULL;
	for(i=1;i<=num;i++){
		struct Node *node = (struct Node *)malloc(sizeof(struct Node));
		node->data = i;
		node->next = NULL;

		tail->next = node;
		tail = node;
	}
	return head;
}

/*遍历链表*/
void ShowList(struct Node *head)
{
	struct Node *pre;
	pre = head;
	while(pre->next != NULL){
		printf("地址:0x%x  data:%d\r\n",pre,pre->data);
		pre = pre->next;
	}
}

/*查询链表*/
struct Node * CatList(struct Node *head,int index)
{
	struct Node *indexnode;
	indexnode = head;
	while(indexnode->next != NULL){
		if(indexnode->data == index){
			return indexnode;
		}
		indexnode = indexnode->next;
	}
}
