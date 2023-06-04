

#include<iostream>
using namespace std;


class Stack{
    public:
    int *arr ;
    int top ; 
    int size;

    Stack(int size){
        arr = new int[size];
        this -> size = size ;
        top = -1;
        // intially top is not intialised 
    }

    void push(int data){
        // space available 
        if(size - top > 1 ){
            top++;
            arr[top] = data;
        }else{
            // overflow 
            cout<<"stack overflow" <<endl;
        }

    }

    void pop(){
        if(top == -1){
            // underflow
            cout<<"stack underflow"<<endl;
        }
        else{
            top--;
        }
    }

    int getTop(){
        if(top == -1){
            cout<<"No element in stack";
            return 0;
        
        }
        else{

        return arr[top] ;
        }
    }

    int getSize(){
        return top+1;
    }


    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    
    Stack st(10);

    st.push(1);
    st.push(2);
    st.push(3);

    st.pop();

    cout<<st.getTop()<<endl;


    return 0;
}