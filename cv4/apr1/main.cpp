#include <iostream>


struct ListItem{
    int value;
    ListItem *next;
};
struct List{
    ListItem *head= nullptr;
    ListItem *tail = nullptr;
};
void append(List&, int);



int main() {
    List list;
    append(list, 1);
    append(list, 2);
    append(list, 3);
    append(list, 4);
    return 0;
}


void append (List &list, int value){            //nelze predat strukturu hodnotou s neinic, pointery


    auto* item=new ListItem;

    item->value=value;
    item->next= nullptr;

    if ( list.head== nullptr){
        list.head=list.tail=item;
        return;
    } /*else{
        auto* item=new ListItem;
    }*/

    list.tail->next=item;
    list.tail=item;
}