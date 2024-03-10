#include <stdio.h>
#include <stdlib.h>

typedef int E;
struct ListNode {
    E element;
    struct ListNode * next;
};

typedef struct ListNode * Node;

void initStack(Node head){
    head->next = NULL;
}

_Bool pushStack(Node head, E element){
    Node node = malloc(sizeof(struct ListNode));   //创建新的结点
    if(node == NULL) return 0;   //失败就返回0
    node->next = head->next;   //将当前结点的下一个设定为头结点的下一个
    node->element = element;   //设置元素
    head->next = node;   //将头结点的下一个设定为当前结点
    return 1;
}

_Bool isEmpty(Node head){
    return head->next == NULL;   //判断栈是否为空只需要看头结点下一个是否为NULL即可
}

E popStack(Node head){
    Node top = head->next;
    head->next = head->next->next;
    E e = top->element;
    free(top);  //别忘了释放结点的内存
    return e;   //返回出栈元素
}

void printStack(Node head){
    head=head->next;
    while(head){
        printf("%d ",head->element);
        head=head->next;
    }
    printf("|\n");
}

int main(){
    struct ListNode head;
    initStack(&head);
    for(int i=0;i<3;++i){
        pushStack(&head,i*100);
    }
    printStack(&head);
}