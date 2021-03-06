#ifndef CARDS_H
#define CARDS_H


//card type enum

typedef enum CardType { ATTACK, DEFEND, RUN } CardType;
//structure to represent a card and a node in the linked list

typedef struct Cards {
    CardType card_type;
    int   value;
   struct Cards *next;
} Card;



//function to dynamically allocate a new Card struct object and return a pointer to that struct object

Card* createCard();

//function to remove and deallocate the first node in the linked list that head is pointing at.

Card* removeCard( Card *head );

// function to add a new Card struct object to the linked list that head is pointing at.

Card* addCard( Card *head, Card *c );

//function to return the length of the linked list that head is pointing at.

int getLength( Card *head );

//function to print a single card with abbreviations: A for ATTACK, D for DEFEND, and R for RUN and their corresponding values.

void printCard( Card *head );

// function to traverse the linked list that head is pointing at. It will call printCard().

void printCards( Card *head );

// function to build a stack of cards using a linked list.

Card* buildCards( int n );

//function to act as  destructor for a linked list that head is pointing at.

Card* destroyCards( Card *head );
#endif

