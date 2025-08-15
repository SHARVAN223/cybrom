#include <iostream>
using namespace std;
int main()
{

    // 1...
    // int num = 11;
    // (num % 2 == 0) ? cout << "even" : cout << "odd";

    // 2... aesa number jo 2 and 3 se cut jaye aur 10 and 20 ke bich me ho
    // int num = 10;
    // (num > 10 && num < 20 && num % 2 == 0 && num % 3 == 0) ? cout << "number" : cout << "invalid";

    // 4...
    // cout << "enter age:";
    // int age;
    // cin >> age;
    // cout << "enter criminal recoard";
    // int cr;
    // cin >> cr;
    // (age > 18 && cr == 0) ? cout << "eliegible" : cout << "no eligible";

    // 5...
    // cout << "enter age:";
    // int age;
    // cin >> age;
    // cout << "enter criminal recoard";
    // int cr;
    // cin >> cr;
    // (age > 18) ? (cr == 0) ? cout << "eliegible" : cout << "not eligible" : cout << "invalid";

    // 6...
    //     int pin;
    //     cout << "enter a ATM pin:";
    //     cin >> pin;
    //     (pin == 1234) ? cout << "cw" : (cout << "invalid try again:"),
    //         cin >> pin;
    //     (pin == 1234) ? cout << "cw" : (cout << "invalid password try again:"),
    //         cin >> pin;
    //     (pin == 1234) ? cout << "cw" : (cout << "card is blocked");
    //     cout << endl;

    //     cout << "enter a ATM pin:";
    //     cin >> pin;
    //     (pin == 1234) ? cout << "cw" : (cout << "invalid try again:"),
    //         cin >> pin;
    //     (pin == 1234) ? cout << "cw" : (cout << "invalid password try again:"),
    //         cin >> pin;
    //     (pin == 1234) ? cout << "cw" : (cout << "card is 1 month blocked");

    // int num;
    // cout << "enter a number";
    // cin >> num;

    // if (num > 0)
    // {
    //     cout << "+";
    // }
    // else if (num < 0)
    // {
    //     cout << "-";
    // }
    // else
    // {
    //     cout << " 0";
    // }

    // 7.
    //  int option;
    //  cout << "enter your option: ";
    //  cin >> option;

    // if (option == 1) // area of triangl
    // {
    //     int length, breadth;
    //     cin >> length >> breadth;
    //     cout << "enter your triangle :";
    //     cout << 0.5 * length * breadth;
    // }
    // else if (option == 2)
    // { // area of circle
    //     int radius;
    //     cin >> radius;
    //     cout << "enter your circle :";
    //     cout << 3.14 * radius * radius;
    // }
    // else if (option == 3) // area of rectangle
    // {
    //     int length, breadth;
    //     cin >> length >> breadth;
    //     cout << "enter your rectangle :";
    //     cout << length * breadth;
    // }
    // else if (option == 4) // area of square
    // {
    //     int side;
    //     cin >> side;
    //     cout << "enter your square :";
    //     cout << side * side;
    // }
    // else
    // {
    //     cout << "invalid";
    // }

    // 8.aman purchases geocerry item custmor 1200 and its marked pricr is 1500rs find the discount offered the shopkeeper and find balence if its a profit and loss?

    // int sp = 1200;
    // int mp = 1500;
    // int discount = mp - sp;
    // int cp (cost price);
    // cout << "enter your cost price:";
    // cin >> cp;

    // if (cp > sp)
    // {
    //     int profit = cp - sp;
    //     cout << "your profit is:" << profit;
    // }
    // else if (cp < sp)
    // {
    //     int loss = sp - cp;
    //     cout << "your loss is:" << loss;
    // }
    // else
    // {
    //     cout << "no profit no loss";
    // }

    // 9.
    //  int year;
    //  cout << "enter year:";
    //  cin >> year;
    //  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    //  {
    //      cout << "leap year";
    //  }
    //  else
    //  {
    //      cout << "not a leap";
    //  }

    // 10.  0-100 unit 10rs
    // next 100rs 20rs/unit
    // next 100rs 30rs/ unit
    // above 300 40rs/unit

    // int unit;
    // cout << "enter unit:";
    // cin >> unit;

    // if (unit > 0 && unit < 100)
    // {
    //     cout << unit * 10;
    // }
    // else if (unit > 100 && unit < 200)
    // {
    //     cout << 100 * 10 + (unit - 100) * 20;
    // }
    // else if (unit > 200 && unit < 300)
    // {
    //     cout << 100 * 10 + 100 * 20 + (unit - 200) * 30;
    // }
    // else if (unit > 300 && unit < 400)
    // {
    //     cout << 100 * 10 + 100 * 20 + 100 * 30 + (unit - 300) * 40;
    // }

    // 11.override question;
    // char option;
    // cout << "enter option:";
    // cin >> option;

    // if (option == 'a')
    // {
    //     int a = 20;
    //     int b = 30;
    //     a = a + b;
    //     b = a - b;
    //     a = a - b;
    //     cout << a << endl;
    //     cout << b;
    // }
    // else if (option = 'b')
    // {
    //     int a = 40;
    //     int b = 50;
    //     int temp;
    //     temp = a;
    //     a = b;
    //     b = temp;

    //     cout << a << endl;
    //     cout << b;
    // }
    // else
    // {
    //     cout << "invalid number";
    // }

    // 12. fahranite to celcius and celcius to fahranite
    // int temp;
    // cout << "enter temp  1.for fahranite to celcius 2.for celcius to fahranite:";
    // int option;
    // cin >> temp >> option;

    // if (option == 1)
    // {
    //     cout << (9 * temp) / 5 + 32 << "^c";
    //     }
    // else if (option == 2)
    // {
    //     cout << (5 * temp) / 9 - 32 << "^f";
    // }

    // 13. word first letter 'a' and word length>=5 so print is good string buythwey bad string
    //  string word = apple
    //  if ((word[0] == 'a') && (word.length() >= 5))
    //  {
    //      cout << "good string";
    //  }
    //  else
    //  {
    //      cout << "bad string";
    //  }

    // 14. program to check if 2 number have the same last digit
    //   eg: 32 and 47852 have the same last digit i.e 2
    // int num1 = 32;
    // int num2 = 47852;

    // if ((num1 % 10) && (num2 % 10))
    // {
    //     cout << "number have the same last digit is" << num2 % 10;
    // }
    // else
    // {
    //     cout << "number don't have the same last digit is";
    // }

    // nested if else question int option;
    // int option;
    // cout << "enter a option: 1.main 2.start 3.desert:";
    // cin >> option;

    // if (option == 1)
    // {
    //     cout << "enter food : 1.pizza 2.bruger 3.sweet";
    //     cin >> option;

    //     if (option == 1)
    //     {
    //         cout << "pizza";
    //     }
    //     else if (option == 2)
    //     {
    //         cout << "bruger";
    //     }
    //     else if (option == 3)
    //     {
    //         cout << "sweet";
    //     }
    //     else
    //     {
    //         cout << "not avliable";
    //     }
    // }
    // else if (option == 2)
    // {
    //     cout << "enter food: 1.mango 2. apple 3. pineapple";
    //     cin >> option;
    //     if (option == 1)
    //     {
    //         cout << "mango";
    //     }
    //     else if (option == 2)
    //     {
    //         cout << "apple";
    //     }
    //     else if (option == 3)
    //     {
    //         cout << "pineaapple";
    //     }
    //     else
    //     {
    //         cout << "not avliable";
    //     }
    // }
    // else if (option == 3)
    // {
    //     cout << "enter food: 1.panner 2. chicken 3. fish";
    //     cin >> option;
    //     if (option == 1)
    //     {
    //         cout << "panner";
    //     }
    //     else if (option == 2)
    //     {
    //         cout << "chicken";
    //     }
    //     else if (option == 3)
    //     {
    //         cout << "fish";
    //     }
    //     else
    //     {
    //         cout << "not avliable";
    //     }
    // }

    // else
    // {
    //     cout << "no food ";
    // }
    // return 0;

    // question 15
    //  int option;
    //  cout << "enter your mobile:";
    //  cin >> option;

    // if (option == 1)
    // {
    //     cout << "Brand: sumsung" << endl;
    //     cin >> option;
    //     if (option == 1)
    //     {
    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "4GB ram & 64GB storage" << endl;
    //         if (option == 1)
    //         {
    //             cout << "enter your mobile size:";
    //             cin >> option;
    //             cout << "mobile size: 3 inch" << endl;
    //         }
    //         if (option == 1)
    //         {
    //             cout << "enter your mobile price:";
    //             cin >> option;
    //             cout << " mobile price: 50000";
    //         }
    //     }
    //     else if (option == 2)
    //     {

    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "6GB ram & 128GB storage" << endl;
    //         if (option == 2)

    //         {
    //             cout << "enter your mobile size:";
    //             cin >> option;
    //             cout << "mobile size: 5 inc" << endl;
    //         }
    //         if (option == 2)
    //         {

    //             cout << "enter your mobile price:";
    //             cin >> option;
    //             cout << "mobile price: 100000";
    //         }
    //     }
    //     else if (option == 3)
    //     {

    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "8GB ram & 256GB storage" << endl;
    //         if (option == 3)
    //         {

    //             cout << "enter your mobile size:";
    //             cin >> option;
    //             cout << "mobile size: 7 inc " << endl;
    //         }
    //         if (option == 3)
    //         {

    //             cout << "enter your mobile price:";
    //             cin >> option;
    //             cout << "mobile price: 150000";
    //         }
    //     }
    //     else
    //     {
    //         cout << "sorry not understand";
    //     }
    // }
    // else if (option == 2)
    // {
    //     cout << "Brand: redmi" << endl;

    //     cin >> option;
    //     if (option == 1)
    //     {
    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "4GB ram & 64GB storage" << endl;
    //         if (option == 1)
    //         {
    //             cout << "enter your mobile size";
    //             cin >> option;
    //             cout << "Mobile size: 3 inc" << endl;
    //         }
    //         if (option == 1)
    //         {
    //             cout << "enter your mobile price:";
    //             cin >> option;

    //             cout << "mobile price: 30000";
    //         }
    //     }
    //     else if (option == 2)
    //     {
    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "6GB ram & 128GB storage" << endl;
    //         if (option == 2)
    //         {
    //             cout << "enter your mobile size";
    //             cin >> option;
    //             cout << "mobile size: 5 inc" << endl;
    //         }
    //         if (option == 2)
    //         {
    //             cout << "enter your mobile price:";
    //             cin >> option;
    //             cout << "mobile price: 40000";
    //         }
    //     }
    //     else if (option == 3)
    //     {
    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "8GB ram & 256GB storage" << endl;
    //         if (option == 3)
    //         {
    //             cout << "enter your mobile size";
    //             cin >> option;
    //             cout << "mobile size: 7 inc " << endl;
    //         }
    //         if (option == 3)
    //         {
    //             cout << "enter your mobile price:";
    //             cin >> option;
    //             cout << "mobile price: 50000";
    //         }
    //     }
    //     else
    //     {
    //         cout << "sorry not understand";
    //     }
    // }
    // else if (option == 3)
    // {
    //     cout << "Brand :realme" << endl;

    //     cin >> option;
    //     if (option == 1)
    //     {
    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "4GB ram & 64GB storage" << endl;
    //         if (option == 1)
    //         {
    //             cout << "enter your mobile size";
    //             cin >> option;
    //             cout << "mobile size: 3 inc" << endl;
    //         }
    //         if (option == 1)
    //         {
    //             cout << "enter your mobile price:";
    //             cin >> option;
    //             cout << "mobile price: 20000";
    //         }
    //     }
    //     else if (option == 2)
    //     {
    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "6GB ram & 128GB storage" << endl;
    //         if (option == 2)
    //         {
    //             cout << "enter your mobile size";
    //             cin >> option;
    //             cout << "mobile size: 5 inc " << endl;
    //         }
    //         if (option == 2)
    //         {
    //             cout << "enter your mobile price:";
    //             cin >> option;
    //             cout << "mobile price: 30000";
    //         }
    //     }
    //     else if (option == 3)
    //     {
    //         cout << "enter your mobile variant:";
    //         cin >> option;
    //         cout << "8GB ram & 256GB storage" << endl;
    //         if (option == 3)
    //         {
    //             cout << "enter your mobile size";
    //             cin >> option;
    //             cout << "mobile size: 7 inc" << endl;
    //         }
    //         if (option == 3)
    //         {
    //             cout << "enter your mobile price:";
    //             cin >> option;
    //             cout << "mobile price: 40000";
    //         }
    //     }
    //     else
    //     {
    //         cout << "sorry not understand";
    //     }
    // }
    // else
    // {
    //     cout << "there is no phone";
    // }

    // question 16
    //  int path;
    //  cout << "enter your source: 1.bhopal";
    //  cin >> path;

    // if (path == 1)
    // {
    //     cout << "enter next path: 2. 3 .4.\n";
    //     cin >> path;

    //     if (path == 2)
    //     {
    //         cout << "enter next path 3. 4.\n";
    //         cin >> path;
    //         if (path == 3)
    //         {
    //             cout << "enter next path: 4.\n";
    //             cin >> path;
    //             if (path == 4)
    //             {
    //                 cout << "welcome to Bihar";
    //             }
    //             else
    //             {
    //                 cout << "sorry mate! wrong path";
    //             }
    //         }
    //         else if (path == 4)
    //         {
    //             cout << "welcome to Bihar";
    //         }
    //     }
    //     else if (path == 3)
    //     {
    //         cout << "enter next path: 2. 4.\n";
    //         cin >> path;

    //         if (path == 2)
    //         {
    //             cout << "enter next path: 4.\n";
    //             cin >> path;
    //             if (path == 4)
    //             {

    //                 cout << "welcome to Bihar";
    //             }
    //         }

    //         if (path == 4)
    //         {
    //             cout << "welcome to bihar";
    //         }

    //         else
    //         {
    //             cout << "invalid path";
    //         }
    //     }
    //     else if (path == 4)
    //     {
    //         cout << "welcome to Bihar";
    //     }
    //     else
    //     {
    //         cout << "no";
    //     }
    // }

    // loop  question;

    // for (int i = 123; i <= 123; i++)
    // {
    //     cout << i << endl;

    //     if (i == 123)
    //     {
    //         cout << "one two three";
    //     }
    // }

    // sum of natural number
    // int n;
    // cout << "enter a number:";
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {

    //     sum = sum + i;
    // }
    // cout << sum;

    // factorial
    // int n;
    // cout << "enter a factorial:";
    // cin >> n;

    // int factorial = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     factorial = factorial * i;
    // }
    // cout << factorial;

    // number jisse dived hoga whi print hoga
    //  int number = 6;
    //  for (int i = 1; i <= number; i++)
    //  {
    //      if (number % i == 0)
    //      {
    //          cout << i;
    //      }
    //  }

    // int number1 = 2;
    // int number2 = 8;

    // int hcf = 0;
    // for (int i = 1; i <= number1; i++)
    // {
    //     if (number1 % i == 0 && number2 % i == 0)
    //     {
    //         hcf = i;
    //     }
    // }
    // cout << hcf;

    // int number1 = 8;
    // int number2 = 12;

    // int hcf;
    // for (int i = 1; i <= number1; i++)
    // {
    //     if (number1 % i == 0 && number2 % i == 0)
    //     {
    //         hcf = i;
    //     }
    // }

    // cout << (number1 * number2) / hcf;
}