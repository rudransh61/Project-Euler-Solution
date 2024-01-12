#include<iostream>
using namespace std;

int main(){


    int ans = 0;

    for(int i=1;i<1000;i++){
        if(i/10==0){
            if(i==1){ans+=3;}
            else if(i==2){ans+=3;}
            else if(i==3){ans+=5;}
            else if(i==4){ans+=4;}
            else if(i==5){ans+=4}
            else if(i==6){ans+=3}
            else if(i==7){ans+=5}
            else if(i==8){ans+=5};
            else if(i==9){ans+=4}
        }

        else if(i/10 >= 1 && i/10 < 10){
            if(i==10){ans+=3}
            else if(i==11){ans+=6}
            else if(i==12){ans+=6}
            else if(i==13){ans+=8}
            else if(i==14){ans+=8}
            else if(i==15){ans+=7}
            else if(i==16){ans+=7}
            else if(i==17){ans+=9}
            else if(i==18){ans+=8}
            else if(i==19){ans+=9}
            else {
                if(i)
            }

        }
    }



    return 0;
}