#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
    while (head){
        while (head->next->val==head->val){
            head->next=head->next->next;
        }//指向下一个不重复元素
        head=head->next;
    }
    
}
void main()
{
    

}
