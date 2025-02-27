#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;/* Doubly Linked List implementation */

#include<stdio.h>

#include<stdlib.h>



struct Node  {

int data;

struct Node* next;

struct Node* prev;

};



struct Node* head; // global variable - pointer to head node.



//Creates a new Node and returns pointer to it. 

struct Node* GetNewNode(int x) {

struct Node* newNode

= (struct Node*)malloc(sizeof(struct Node));

newNode->data = x;

newNode->prev = NULL;

newNode->next = NULL;

return newNode;

}



//Inserts a Node at head of doubly linked list

void InsertAtHead(int x) {

struct Node* newNode = GetNewNode(x);

if(head == NULL) {

head = newNode;

return;

}

head->prev = newNode;

newNode->next = head; 

head = newNode;

}



//Inserts a Node at tail of Doubly linked list

void InsertAtTail(int x) {

struct Node* temp = head;

struct Node* newNode = GetNewNode(x);

if(head == NULL) {

head = newNode;

return;

}

while(temp->next != NULL) temp = temp->next; // Go To last Node

temp->next = newNode;

newNode->prev = temp;

}



//Prints all the elements in linked list in forward traversal order

void Print() {

struct Node* temp = head;

printf("Forward: ");

while(temp != NULL) {

printf("%d ",temp->data);

temp = temp->next;

}

printf("\n");

}



//Prints all elements in linked list in reverse traversal order. 

void ReversePrint() {

struct Node* temp = head;

if(temp == NULL) return; // empty list, exit

// Going to last Node

while(temp->next != NULL) {

temp = temp->next;

}

// Traversing backward using prev pointer

printf("Reverse: ");

while(temp != NULL) {

printf("%d ",temp->data);

temp = temp->prev;

}

printf("\n");

}



int main() {



/*Driver code to test the implementation*/

head = NULL; // empty list. set head as NULL. 



// Calling an Insert and printing list both in forward as well as reverse direction. 

InsertAtTail(2); Print(); ReversePrint();

InsertAtTail(4); Print(); ReversePrint();

InsertAtHead(6); Print(); ReversePrint();

InsertAtTail(8); Print(); ReversePrint();



}



// P15: https://gist.github.com/mycodeschool/6878252 (C)  



// Stack - Array based implementation. 

// Creating a stack of integers. 

#include<stdio.h>



#define MAX_SIZE 101



int A[MAX_SIZE]; // integer array to store the stack 

int top = -1;  // variable to mark top of stack in array



// Push operation to insert an element on top of stack. 

void Push(int x) 

{

  if(top == MAX_SIZE -1) { // overflow case. 

printf("Error: stack overflow\n");

return;

}

A[++top] = x;

}



// Pop operation to remove an element from top of stack.

void Pop() 

{

if(top == -1) { // If stack is empty, pop should throw error. 

printf("Error: No element to pop\n");

return;

}

top--;

}



// Top operation to return element at top of stack. 

int Top() 

{

return A[top];

}



// This function will return 1 (true) if stack is empty, 0 (false) otherwise

int IsEmpty()

{

    if(top == -1) return 1;

    return 0;

}



// This function is just to test the implementation of stack. 

// This will print all the elements in the stack at any stage. 

void Print() {

int i;

printf("Stack: ");

for(i = 0;i<=top;i++)

printf("%d ",A[i]);

printf("\n");

}



int main() {

  // Code to test the implementation. 

  // calling Print() after each push or pop to see the state of stack. 

Push(2);Print();

Push(5);Print();

Push(10);Print();

Pop();Print();

Push(12);Print();

}





// P18: https://gist.github.com/mycodeschool/7207410 (C++)



/*

  C++ Program to check for balanced parentheses in an expression using stack.

  Given an expression as string comprising of opening and closing characters

  of parentheses - (), curly braces - {} and square brackets - [], we need to 

  check whether symbols are balanced or not. 

*/

#include<iostream>

#include<stack>

#include<string>

using namespace std;

// Function to check whether two characters are opening 

// and closing of same type. 

bool ArePair(char opening,char closing)

{

if(opening == '(' && closing == ')') return true;

else if(opening == '{' && closing == '}') return true;

else if(opening == '[' && closing == ']') return true;

return false;

}

bool AreParanthesesBalanced(string exp)

{

stack<char>  S;

for(int i =0;i<exp.length();i++)

{

if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')

S.push(exp[i]);

else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')

{

if(S.empty() || !ArePair(S.top(),exp[i]))

return false;

else

S.pop();

}

}

return S.empty() ? true:false;

}



int main()

{

/*Code to test the function AreParanthesesBalanced*/

string expression;

cout<<"Enter an expression:  "; // input expression from STDIN/Console

cin>>expression;

if(AreParanthesesBalanced(expression))

cout<<"Balanced\n";

else

cout<<"Not Balanced\n";

}







// P20: https://gist.github.com/mycodeschool/7702441 (C++)





/*

  Evaluation Of postfix Expression in C++ 

  Input Postfix expression must be in a desired format. 

  Operands must be integers and there should be space in between two operands.

  Only '+'  ,  '-'  , '*' and '/'  operators are expected. 

*/

#include<iostream>

#include<stack>

#include<string>



using namespace std;



// Function to evaluate Postfix expression and return output

int EvaluatePostfix(string expression);



// Function to perform an operation and return output. 

int PerformOperation(char operation, int operand1, int operand2);



// Function to verify whether a character is operator symbol or not. 

bool IsOperator(char C);



// Function to verify whether a character is numeric digit. 

bool IsNumericDigit(char C);



int main() 

{

string expression; 

cout<<"Enter Postfix Expression \n";

getline(cin,expression);

int result = EvaluatePostfix(expression);

cout<<"Output = "<<result<<"\n";

}



// Function to evaluate Postfix expression and return output

int EvaluatePostfix(string expression)

{

// Declaring a Stack from Standard template library in C++. 

stack<int> S;



for(int i = 0;i< expression.length();i++) {



// Scanning each character from left. 

// If character is a delimitter, move on. 

if(expression[i] == ' ' || expression[i] == ',') continue; 



// If character is operator, pop two elements from stack, perform operation and push the result back. 

else if(IsOperator(expression[i])) {

// Pop two operands. 

int operand2 = S.top(); S.pop();

int operand1 = S.top(); S.pop();

// Perform operation

int result = PerformOperation(expression[i], operand1, operand2);

//Push back result of operation on stack. 

S.push(result);

}

else if(IsNumericDigit(expression[i])){

// Extract the numeric operand from the string

// Keep incrementing i as long as you are getting a numeric digit. 

int operand = 0; 

while(i<expression.length() && IsNumericDigit(expression[i])) {

// For a number with more than one digits, as we are scanning from left to right. 

// Everytime , we get a digit towards right, we can multiply current total in operand by 10 

// and add the new digit. 

operand = (operand*10) + (expression[i] - '0'); 

i++;

}

// Finally, you will come out of while loop with i set to a non-numeric character or end of string

// decrement i because it will be incremented in increment section of loop once again. 

// We do not want to skip the non-numeric character by incrementing i twice. 

i--;



// Push operand on stack. 

S.push(operand);

}

}

// If expression is in correct format, Stack will finally have one element. This will be the output. 

return S.top();

}



// Function to verify whether a character is numeric digit. 

bool IsNumericDigit(char C) 

{

if(C >= '0' && C <= '9') return true;

return false;

}



// Function to verify whether a character is operator symbol or not. 

bool IsOperator(char C)

{

if(C == '+' || C == '-' || C == '*' || C == '/')

return true;



return false;

}



// Function to perform an operation and return output. 

int PerformOperation(char operation, int operand1, int operand2)

{

if(operation == '+') return operand1 +operand2;

else if(operation == '-') return operand1 - operand2;

else if(operation == '*') return operand1 * operand2;

else if(operation == '/') return operand1 / operand2;



else cout<<"Unexpected Error \n";

return -1; 

}







// P21: https://gist.github.com/mycodeschool/7867739 (C++)





/*

  Infix to postfix conversion in C++ 

  Input Postfix expression must be in a desired format. 

  Operands and operator, both must be single character.

  Only '+'  ,  '-'  , '*', '/' and '$' (for exponentiation)  operators are expected. 

*/

#include<iostream>

#include<stack>

#include<string>



using namespace std;



// Function to convert Infix expression to postfix 

string InfixToPostfix(string expression);



// Function to verify whether an operator has higher precedence over other

int HasHigherPrecedence(char operator1, char operator2);



// Function to verify whether a character is operator symbol or not. 

bool IsOperator(char C);



// Function to verify whether a character is alphanumeric chanaracter (letter or numeric digit) or not. 

bool IsOperand(char C);



int main() 

{

string expression; 

cout<<"Enter Infix Expression \n";

getline(cin,expression);

string postfix = InfixToPostfix(expression);

cout<<"Output = "<<postfix<<"\n";

}



// Function to evaluate Postfix expression and return output

string InfixToPostfix(string expression)

{

// Declaring a Stack from Standard template library in C++. 

stack<char> S;

string postfix = ""; // Initialize postfix as empty string.

for(int i = 0;i< expression.length();i++) {



// Scanning each character from left. 

// If character is a delimitter, move on. 

if(expression[i] == ' ' || expression[i] == ',') continue; 



// If character is operator, pop two elements from stack, perform operation and push the result back. 

else if(IsOperator(expression[i])) 

{

while(!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(),expression[i]))

{

postfix+= S.top();

S.pop();

}

S.push(expression[i]);

}

// Else if character is an operand

else if(IsOperand(expression[i]))

{

postfix +=expression[i];

}



else if (expression[i] == '(') 

{

S.push(expression[i]);

}



else if(expression[i] == ')') 

{

while(!S.empty() && S.top() !=  '(') {

postfix += S.top();

S.pop();

}

S.pop();

}

}



while(!S.empty()) {

postfix += S.top();

S.pop();

}



return postfix;

}



// Function to verify whether a character is english letter or numeric digit. 

// We are assuming in this solution that operand will be a single character

bool IsOperand(char C) 

{

if(C >= '0' && C <= '9') return true;

if(C >= 'a' && C <= 'z') return true;

if(C >= 'A' && C <= 'Z') return true;

return false;

}



// Function to verify whether a character is operator symbol or not. 

bool IsOperator(char C)

{

if(C == '+' || C == '-' || C == '*' || C == '/' || C== '$')

return true;



return false;

}



// Function to verify whether an operator is right associative or not. 

int IsRightAssociative(char op)

{

if(op == '$') return true;

return false;

}



// Function to get weight of an operator. An operator with higher weight will have higher precedence. 

int GetOperatorWeight(char op)

{

int weight = -1; 

switch(op)

{

case '+':

case '-':

weight = 1;

case '*':

case '/':

weight = 2;

case '$':

weight = 3;

}

return weight;

}



// Function to perform an operation and return output. 

int HasHigherPrecedence(char op1, char op2)

{

int op1Weight = GetOperatorWeight(op1);

int op2Weight = GetOperatorWeight(op2);



// If operators have equal precedence, return true if they are left associative. 

// return false, if right associative. 

// if operator is left-associative, left one should be given priority. 

if(op1Weight == op2Weight)

{

if(IsRightAssociative(op1)) return false;

else return true;

}

return op1Weight > op2Weight ?  true: false;

}









// P22: https://gist.github.com/mycodeschool/7331785 (C++)





/* Queue - Circular Array implementation in C++*/

#include<iostream>

using namespace std; 

#define MAX_SIZE 101  //maximum size of the array that will store Queue. 



// Creating a class named Queue.

class Queue

{

private:

int A[MAX_SIZE];

int front, rear; 

public:

// Constructor - set front and rear as -1. 

// We are assuming that for an empty Queue, both front and rear will be -1.

Queue()

{

front = -1; 

rear = -1;

}



// To check wheter Queue is empty or not

bool IsEmpty()

{

return (front == -1 && rear == -1); 

}



// To check whether Queue is full or not

bool IsFull()

{

return (rear+1)%MAX_SIZE == front ? true : false;

}



// Inserts an element in queue at rear end

void Enqueue(int x)

{

cout<<"Enqueuing "<<x<<" \n";

if(IsFull())

{

cout<<"Error: Queue is Full\n";

return;

}

if (IsEmpty())

{ 

front = rear = 0; 

}

else

{

    rear = (rear+1)%MAX_SIZE;

}

A[rear] = x;

}



// Removes an element in Queue from front end. 

void Dequeue()

{

cout<<"Dequeuing \n";

if(IsEmpty())

{

cout<<"Error: Queue is Empty\n";

return;

}

else if(front == rear ) 

{

rear = front = -1;

}

else

{

front = (front+1)%MAX_SIZE;

}

}

// Returns element at front of queue. 

int Front()

{

if(front == -1)

{

cout<<"Error: cannot return front from empty queue\n";

return -1; 

}

return A[front];

}

/* 

   Printing the elements in queue from front to rear. 

   This function is only to test the code. 

   This is not a standard function for Queue implementation. 

*/

void Print()

{

// Finding number of elements in queue  

int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;

cout<<"Queue       : ";

for(int i = 0; i <count; i++)

{

int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front

cout<<A[index]<<" ";

}

cout<<"\n\n";

}

};

int main()

{

/*Driver Code to test the implementation

  Printing the elements in Queue after each Enqueue or Dequeue 

*/

   Queue Q; // creating an instance of Queue. 

   Q.Enqueue(2);  Q.Print();  

   Q.Enqueue(4);  Q.Print();  

   Q.Enqueue(6);  Q.Print();

   Q.Dequeue();   Q.Print();

   Q.Enqueue(8);  Q.Print();

}







// P23: https://gist.github.com/mycodeschool/7331785 (C++)





/* Queue - Circular Array implementation in C++*/

#include<iostream>

using namespace std; 

#define MAX_SIZE 101  //maximum size of the array that will store Queue. 



// Creating a class named Queue.

class Queue

{

private:

int A[MAX_SIZE];

int front, rear; 

public:

// Constructor - set front and rear as -1. 

// We are assuming that for an empty Queue, both front and rear will be -1.

Queue()

{

front = -1; 

rear = -1;

}



// To check wheter Queue is empty or not

bool IsEmpty()

{

return (front == -1 && rear == -1); 

}



// To check whether Queue is full or not

bool IsFull()

{

return (rear+1)%MAX_SIZE == front ? true : false;

}



// Inserts an element in queue at rear end

void Enqueue(int x)

{

cout<<"Enqueuing "<<x<<" \n";

if(IsFull())

{

cout<<"Error: Queue is Full\n";

return;

}

if (IsEmpty())

{ 

front = rear = 0; 

}

else

{

    rear = (rear+1)%MAX_SIZE;

}

A[rear] = x;

}



// Removes an element in Queue from front end. 

void Dequeue()

{

cout<<"Dequeuing \n";

if(IsEmpty())

{

cout<<"Error: Queue is Empty\n";

return;

}

else if(front == rear ) 

{

rear = front = -1;

}

else

{

front = (front+1)%MAX_SIZE;

}

}

// Returns element at front of queue. 

int Front()

{

if(front == -1)

{

cout<<"Error: cannot return front from empty queue\n";

return -1; 

}

return A[front];

}

/* 

   Printing the elements in queue from front to rear. 

   This function is only to test the code. 

   This is not a standard function for Queue implementation. 

*/

void Print()

{

// Finding number of elements in queue  

int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;

cout<<"Queue       : ";

for(int i = 0; i <count; i++)

{

int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front

cout<<A[index]<<" ";

}

cout<<"\n\n";

}

};

int main()

{

/*Driver Code to test the implementation

  Printing the elements in Queue after each Enqueue or Dequeue 

*/

   Queue Q; // creating an instance of Queue. 

   Q.Enqueue(2);  Q.Print();  

   Q.Enqueue(4);  Q.Print();  

   Q.Enqueue(6);  Q.Print();

   Q.Dequeue();   Q.Print();

   Q.Enqueue(8);  Q.Print();

}







// P24: https://gist.github.com/mycodeschool/7510222 (C)





/*Queue - Linked List implementation*/

#include<stdio.h>

#include<stdlib.h>

struct Node {

int data;

struct Node* next;

};

// Two glboal variables to store address of front and rear nodes. 

struct Node* front = NULL;

struct Node* rear = NULL;



// To Enqueue an integer

void Enqueue(int x) {

struct Node* temp = 

(struct Node*)malloc(sizeof(struct Node));

temp->data =x; 

temp->next = NULL;

if(front == NULL && rear == NULL){

front = rear = temp;

return;

}

rear->next = temp;

rear = temp;

}



// To Dequeue an integer.

void Dequeue() {

struct Node* temp = front;

if(front == NULL) {

printf("Queue is Empty\n");

return;

}

if(front == rear) {

front = rear = NULL;

}

else {

front = front->next;

}

free(temp);

}



int Front() {

if(front == NULL) {

printf("Queue is empty\n");

return;

}

return front->data;

}



void Print() {

struct Node* temp = front;

while(temp != NULL) {

printf("%d ",temp->data);

temp = temp->next;

}

printf("\n");

}



int main(){

/* Drive code to test the implementation. */

// Printing elements in Queue after each Enqueue or Dequeue 

Enqueue(2); Print(); 

Enqueue(4); Print();

Enqueue(6); Print();

Dequeue();  Print();

Enqueue(8); Print();

}









// P28: https://gist.github.com/mycodeschool/44e1a9183ab0e931f729 (C++)





// Binary Search Tree - Implemenation in C++

// Simple program to create a BST of integers and search an element in it 

#include<iostream>

using namespace std;

//Definition of Node for Binary search tree

struct BstNode {

int data; 

BstNode* left;

BstNode* right;

};



// Function to create a new Node in heap

BstNode* GetNewNode(int data) {

BstNode* newNode = new BstNode();

newNode->data = data;

newNode->left = newNode->right = NULL;

return newNode;

}



// To insert data in BST, returns address of root node 

BstNode* Insert(BstNode* root,int data) {

if(root == NULL) { // empty tree

root = GetNewNode(data);

}

// if data to be inserted is lesser, insert in left subtree. 

else if(data <= root->data) {

root->left = Insert(root->left,data);

}

// else, insert in right subtree. 

else {

root->right = Insert(root->right,data);

}

return root;

}

//To search an element in BST, returns true if element is found

bool Search(BstNode* root,int data) {

if(root == NULL) {

return false;

}

else if(root->data == data) {

return true;

}

else if(data <= root->data) {

return Search(root->left,data);

}

else {

return Search(root->right,data);

}

}

int main() {

BstNode* root = NULL;  // Creating an empty tree

/*Code to test the logic*/

root = Insert(root,15);

root = Insert(root,10);

root = Insert(root,20);

root = Insert(root,25);

root = Insert(root,8);

root = Insert(root,12);

// Ask user to enter a number.  

int number;

cout<<"Enter number be searched\n";

cin>>number;

//If number is found, print "FOUND"

if(Search(root,number) == true) cout<<"Found\n";

else cout<<"Not Found\n";

}









// P33: https://gist.github.com/mycodeschool/9507131 (C++)





/* Binary tree - Level Order Traversal */

#include<iostream>

#include<queue>

using namespace std;



struct Node {

char data;

Node *left;

Node *right;

};



// Function to print Nodes in a binary tree in Level order

void LevelOrder(Node *root) {

if(root == NULL) return;

queue<Node*> Q;

Q.push(root);  

//while there is at least one discovered node

while(!Q.empty()) {

Node* current = Q.front();

Q.pop(); // removing the element at front

cout<<current->data<<" ";

if(current->left != NULL) Q.push(current->left);

if(current->right != NULL) Q.push(current->right);

}

}

// Function to Insert Node in a Binary Search Tree

Node* Insert(Node *root,char data) {

if(root == NULL) {

root = new Node();

root->data = data;

root->left = root->right = NULL;

}

else if(data <= root->data) root->left = Insert(root->left,data);

else root->right = Insert(root->right,data);

return root;

}



int main() {

/*Code To Test the logic

  Creating an example tree

                    M

   / \

  B   Q

/ \   \

A   C   Z

    */

Node* root = NULL;

root = Insert(root,'M'); root = Insert(root,'B');

root = Insert(root,'Q'); root = Insert(root,'Z'); 

root = Insert(root,'A'); root = Insert(root,'C');

//Print Nodes in Level Order. 

LevelOrder(root);

}



// P34: https://gist.github.com/mycodeschool/10016271 (C++)



/* Binary Tree Traversal - Preorder, Inorder, Postorder */

#include<iostream>

using namespace std;

 

struct Node {

char data;

struct Node *left;

struct Node *right;

};



//Function to visit nodes in Preorder

void Preorder(struct Node *root) {

// base condition for recursion

// if tree/sub-tree is empty, return and exit

if(root == NULL) return;



printf("%c ",root->data); // Print data

Preorder(root->left);     // Visit left subtree

Preorder(root->right);    // Visit right subtree

}



//Function to visit nodes in Inorder

void Inorder(Node *root) {

if(root == NULL) return;



Inorder(root->left);       //Visit left subtree

printf("%c ",root->data);  //Print data

Inorder(root->right);      // Visit right subtree

}



//Function to visit nodes in Postorder

void Postorder(Node *root) {

if(root == NULL) return;



Postorder(root->left);    // Visit left subtree

Postorder(root->right);   // Visit right subtree

printf("%c ",root->data); // Print data

}



// Function to Insert Node in a Binary Search Tree

Node* Insert(Node *root,char data) {

if(root == NULL) {

root = new Node();

root->data = data;

root->left = root->right = NULL;

}

else if(data <= root->data)

root->left = Insert(root->left,data);

else 

root->right = Insert(root->right,data);

return root;

}

 

int main() {

/*Code To Test the logic

  Creating an example tree

                    M

   / \

  B   Q

/ \   \

A   C   Z

    */

Node* root = NULL;

root = Insert(root,'M'); root = Insert(root,'B');

root = Insert(root,'Q'); root = Insert(root,'Z'); 

root = Insert(root,'A'); root = Insert(root,'C');

//Print Nodes in Preorder. 

cout<<"Preorder: ";

Preorder(root);

cout<<"\n";

//Print Nodes in Inorder

cout<<"Inorder: ";

Inorder(root);

cout<<"\n";

//Print Nodes in Postorder

cout<<"Postorder: ";

Postorder(root);

cout<<"\n";

}

// P36: https://gist.github.com/mycodeschool/9465a188248b624afdbf (C++)



/* Deleting a node from Binary search tree */

#include<iostream>

using namespace std;

struct Node {

int data;

struct Node *left;

struct Node *right;

};

//Function to find minimum in a tree. 

Node* FindMin(Node* root)

{

while(root->left != NULL) root = root->left;

return root;

}



// Function to search a delete a value from tree.

struct Node* Delete(struct Node *root, int data) {

if(root == NULL) return root; 

else if(data < root->data) root->left = Delete(root->left,data);

else if (data > root->data) root->right = Delete(root->right,data);

// Wohoo... I found you, Get ready to be deleted

else {

// Case 1:  No child

if(root->left == NULL && root->right == NULL) { 

delete root;

root = NULL;

}

//Case 2: One child 

else if(root->left == NULL) {

struct Node *temp = root;

root = root->right;

delete temp;

}

else if(root->right == NULL) {

struct Node *temp = root;

root = root->left;

delete temp;

}

// case 3: 2 children

else { 

struct Node *temp = FindMin(root->right);

root->data = temp->data;

root->right = Delete(root->right,temp->data);

}

}

return root;

}

 

//Function to visit nodes in Inorder

void Inorder(Node *root) {

if(root == NULL) return;

 

Inorder(root->left);       //Visit left subtree

printf("%d ",root->data);  //Print data

Inorder(root->right);      // Visit right subtree

}

 

// Function to Insert Node in a Binary Search Tree

Node* Insert(Node *root,char data) {

if(root == NULL) {

root = new Node();

root->data = data;

root->left = root->right = NULL;

}

else if(data <= root->data)

root->left = Insert(root->left,data);

else 

root->right = Insert(root->right,data);

return root;

}



int main() {

/*Code To Test the logic

  Creating an example tree

                    5

   / \

  3   10

/ \   \

1   4   11

    */

Node* root = NULL;

root = Insert(root,5); root = Insert(root,10);

root = Insert(root,3); root = Insert(root,4); 

root = Insert(root,1); root = Insert(root,11);



// Deleting node with value 5, change this value to test other cases

root = Delete(root,5);



//Print Nodes in Inorder

cout<<"Inorder: ";

Inorder(root);

cout<<"\n";

}

// P37: https://gist.github.com/mycodeschool/6515e1ec66482faf9d79 (C++)





/* C++ program to find Inorder successor in a BST */

#include<iostream>

using namespace std;

struct Node {

int data;

struct Node *left;

struct Node *right;

};



//Function to find some data in the tree

Node* Find(Node*root, int data) {

if(root == NULL) return NULL;

else if(root->data == data) return root;

else if(root->data < data) return Find(root->right,data);

else return Find(root->left,data);

}



//Function to find Node with minimum value in a BST

struct Node* FindMin(struct Node* root) {

if(root == NULL) return NULL;

while(root->left != NULL)

root = root->left;

return root;

}



//Function to find Inorder Successor in a BST

struct Node* Getsuccessor(struct Node* root,int data) {

// Search the Node - O(h)

struct Node* current = Find(root,data);

if(current == NULL) return NULL;

if(current->right != NULL) {  //Case 1: Node has right subtree

return FindMin(current->right); // O(h)

}

else {   //Case 2: No right subtree  - O(h)

struct Node* successor = NULL;

struct Node* ancestor = root;

while(ancestor != current) {

if(current->data < ancestor->data) {

successor = ancestor; // so far this is the deepest node for which current node is in left

ancestor = ancestor->left;

}

else

ancestor = ancestor->right;

}

return successor;

}

}

 

//Function to visit nodes in Inorder

void Inorder(Node *root) {

if(root == NULL) return;

 

Inorder(root->left);       //Visit left subtree

printf("%d ",root->data);  //Print data

Inorder(root->right);      // Visit right subtree

}

 

// Function to Insert Node in a Binary Search Tree

Node* Insert(Node *root,char data) {

if(root == NULL) {

root = new Node();

root->data = data;

root->left = root->right = NULL;

}

else if(data <= root->data)

root->left = Insert(root->left,data);

else 

root->right = Insert(root->right,data);

return root;

}

 

int main() {

/*Code To Test the logic

  Creating an example tree

                    5

   / \

  3   10

/ \   \

1   4   11

    */

Node* root = NULL;

root = Insert(root,5); root = Insert(root,10);

root = Insert(root,3); root = Insert(root,4); 

root = Insert(root,1); root = Insert(root,11);



//Print Nodes in Inorder

cout<<"Inorder Traversal: ";

Inorder(root);

cout<<"\n";



// Find Inorder successor of some node. 

struct Node* successor = Getsuccessor(root,1);

if(successor == NULL) cout<<"No successor Found\n";

else

    cout<<"Successor is "<<successor->data<<"\n";

}
