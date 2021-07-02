struct Node * merge_Node(struct Node * llist1,struct Node *llist2)
{
    struct Node * s;
    if(llist1==NULL)
    {

    return llist2;
    }
    if(llist2==NULL)
    {
        return llist1;
    }
    if(llist1->data<llist2->data)
    {
        s=llist1;
        llist1=llist1->next;
    }
    else{
        s=llist2;
        llist2=llist2->next;
    }

    while(llist2 && llist2)
    {
        if(llist1->data<llist2->data)
        {   
            s->next=llist1;
            s=llist1;
            llist1=llist1->next;
        }
        else{
            s->next=llist2;
            s=llist2;
            llist2=llist2->next;
        }
    }
    if(llist1==NULL)
    {
        s->next=llist2;
    }
    if(llist2=NULL)
    {
        s->next=llist1;
    }

    return s;
}