class IntCell{
    public:
    IntCell(){
        storedValue=0;
    }

    IntCell(int initialValue){
        storedValue = initialValue;
    }

    int readValue(){
        return storedValue;
    }
    void write(int x){
        storedValue = x;
    }

    private:
    int storedValue;
};

/*
class IntCell{
    public:
    explicit IntCell(int initialValue=0) : storedValue {initialValue}{}

    int read() const {
        return storedValue;
    }

    void write(int x) { 
        storedValue=x;
    }

    private:
    int storedValue;
};

*/
