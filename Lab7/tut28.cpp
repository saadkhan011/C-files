#include<iostream>
using namespace std;
int main()
{
    int sec1, sec2, sec3, sec4, sec5, sec6;
    cout << "please enter first section num : "<<endl;
    cin >> sec1;
    cout << "please enter second  sectioon num : "<<endl;
    cin >> sec2;
    cout << "please enter third section num : "<<endl;
    cin >> sec3;
    cout << "please enter fourth section num : "<<endl;
    cin >> sec4;
    cout << "please enter fifth section num : "<<endl;
    cin >> sec5;
    cout << "please enter sixth section num : "<<endl;
    cin >> sec6;
    if(sec1==0,sec2==0,sec3==0,sec4==0,sec5==0,sec6==0){
         cout << "invalid input";
    }
    if(sec1>sec2){
        if(sec1>sec3){
            if(sec1>sec4){
                if(sec1>sec5){
                    if(sec1>sec6){
                        cout << "Section 1 has won the game";
                    }
                }
            }
        }
    }
    if(sec2>sec1){
        if(sec2>sec3){
            if(sec2>sec4){
                if(sec2>sec5){
                    if(sec2>sec6){
                        cout << "Section 2 has won the game";
                    }
                }
            }
        }
    }
    if(sec3>sec2){
        if(sec3>sec1){
            if(sec3>sec4){
                if(sec3>sec5){
                    if(sec3>sec6){
                        cout << "Section 3 has won the game";
                    }
                }
            }
        }
    }
    if(sec4>sec2){
        if(sec4>sec1){
            if(sec4>sec3){
                if(sec4>sec5){
                    if(sec4>sec6){
                        cout << "Section 4 has won the game";
                    }
                }
            }
        }
    }
    if(sec5>sec2){
        if(sec5>sec1){
            if(sec5>sec4){
                if(sec5>sec3){
                    if(sec5>sec6){
                        cout << "Section 5 has won the game";
                    }
                }
            }
        }
    }
    if(sec6>sec2){
        if(sec6>sec1){
            if(sec6>sec4){
                if(sec6>sec3){
                    if(sec6>sec5){
                        cout << "Section 6 has won the game";
                    }
                }
            }
        }
    }
    return 0 ;
}