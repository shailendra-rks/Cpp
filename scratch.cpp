#include <iostream>
using namespace std;
int main(){
    int type;
    int ara[10];
    int top = -1;
    int action;
    int push(int array[],int, int);
    int pop(int array[], int);
    int pop_Fifo(int array[], int);
    int val;
    bool hold = true;

    cout<<"Welcome to LIFO/FIFO"<<endl;
    cout<<"Press 1--LIFO, 2--FIFO"<<endl;
    cin>>type;

    while(hold){

        cout<<"press 1--Insert, 2--pop, 3--display, 4--exit"<<endl;
        cin>>action;

        if(type == 1){
            if(action == 1){
                cin>>val;
                top = push(ara, val, top);
            }
            else if(action == 2){
                top = pop(ara, top);
            }
            else if(action == 3){
                for(int i = 0; i< top+1; i++){
                    cout<<ara[i]<<" ";
                }
            }
            else{
                break;
            }
        }
        else{
            if(action == 1){
                cin>>val;
                top = push(ara, val, top);
            }
            else if(action == 2){
                top = pop_Fifo(ara, top);
            }
            else if(action == 3){
                for(int i = 0; i< top+1; i++){
                    cout<<ara[i]<<" ";
                }
            }
            else{
                break;
            }
        }
    }
}

int push(int ar[], int val, int top){
    ar[top+1] = val;
    return top + 1;
}

int pop(int ar[], int top){
    ar[top] = 0;
    return top - 1;
}

int pop_Fifo(int ar[], int top){
    for(int i = 0; i < top+1; i++){
        ar[i] = ar[i+1];
    }
    ar[top] = 0;
    return top - 1;
}
