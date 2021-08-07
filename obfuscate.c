#include <stdio.h>/**/                                                  /*------------------*/                                         
  #include <stdlib.h>//                                               /*------------------*/  
    #define X if/*-----*/                                           /*------------------*/  
      #define A scanf/*--*/                                       /*------------------*/ 
        #define R return/*--*/                                  /*------------------*/ 
          #define L b[1][l]/*--*/                             /*------------------*/ 
            #define O b[o][0]/*--*/                         /*------------------*/ 
              #define F b[1][1]/*-*/                      /*------------------*/ 
                #define c continue/**/                  /*------------------*/ 
                  #define q printf("%c",              *(a+i))/*-----------*/ 
                    #define n(p,z,o,i,u,y,          t,r)/*-------------*/\
                    printf("%co%c%c %c%c%c%c%c"   ,p,z,o,i,u,y,t,r);//
                        char b['['-'-'+'+']['|'  -']'-28]={{'Z'-'-',' '
                          +13,'-'},{'N'- '!','}'-'{'+'+','-'} ,{'}'-
                           '{'+'+','N'-'!',' '+13}};char*a= &b[0]
                              [0];int I(){int i=0;while(i<'6'/
                                6){X(*(a+i)==' '+13)R 1;i++;
                                  }R 0;}int W(){for(int o=
                                    0;o<3;o++){X(O==b[o][1
                                  ]&&b[o][1]==b[o][2]){X( O
                                 ==('!'+'W'))R 10;else X(O==//
                                111) R -10;}}for(int l=0;l<3;l//
                              ++){X(b[0][l]==L&&L==b[2][l]){X(b//
                            [0][l]==('('*3))R 10;else X(b[0][l]==//
                          ('%'*3))R -10;}}X(b[0][0]==F&&F==b[2][2])//
                        {X(b[0][0]==(':'+'>'))R    10;else X(b[0][0]==//
                      '('+71)R -10;}X(b[0][2]        ==F&&F==b[2][0]){X(b
                    [0][2]=='('+80   ) R 10;           else X(b[0][2]=='%'*3
                   )R -10;}R 0;} int Y(int              D,int iM){int S=W();X(
                  S==10)R S;X (S==-10) R                 S;X(I()==0)R 0;X(iM){int
                T=-500;for(int i=0;i<3;                   i++){for(int j=0;j<3;j++                         
              ){X(b[i][j]==('_'-'2'))                      {b[i][j]=(':'+'>');int N=
             Y(D+1,1-iM);X(N>T)T =N;                         b[i][j]='-';}}}R T;}else{
           int T=500;for(int i=0;                            i<3;i++){for(int j=0;j<3;
          j++){X(b[i][j]==45){b                               [i][j]=111;int N=Y(D+1,1
        -iM);X(N<T)T = N;b[i]                                   [j]='-';}}}R T;}} void f()
      {int VB=-500;int RB=-1;                                     int Cb=-1;for(int i=0;i<3;
    i++){for(int j=0;j < 3;                                        j++){X(b[i][j]==45){b[i][j]
  =120;int MV = Y(0, 0);                                             b[i][j]='-';X(MV>VB){RB=i;
Cb=j;VB=MV;}} } }b[RB]                                                [Cb]=120;}int main(){int i 

= 0;printf("\n");while(i<('/'-'&')){q;((i+1)%3==0)?printf("\n"):printf(" ");i++;}while(1){int o;int l;
n(82,119,58,0,0,0,0,0);A("%d",&o);n(67,108,58,0,0,0,0,0);A("%d",&l);X(o>2||l>2)c;X(b[o][l]!=45)c;b[o][
l]='('+71;i=0;printf("\n");while(i<'6'/6){q;((i+1)%3==0)?printf("\n"):printf(" ");i++;}X(!I()){n(89,117
,0,84,105,101,100,10);R 0;}f();i=0;printf("\n");while(i<'6'/6){q;((i+1)%3==0)?printf("\n"):printf(" ");
i++;}X(W()>0){n(89,117,0,76,111,115,101,10);R 0;}else X(W()<0){n(89,117,0,87,105,110,33,10);R 0;}}}