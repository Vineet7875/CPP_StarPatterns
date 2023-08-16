#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

* * * *
* * * *
* * * *
* * * *

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

1 1 1
2 2 2
3 3 3

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=n;
        while (j>=1)
        {
            cout<<j<<" ";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

3 2 1
3 2 1
3 2 1

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

3 2 1
3 2 1
3 2 1

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    int count=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

1 2 3
4 5 6
7 8 9

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

*
* *
* * *
* * * *

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

1
2 2
3 3 3
4 4 4 4

#include<iostream>
int main(){
    using namespace std;
    int n;
    int count=1;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

1
2 3
4 5 6

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        int count=i;
        while (j<=i)
        {

            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

1
2 3
3 4 5
4 5 6 7

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        int count=i;
        while (j<=i)
        {
            cout<<count<<" ";
            count=count-1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}

1
2 1
3 2 1
4 3 2 1

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i-j+1<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

1
2 1
3 2 1
4 3 2 1

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            // cout<<char(i+char(64))<<" ";
              cout<<char('A'+i-1)<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

A A A A
B B B B
C C C C
D D D D

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char('A' + j - 1) << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

A B C
A B C
A B C

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    char count='A';
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count=count+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

A B C
D E F
G H I

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char count='A' + i - 1;
        while (j <= n)
        {
            // cout <<char(char(64)+i)<< " ";
            cout << count<< " ";
            count=count+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

A B C
B C D
C D E

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            // cout << char(char(64)+i)<<" ";
            cout << char('A'-1+i)<<" ";
            j = j + 1;
        }
        i = i + 1;
        cout<<endl;
    }

    return 0;
}

A
B B
C C C

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    char count='A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count=count+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

A
B C
D E F

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char count=char(char(64)+i);
        while (j<=i)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

A
B C
C D E

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        char count=char('A'+n-i);
        while (j<=i)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

D
C D
B C D
A B C D

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
            cout << " "<< " ";
            space = space - 1;
        }
        int j=1;
        while (j <= i)
        {
            cout << "*"<< " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

      *
    * *
  * * *
* * * *

#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter a n value"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n-i+1)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}

* * * *
* * *
* *
*

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = i-1;
        while (space)
        {
            cout << " "<< " ";
            space = space - 1;
        }
        int j=1;
        while (j <= n-i+1)
        {
            cout << "*"<< " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

* * * *
  * * *
    * *
      *

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = i-1;
        while (space)
        {
            cout << " "<< " ";
            space = space - 1;
        }
        int j=1;
        while (j <= n-i+1)
        {
            cout << i<< " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

1 1 1 1
  2 2 2
    3 3
      4

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
            cout << " "<< " ";
            space = space - 1;
        }
        int j=1;
        while (j <= i)
        {
            cout << i<< " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

      1
    2 2
  3 3 3
4 4 4 4

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = i-1;
        while (space)
        {
            cout << " "<< " ";
            space = space - 1;
        }
        int j=1;
        int count=i;
        while (j <= n-i+1)
        {
            cout << count<< " ";
            count=count+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

1 2 3 4
  2 3 4
    3 4
      4

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter a n value" << endl;
    cin >> n;
    int i = 1;
    int count=1;
    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
            cout << " "<< " ";
            space = space - 1;
        }
        int j=1;
        while (j <= i)
        {
            cout << count<< " ";
            count=count+1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

      1
    2 3
  4 5 6
7 8 9 10

#include <iostream>
int main(){
    using namespace std;
    int n;
    cout << "Enter n value";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int space=1;
        while (space<=n-i)
        {
            cout<<" "<<" ";
            space=space+1;
        }
        int j=1;
        while (j<=i-1)
        {
            cout<<j<<" ";
            j=j+1;
        }
        int k=1;
        int count=i;
        while (k<=i)
        {
            cout<<count<<" ";
            count=count-1;
            k=k+1;
        }

        i=i+1;
        cout<<endl;
    }

    return 0;
}

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter n value";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j = j + 1;
        }
        int star1 = 1;
        while (star1 <= i - 1)
        {
            cout << "*"<< " ";
            star1 = star1 + 1;
        }
        int star2 = 1;
        while (star2 <= i - 1)
        {
            cout << "*"<< " ";
            star2 = star2 + 1;
        }
        int k =  n - i + 1;
        while (k >=1)
        {
            cout << k << " ";
            k = k - 1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}

1 2 3 4 5 5 4 3 2 1 
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1


#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter n value";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space=1;
        while (space<=i-1)
        {
            cout<<" "<<" ";
            space=space+1;
        }
        int j=1;
        while (j<=n-i)
        {
            cout<<j<<" ";
            j=j+1;
        }
        int k=n-i+1;
        int count=k;
        while (k>=1)
        {
            cout<<count<<" ";
            count=count+1;
            k=k-1;
        }
        i = i + 1;
        cout << endl;
    }

    return 0;
}

1 2 3 4 5 6 7
  1 2 3 4 5
    1 2 3
      1