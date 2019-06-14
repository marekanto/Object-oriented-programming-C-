//
//  list.h
//  lab 4
//
//  Created by User on 28.03.2019.
//  Copyright © 2019 Marek_Antoszewski. All rights reserved.
//

#ifndef LIST_H
#define LIST_H
class List{
private:
       int size;
public:
    double* array=nullptr;
    List();
    List(int sizee);
    List(List &ls);
    ~List();
    void add();
    void isempty();
    void change();
    void displaysize();
    void displayelements();
};

#endif /* LIST_H */
