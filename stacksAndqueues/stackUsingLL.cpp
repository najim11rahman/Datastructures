

// ******
 // Following Node class and main already created internally. You can directly use that.
 
#include<iostream>
using namespace std;


template <typename T>
class Node {
    public :
    T data;
    Node<T> *next;
    
    Node(T data) {
        this -> data = data;
        next = NULL;
    }
};

template <typename T>
class Stack {
    Node<T> *head;
    int size;       // number of elements prsent in stack
    
    public :
    
    Stack() {
        head = NULL;
        size = 0;
    }
    
    int getSize() {
        return this->size;
    }
    
    bool isEmpty() {
        if(size == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    
    void push(T element) {
        if(head == NULL) {
            head = new Node<T>(element);
            size++;
            return ;
        }

        Node<T>* newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    T pop() {
        // Return 0 if stack is empty. Don't display any other message
        if(head == NULL) {
            return 0;
        }

        Node<T> *temp = head;
        head = head->next;

        T data = temp->data;
        delete temp;
        size--;

        return data;
        
    }
    
    T top() {
        // Return 0 if stack is empty. Don't display any other message
        if(head == NULL) {
            return 0;
        }

        return head->data;
        
    }
    
  
    
};

int main() {
    
    Stack<int> st;
    
    int choice;
    cin >> choice;
    int input;
    
    while (choice !=-1) {
        if(choice == 1) {
            cin >> input;
            st.push(input);
        }
        else if(choice == 2) {
            int ans = st.pop();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 3) {
            int ans = st.top();
            if(ans != 0) {
                cout << ans << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if(choice == 4) {
            cout << st.getSize() << endl;
        }
        else if(choice == 5) {
            cout << st.isEmpty() << endl;
        }
        cin >> choice;
    }

} 
// **********


