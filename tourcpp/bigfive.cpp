class IntCell{
    public:
    explicit IntCell(int initialValue=0) {storedValue = new int{initialValue};}
    ~IntCell() {delete storedValue;}

    IntCell(const IntCell& rhs){   // lvalue copy using copy cnstructor
    storedValue = new int{*rhs.storedValue};
         
    }
    IntCell(IntCell&& rhs) : storedValue {rhs.storedValue}
    {rhs.storedValue = nullptr; }

    IntCell& operator= (const IntCell& rhs){
        if (this!=&rhs)
        *storedValue = *rhs.storedValue;
        return *this;

    }
    IntCell& operator=(IntCell&& rhs){
        std::swap(storedValue, rhs.storedVs)
    }

    int read() const{
        return *storedValue;
    }

    void write(int x){
        *storedValue = x;
    }

    private:
    int* storedValue;
};

//default copy. move, copy assignment, move assignment constructors and destructors 
//won't work for objects whose data memebers are pointers
// there will be memory leak
// the constructors do shallow-copy where pointer to the data member is copied 
//instead of copying the data which is being pointed 

// our implementation is given inside class

