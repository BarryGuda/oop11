#include <iostream>

using namespace std;

int main()
{
    const char* str="Hello world!";
    cout<< str<<"\n";
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i < n;n--)
        cout<<"HELLO,WORLD !\n";

    return 0;
}


#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 0;
    while(i < n){
        cout<<"HELLO,WORLD !\n";
        n--;
    }
    return 0;
}


#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 0;
    do{
        cout<<"HELLO,WORLD !\n";
         n--;
    }
    while(i < n);

    return 0;
}

 #include <iostream >

 using namespace std;

 int main()
  {
    int arg1;
    arg1 = -1;//Doesnt compile cause of conflicting declarations
    int x, y, z;
    char myDouble = ’5 ’;
    char arg1 = ’A ’;
    cout << arg1 << "\n";
    return 0;
 }

 #include <iostream >

 using namespace std;

 int main()
  {
    int arg1;
    arg1 = -1;
    { //Program compiles outputs an A message
        char arg1 = 'A';
        cout<< arg1 <<"\n";

    }
    return 0;
 }

 #include <iostream >

 using namespace std;

 int main()
  {
    int arg1;
    arg1 = -1;
    {
        char arg1 ='A';
        cout<< arg1<<"\n";
        //Inner declaration is used
    }
    return 0;
 }

 #include <iostream >

 using namespace std;

 int main()
  {
    int arg1;
    arg1 = -1;
    {
        char arg1 ='A';
        //the outer declaration is used
        }
    cout<< arg1<<"\n";
    return 0;
 }

 #include <iostream >

 using namespace std;

 int main()
  {
    int N;
    cout<<"Please Enter N: ";
    cin >> N;
    int acc = 0;
    cin >> acc;
    int maxVal = acc;
    int minVal = acc;

    for(int i = 1 ; i < N; ++i)
    {
        int a;
        cin>>a;
        acc+=a;
        if(a<minVal)
        {
            minVal = a;
        }
        if(a>maxVal)
        {
            maxVal = a;
        }
    }
    cout<<"Mean : "<<(double)acc/N<<"\n";
    cout<<"Max : "<<maxVal<<"\n";
    cout<<"Min : "<<minVal<<"\n";
    cout<<"Range : "<<(maxVal-minVal)<<"\n";
    return 0;
 }



 #include <iostream >

 using namespace std;

 int main()
  {
    int N;
    cin>>N;
    for(int i =2;N > 0;++i)
    {
        bool isPrime =true;
        for(int j=2; j<i ;++j)
        {
            if(i % j ==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
        {
            --N;
            cout << i <<"\n";
        }
    }
    return 0;
 }



  #include <iostream >

 using namespace std;

 int main()
  {
    while(1){
        int N;
        cin>>N;
        cout<<((N%5==0&&N>0) ? N/5 : -1)<<"\n";
    }


    return 0;
 }



 #include <iostream >

 using namespace std;

 int main()
  {
    while(1){
          int N;
          cin >> N;
    if(N % 5 > 0){
            cout<<"-1\n";
            continue;

            }
    cout<<N/5<<"\n";


    return 0;
 }
  }


 #include <iostream >

 using namespace std;

 int main()
  {
    while(1){
          int N;
          cin >> N;
    if(N % 5 > 0){
            cout<<"-1\n";
            continue;

            }
    if(N == -1){
            break;

    }
    cout<<N/5<<"\n";
}
   cout<<"Good,Bye!\n";
  }


 #include <iostream >

 using namespace std;
 long long accumulator = -1;

 int main(){
     int number;
     cout<<"Enter Number: ";
     cin>>number;
     if(number < 0){
        cout<< "No negative numbers allowed !\n";
        return 1;
     }
     if(number > 20){
        cout<< "Program will not produce the correct results\n";

     }
     for(;number >0;accumulator*=number--);
     cout<< "The factorial of "<<number << "is" << accumulator << "\n";

     return 0;

 }

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<< "Enter a number: ";
    cin>>number;
    switch(number)
    {
        case 0:
        case 1:
           cout << "1\n";
           break;
        case 2:
           cout<< "2\n";
           break;
        case 3:
           cout<< "6\n";
           break;
        case 4:
           cout<< "24\n";
           break;
        case 5:
           cout<< "120\n";
           break;
        case 6:
           cout<< "720\n";
           break;
        case 7:
           cout<< "5040\n";
           break;
        case 8:
           cout<<"40320\n";
           break;
        case 9:
           cout<<"362880\n";
           break;
        case 10:
            cout<<"3628800\n";
            break;
        default :
            cout<<"Input not supported\n";
            break;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    short number;
    cout<< "Enter number: ";// -1 is entered output is 1
                            // which is incorrect.
    cin>> number;
                 //it fails at 17 as it outputs a negative number
    cout<< "The factorial of "<<number <<" is";
    int accumulator = 1;
    for(; number > 0; accumulator*=number--);
    cout<<accumulator<< ".\n";
     // 0,1,2,9,10 when entered
     // 1,1,2,362880,3628800 output respectively
    return 0;

}







