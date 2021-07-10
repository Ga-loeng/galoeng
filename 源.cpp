#include<iostream>
#include<string>


//Build linked list here
/*struct LNode {
	int data;
	LNode* next;
};
struct DNode {//双指针链表
	int data;
	DNode* prior;
	DNode* next;
};*/


//Build a Satck here
/*typedef int SElemtype;
struct Stack {
	SElemtype* base;
	SElemtype* top;
	int stacksize;
};
constexpr auto STACK_INIT_SIZE = 100;//存储空间初始分配量
constexpr auto STACKINCREMENT = 10;//存储空间分配增量*/

//链队列
/*struct QNode {
	QElemtype data;
	struct QNode* next;
};
struct LinkQueue {
	QNode* front;
	QNode* rear;
};
typedef int QElemtype;*/

//稀疏矩阵 三元组顺序表
constexpr auto MAXSIZE = 12500;
typedef int ElemType;
struct Triple {
	int i, j;
	ElemType e;
};
struct TSMatrix {
	Triple data[MAXSIZE + 1];
	int mu, nu, tu;
};

typedef int Status;
constexpr auto TRUE = 1;
constexpr auto FALSE = 0;
constexpr auto OK = 1;
constexpr auto ERROR = -1;
constexpr auto INFEASINLE = -1;
constexpr auto OVER_FLOW = -2;


int main() {
	//---------------------------------------------------算法2.1------------------------------------------------------
	/*std::vector<int> LA = { 3, 5, 8, 11 };
	std::vector<int> LB = { 2, 6, 8, 9, 11, 15, 20 };
	std::vector<int> LC;
	std::vector<int>::iterator p;
	std::vector<int>::iterator q;
	for (p = LA.begin(), q = LB.begin(); p != LA.end() && q != LB.end(); ) {
		if (*p <= *q) LC.push_back(*p++);
		else LC.push_back(*q++);
	}
	while (p != LA.end()) LC.push_back(*p++);
	while (q != LB.end()) LC.push_back(*q++);
	for (auto x : LC) {
		std::cout << x << std::endl;
	}*/

	//---------------------------------------------------算法2.4------------------------------------------------------
	/*void delete_2_4(int& L, int i);
	int p[10] = { 4,23,34,41,55,96,47,28,21,27 };
	int length = 10;
	int* arr = new int[length];
	int i = 0;
	for (arr = p;i < length;i++) {
		*(arr + i) = *(p + i);
	}
	--length;
	delete_2_4(*arr, 5);
	for (int i = 0;i < length;i++) {
		std::cout << *(arr + i) << std::endl;
	}
	arr = nullptr;delete[] arr;*/

	//--------------------------------------------------算法2.8-算法2.11-----------------------------------------------------
	/*LNode* ListCreate(int);
	void ListDisplay(LNode*);
	int NodeGet(LNode*, int);
	LNode* NodeInsert(LNode*, int, int);
	LNode* NodeDelete(LNode*, int);
	LNode* NodeMerge(LNode*, LNode*);

	LNode* head = new LNode;
	head = ListCreate(5);
	LNode* head1 = new LNode;
	head1 = ListCreate(5);
	putchar('\n');
	ListDisplay(head);
	putchar('\n');
	std::cout << NodeGet(head, 3) << std::endl;
	putchar('\n');
	head = NodeInsert(head, 2, 100);
	ListDisplay(head);
	putchar('\n');
	NodeDelete(head, 4);
	ListDisplay(head);
	putchar('\n');
	head = NodeMerge(head, head1);
	ListDisplay(head);
	head = nullptr;
	delete head;*/

	//-----------------------------------------------------算法2.18-------------------------------------------------------
	/*DNode* DNodeCreate(int);
	DNode* AppendNode(DNode*, int);
	DNode* DListInsert(DNode*, int, int);
	DNode* head = DNodeCreate(0);//生成表头，表头数据为0
	for (int i = 1; i < 10; i++) {//添加9个节点，数据为1到9
		head = AppendNode(head, i);
	}
	DListInsert(head, 3, 100);
	std::cout << head->next->next->next->data;*/

	//-----------------------------------------------------算法3.1-------------------------------------------------------
	/*Status InitStack(Stack & S);
	void TentoOct(Stack S, Elemtype num);
	Stack S;
	InitStack(S);
	TentoOct(S, 1348);*/

	/*Status InitStack(Stack & S);
	Stack S;
	InitStack(S);
	Status ValidityUrgent(std::string load);
	std::string a = "[([][])]";
	std::cout << ValidityUrgent(a);*/

	//-----------------------------------------------------算法3.2-------------------------------------------------------
	/*void LineEdit();
	LineEdit();*/

	//-----------------------------------------------------算法4.5-------------------------------------------------------
	/*int Index(std::string S, std::string T, int pos = 0);
	std::cout << Index("adghisa", "ad", 2);*/

	//-----------------------------------------------------算法4.6-------------------------------------------------------
	/*void getNext(std::string T, int next[]);
	int KMPIndex(std::string S, std::string T, int next[], int pos = 0);
	std::string S = "ababcabcacbab";
	std::string T = "abcac";
	int next[6];
	getNext(T, next);
	std::cout << KMPIndex(S, T, next);*/

	
	return 0;
}
//------------------------------------------------------算法2.4------------------------------------------------------
/*void delete_2_4(int& L, int i) {
//	int* p = &L + i - 1;
//	int* q = &L + 10 - 1;
//	for (;p <= q;p++) {
//		*p = *(p + 1);
//	}
}*/

//-----------------------------------------------------算法2.8-2.11-----------------------------------------------------
/*LNode* ListCreate(int n) {
	LNode* head = new LNode;
	head->next = nullptr; 
	LNode* p1 = head;
	std::cout << "please enter " << n << " data:\n";
	for (int i = 0;i < n;i++) {
		LNode* p2 = new LNode;
		std::cin >> p2->data;
		p1->next = p2;
		p1 = p2;
		p2->next = nullptr;
	}
	p1 = nullptr;
	delete p1;
	return head;
}

void ListDisplay(LNode* head) {
	LNode* p = head;
	while (p->next != nullptr) {
		p = p->next;
		std::cout << p->data << std::endl;
	}
	p = nullptr;
	delete p;
}

int NodeGet(LNode* head, int pos) {
	LNode* p = head;
	int i = 0;
	while (p && i < pos) {
		p = p->next;
		++i;
	}
	if (!p || i > pos) {
		std::cout << "get fail\n";
		return -111111;
	}
	else return p->data;
}*/

//-----------------------------------------------------算法2.8-------------------------------------------------------
/*LNode* NodeInsert(LNode* head, int pos, int new_data) {
	LNode* p;
	LNode* s = new LNode;
	p = head;
	int i = 0;
	while (p && i < pos - 1) {//要插入到第pos个节点，则要先寻找到第pos-1个节点
		p = p->next;
		++i;
	}
	if (!p || i > pos - 1) {
		std::cout << "insert fail\n";
		return head;
	}
	s->data = new_data;
	s->next = p->next;
	p->next = s;
	p = nullptr;s = nullptr;
	delete p, s;
	return head;
}*/

//-----------------------------------------------------算法2.9-------------------------------------------------------
/*LNode* NodeDelete(LNode* head, int pos) {
	LNode* p = head;
	int i = 0;
	while (p && i < pos - 1) {//要删除第pos个元素，先找到第pos-1个元素
		p = p->next;
		++i;
	}
	if (!p || i > pos - 1) {
		std::cout << "delete fail\n";
		return head;
	}
	p->next = p->next->next;
	p = nullptr;
	delete p;
	return head;
}*/

//-----------------------------------------------------算法2.11-------------------------------------------------------
/*LNode* NodeMerge(LNode* head1, LNode* head2) {//合并两个有序链表
	LNode* p1, * p2, * p3, * head3 = new LNode;
	p1 = head1->next;
	p2 = head2->next;
	head3 = p3 = head1;
	while (p1 && p2) {
		if (p1->data <= p2->data) {
			p3->next = p1;
			p3 = p1;
			p1 = p1->next;
		}
		else {
			p3->next = p2;
			p3 = p2;
			p2 = p2->next;
		}
	}
	p3->next = p1 ? p1 : p2;
	p1 = p2 = nullptr;
	delete p1, p2;
	return head3;
}*/

//-----------------------------------------------------算法2.18-------------------------------------------------------
/*//创建一个data为data的节点
DNode* DNodeCreate(int data) {
	DNode* pnode = new DNode;
	pnode->data = data;
	pnode->next = pnode->prior = nullptr;
	return pnode;
}

//创建双链表
DNode* ListDNodeCreate(int head) {
	DNode* pnode = new DNode;
	pnode->data = head;
	pnode->prior = pnode->next = pnode;
	return pnode;
}

//插入新结点，总是在表尾插入，返回表头结点
DNode* AppendNode(DNode* head, int data) {
	DNode* node = DNodeCreate(data);
	DNode* p = head;
	while (p->next != nullptr){
		p = p->next;
	}
	p->next = node;
	node->prior = p;
	return head;
}

DNode* DListInsert(DNode* head, int pos, int data) {
	DNode* p = head;
	int i = 0;
	while (p && i < pos) {//自己写的,可能有问题、不规范，找到第pos个元素
		p = p->next;
		++i;
	}
	DNode* s = new DNode;
	s->data = data;
	if (p) {
		s->prior = p->prior;
		p->prior->next = s;
		s->next = p;
		p->prior = s;
	}
	return head;
}

DNode* DListDelete(DNode* head, int pos) {
	DNode* p = head;
	int i = 0;
	while (p && i < pos) {//自己写的,可能有问题、不规范，找到第pos个元素
		p = p->next;
		++i;
	}
	if (p) {
		p->prior->next = p->next;
		p->next->prior = p->prior;
	}
	p = nullptr;
	delete p;
	return head;
}*/

//-----------------------------------------------------算法3.1-------------------------------------------------------
//Functions about Stack
/*Status InitStack(Stack& S) {
	//构造一个空栈
	S.base = (SElemtype*)malloc(STACK_INIT_SIZE * sizeof(SElemtype));//can not use 'new'!!!
	if (!S.base) return OVER_FLOW;
	S.top = S.base;
	S.stacksize = STACK_INIT_SIZE;
	return OK;
}//InitStack

//若非空栈，用e返回S的栈顶元素
Status GetTop(Stack S, SElemtype& e) {
	if (S.top == S.base) return ERROR;
	e = *(S.top - 1);
	return OK;
}//GetTop

Status Push(Stack& S, SElemtype e) {
	if (S.top - S.base >= S.stacksize) {//栈满，追加存储空间
		S.base = (SElemtype*)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(SElemtype));
		if (!S.base) exit(OVER_FLOW);
		S.top = S.base + S.stacksize;
		S.stacksize += STACKINCREMENT;
	}
	*S.top++ = e;
	return OK;
}

//删除栈顶元素
Status Pop(Stack& S, SElemtype& e) {
	if (S.top == S.base) return ERROR;
	e = *--S.top;
	return OK;
}

Status StackEmpty(Stack S) {
	if (S.base == S.top) {
		return TRUE;
	}
	else return FALSE;
}

Status ClearStack(Stack& S) {
	SElemtype e;
	while (S.base != S.top) {
		Pop(S, e);
	}
	return OK;
}*/

//-----------------------------------------------------算法3.1-------------------------------------------------------
/*void TentoOct(Stack S, Elemtype num) {
	//InitStack(S);
	while (num != 0) {
		Push(S, num % 8);
		num /= 8;
	}
	while (!StackEmpty(S)) {
		Elemtype e;
		Pop(S, e);
		std::cout << e;
	}
}*/

/*Elemtype pos(char sym) {
	char symbols[] = { '(','[','{',')',']','}' };
	for (int i = 0;i < 6;++i) {
		if (sym == symbols[i]) return i;
	}
}

Status ValidityUrgent(std::string load) {
	if (load.length() % 2 != 0) return FALSE;
	Stack S;
	InitStack(S);
	int i = 0;
	Elemtype e;
	while (i < load.length()) {
		Push(S, pos(load[i]));
		if ((S.top - 1) != S.base) {
			if (*(S.top - 1) == (*(S.top - 2) + 3)) {
				Pop(S, e);
				Pop(S, e);
			}
		}
		++i;
	}
	if (StackEmpty(S)) return TRUE;
	else return FALSE;
}*/

//-----------------------------------------------------算法3.2-------------------------------------------------------
/*void LineEdit() {
	Stack S;
	InitStack(S);
	Elemtype ch = getchar();
	Elemtype e;
	while (ch != '\n') {
		switch (ch) {
		case '#':Pop(S, e);break;
		case '@':ClearStack(S);break;
		default:Push(S, ch);
		};
		ch = getchar();
	}
	while (!StackEmpty(S)) {
		int e;
		Pop(S, e);
		char ch = e;
		std::cout << ch;
	}
}//LineEdit*/

//-----------------------------------------------------算法3.4-------------------------------------------------------
//Functions about Queue
/*Status InitQueue(LinkQueue& Q) {
	Q.front = Q.rear = (QNode*)malloc(sizeof(QNode));
	if (!Q.front) return OVER_FLOW;
	Q.front->next = nullptr;
	return OK;
}

Status DestroyQueue(LinkQueue& Q) {
	while (Q.front) {
		Q.rear = Q.front->next;
		free(Q.front);
		Q.front = Q.rear;
	}
	return OK;
}

Status EnQueue(LinkQueue& Q, QElemtype e) { // 只能队尾加入新元素
	QNode* p = (QNode*)malloc(sizeof(QNode));
	if (!p) return OVER_FLOW;
	p->data = e;
	p->next = nullptr;
	Q.rear->next = p;
	Q.rear = p;
}

Status DeQueue(LinkQueue& Q, QElemtype e) { // 只能删除队头元素
	if (Q.front == Q.rear) return ERROR;
	QNode* p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if (Q.rear == p) Q.rear = Q.front;
	free(p);
	return OK;
}*/

//-----------------------------------------------------算法4.5-------------------------------------------------------
/*int Index(std::string S, std::string T, int pos = 0) {
	int i = pos, j = 1;
	while (S[i] != '\0' && T[j] != '\0') {
		if (S[i] == T[j]) {
			++i;
			++j;
		}
		else {
			i = i - j + 2;
			j = 1;
		}
	}
	if (T[j] == '\0') return i - T.length();
	else return -1;
}*/

//-----------------------------------------------------算法4.6-------------------------------------------------------
//KMP algorithm
/*void getNext(std::string T, int next[]) {
	int i = 1;
	next[1] = 0;
	int j = 0;
	while (i < T.length()) {
		if (j == 0 || T[i] == T[j]) {
			++i;
			++j;
			if (T[i] != T[j]) {
				next[i] = j;
			}
			else {
				next[i] = next[j];
			}
		}
		else j = next[j];
	}
}

int KMPIndex(std::string S, std::string T, int next[], int pos = 0) {
	int i = pos, j = 1;
	while (S[i] != '\0' && T[j] != '\0') {
		if (j == 0 || S[i] == T[j]) {
			++i;
			++j;
		}
		else {
			j = next[j];
		}
	}
	if (T[j] == '\0') return i - T.length();
	else return -1;
}*/

//-----------------------------------------------------算法5.1-------------------------------------------------------
/*Status TransposeSMatrix(TSMatrix M, TSMatrix& T) {
	T.mu = M.nu;
	T.nu = M.mu;
	T.tu = M.tu;
	if (T.tu) {
		int q = 1;
		for (int col = 1; col <= M.nu; ++col) {
			for (int p = 1; p <= M.tu; ++p) {
				if (col == M.data[p].j) {
					T.data[q].i = M.data[p].j;
					T.data[q].j = M.data[p].i;
					T.data[q].e = M.data[p].e;
					++q;
				}
			}
		}
	}
	return OK;
}*/

/*Status FastTransposeSMatrix(TSMatrix M, TSMatrix& T) {
	T.mu = M.nu;
	T.nu = M.mu;
	T.tu = M.tu;
	int* num = new int[M.nu + 1];
	if (T.tu) {
		for (int col = 1; col <= M.tu; ++col) {
			num[col] = 0;
		}
		for (int t = 1; t <= M.tu; ++t) {
			++num[M.data[t].j];
		}
		int* cpot = new int[M.nu + 1];
		cpot[1] = 1;
		for (int col = 2; col <= M.nu; ++col) {
			cpot[col] = cpot[col - 1] + num[col - 1];
		}
		for (int p = 1; p <= M.nu; ++p) {
			int col = M.data[p].j;
			int q = cpot[col];
			T.data[q].i = M.data[p].j;
			T.data[q].j = M.data[p].i;
			T.data[q].e = M.data[p].e;
			++cpot[col];
		}
	}
	return OK;
}*/
