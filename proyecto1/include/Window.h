#ifndef WINDOW_H
#define WINDOW_H

#include <string>

class Window{
public:
    string code;
    int nAttendedTiquets;

    Window(string code){
        this->code = code;
        nAttendedTiquets = 0;
    }

    Window(){}

    string getCode(){
        return code;
    }

    void increaseNAttendedTiquets(){
        nAttendedTiquets++;
    }

    int getAttendedTiquets(){
        return nAttendedTiquets;
    }
    void setNAttendedTiquets(int nAttendedTiquets){
        this->nAttendedTiquets = nAttendedTiquets;
    }

    void operator = (Window &other){
        code = other.code;
        nAttendedTiquets = other.nAttendedTiquets;
    }

    bool operator == (const Window &other){
        return code == other.code;
    }

    bool operator < (const Window &other){
        return code < other.code;
    }

    bool operator <= (const Window &other){
        return code <= other.code;
    }

    bool operator > (const Window &other){
        return code > other.code;
    }

    bool operator >= (const Window &other){
        return code >= other.code;
    }

    bool operator != (const Window &other){
        return code != other.code;
    }
};

ostream& operator <<(ostream & os,const Window &pair){
    os << "(" << pair.code << ", " << pair.nAttendedTiquets << ")";
    return os;
}



#endif // WINDOW_H
