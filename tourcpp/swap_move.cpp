// Assume all header files are already present

void swap(double& x, double& y){          //works fine with smaller types
    double temp = x;
    x = y;
    y = temp;
} 

//with larger types like vector, it is expensive

void swap(vector<string>& x, vector<string>& y){
    vector<string> temp = x;
    x = y;
    y = temp;
} // works but costly

// if there are rvalues and the object's class supports moving, the copying could be avoided


//moving the rvalues around

void swap(vector<string>& x , vector<string>& y){
    vector<string> temp = static_cast<vector<string>&& >(x);
    x = static_cast<vector<string>&& >(y);
    y = static_cast<vector<string>&& >(temp);
}

// could be done with standard library's std::swap function which makes use of std::move, which makes object suitable enough to be moved

void swap(vector<string>& x, vector<string>& y){
    vector<string> temp = std::move(x);
    x = std::move(y);
    y = std::move(temp);
}