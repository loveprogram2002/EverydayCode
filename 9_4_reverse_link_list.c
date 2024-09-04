/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 * 
 * @param head ListNode类 
 * @return ListNode类
 */
struct ListNode* ReverseList(struct ListNode* head ) {
    // write code here
    struct ListNode* rev_head = NULL;// 指向反转链表的表头
    struct ListNode* cur = head;
    struct ListNode* next = head->next;

    while (cur != NULL)
    {
        next = cur->next; // 记录当前节点的下一个节点
        cur->next = rev_head;
        rev_head = cur;  
        cur = next; // 指向下一个节点
    }

    return rev_head;
}