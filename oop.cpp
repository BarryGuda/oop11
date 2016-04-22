#include <iostream>
  int main(){

    std::cout<<"Hello,world!\n";
    return 0;

  }
#include <iostream>
  using namespace std;
  int main(){

    int x;
    x = 4+2;

    cout<< x / 3 << ' '<< x * 3;

    return 0;

    }

#include <iostream>
  using namespace std;

  int main(){
    int x=6;
    int y=2;

    if(x > y)
        cout<<"x is greater than y\n";
    else if(y > x)
        cout<<"y is greater than x\n";
    else
        cout<<"x and y are equal\n";

    return 0;
}

#include <iostream>
  using namespace std;

  int main(){
    int x = 6;

    switch(x){
    case 1:
        cout<<"x is 1\n";
        break;
    case 2:
    case 3:
        cout<<"x is 2 or 3\n";
        break;
    default:
        cout<<"x is not 1 , 2 or 3";


    }
}
#include <iostream>
using namespace std;

int main(){
    int x = 0;
    while(x < 10)
        x = x + 1;
    cout <<"x is"<< x << "\n";
    return 0;

}
#include <iostream>
using namespace std;

int main(){
    int x =0;
    for( x ;x < 10; x = x + 1)
        cout<< x << "\n";

    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int x = 0;
    while(x < 10){
        cout << x <<"\n";
        x = x + 1;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int x = 6;
    int y = 0;
    if(x > y) {
        cout << "x is greater than y\n";
        if(x == 6)
            cout << "x is equal to 6\n";
        else
            cout << "x is not equal to 6\n";
    }else
    cout<<" x is not greater than y\n";
    return 0;

}
#include <iostream>
  using namespace std;
  int main(){
    int x = 0;
    int y = 0;
    for(x ; x < 4; x = x + 1){
        for(y ; y < 4 ; y = y + 1)
            cout << y;
        cout << "\n";
}
return 0;
}

