
 #include<stdio.h>
#include<math.h>

int main(){
    int p1[5],p2[5],i;
    float s1 ,m1,sd1=0,d1, s2 ,m2,sd2=0,d2;
    for(i=0;i<5;i++){
        scanf("%d",&p1[i]);
    }
for(i=0;i<5;i++){
        scanf("%d",&p2[i]);
    }
    for(i=0;i<5;i++){
            s1=s1+p1[i];
    }
    m1=s1/5;
    for(i=0;i<5;i++){
   sd1=sd1+(pow(p1[i]-m1,2));
     }
     d1=sqrt(sd1/5);


     for(i=0;i<5;i++){
            s2=s2+p2[i];
    }
    m2=s2/5;
    for(i=0;i<5;i++){
   sd2=sd2+(pow( p2[i]-m2,2));
     }
     d2=sqrt(sd2/5);

     if(d1<d2){
        printf("The first player is more efficient");
     }
    else{
        printf("The second player is more efficient");
     }



return 0;
}
