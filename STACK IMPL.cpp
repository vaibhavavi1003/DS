//VAIBHAV AGARWAL_2023510001_STACK IMPLEMENTATION

#include<iostream>
using namespace std;
int stk[50], size, ch, top, element;

class stack 
{

    public:
        void initialise()
        {
            top = -1; 
            cout<<endl<<"Enter Stack Size: ";
            cin>>size;  
        }

        void menu()
        {
            do
            {
              cout<<endl<<"Enter your choice \n 1.Push \n 2.Pop \n 3.Display \n 4.Exit"<<endl ; 
              cin>>ch;
              switch (ch)
              {
                     case 1:
                            push();
                            break;

                     case 2:
                            pop();
                            break;

                     case 3:
                            display();
                            break;

                     case 4:
                            break;

                
                     default:
                           cout<<"Enter proper choice! "<<"\n";
              }
            } while (ch!=4);
        }

        void push()
        {
            if(top == size-1)
            {
                cout<<endl<<"Stack overflow! Can't add more";
            }
            else
            {
                cout<<endl<<"Enter new element: ";
                cin>>element;
                top = top+1;
                stk[top]=element;
                cout<<endl<<"Element is inserted!";
            }
        }

        void pop()
        {
            if(top==-1)
            {
                cout<<endl<<"Underflow! Can't remove any ";
            }
            else
            {
                element = stk[top];
                top = top-1;
                cout<<endl<<element<<" is deleted ";
            }
        }

        void display()
        {
            if(top==-1)
            {
                cout<<endl<<"No elements to display";
            }
            else
            {
                cout<<"Elements in Stack are: ";
            for(int i = 0; i<=top; i++)
                    {
                        cout<<stk[i]<<"  ";
                    }
            }
        }
};

int main()
{
    stack s;
    s.initialise();
    s.menu();
    return 0;
}