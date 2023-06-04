#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int>& st , int topElement){
    if(st.empty()){
        st.push(topElement);
        return ;
    }

    if(st.top() >= topElement){
        st.push(topElement);
        return;
    }

    int toppy = st.top();
    insertSorted(st,topElement);
    st.push(toppy);
}

void sortStack(stack<int >&st){

if(st.empty()){
    return;
}

int topElement = st.top();
st.pop(); 
sortStack(st);
insertSorted(st,topElement);


    
}



int main(){

    stack<int>st ;
    st.push(10);
    st.push(8);
    st.push(7);
    st.push(5);
    
while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}





    return 0;
}