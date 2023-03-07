#include<iostream>
using namespace std;
class area{
    private:
    int len,bre;

    public:
    void setl(int l, int b){
        len=l;
        bre=b;
    }
    friend area shape(area a1, area a2);

    
};

area shape(area a1,area a2){
    int rect=((a1.len+a2.len)*(a1.bre+a2.bre));
    cout<<rect<<endl;
}

int main(){
    area a1,a2;
    a1.setl(4,5);
    a2.setl(5,6);
    shape(a1,a2);
    
}

