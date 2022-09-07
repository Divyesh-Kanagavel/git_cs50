// difference between lvalue and rvalue reference

//assume heeader files are there

string randomItem(const vector<string>& arr);  //returns random item from lvalue arr
//lvalue -> stored in a variable occupying memory (non volatile)
//rvalue-> temporary volatile piece of data

string randomItem( vector<string>&& arr); // returns random item from rvalue arr

vector<string> v {"hello","world"};
cout << randomItem(v) << endl;        //invokes lvalue method
cout << randomItem({"hello","world"}) << endl; // invokes rvalue method