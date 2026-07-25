/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode list3(0);
    ListNode* main = &list3;
    while(list1 != nullptr && list2 != nullptr)
    {
    
    if(list1->val < list2->val)
    {
        main->next= list1;
        list1 = list1->next;
    }
    else
    {
        main->next = list2;
        list2 = list2->next;
    }
    main = main->next;
    }
    

        if(list1 != nullptr) 
        {
            main->next = list1;
        }
        else 
        {
            main->next = list2;
        }


return list3.next;
    }

};