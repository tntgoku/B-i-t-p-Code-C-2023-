#include<stdio.h>
#include<math.h>
void bac4(float heso1,float heso2,float heso3 ){
	float x1,x2,x3,x4,t,t1,t2,x;
	float detal;
		do{
	printf("Nhập hệ số a,b,c vào: ");scanf("%f%f%f",&heso1,&heso2,&heso3);
	if(heso1==0){
		printf("Số a phải khác 0\n");
	}
	}
	while(heso1==0);
	  detal=heso2*heso2-(4*heso1*heso3);
	  if(detal<0){
	  	printf("Phương trình vô nghiệm\n");
	  }
	 else if(detal==0){
	 	 	//nghiệm kép t1=t2=-b/(a*2);
	 	 	x1=-heso2/(2*heso1);
	 	 	x2=sqrt(x1);
	 	 	x3=-x2;
	 	 		printf("Phương có nghiệm kép: %f, %f\n",x2,x3);
			  }
	 else{
	 	t1=(-heso2+sqrt(detal))/(2*heso1);
		 t2=(-heso2-sqrt(detal))/(2*heso1);
			  x1=sqrt(abs(t1));
			  x2=-x1;
			  x3=sqrt(abs(t2));
			  x4=-x3;
		if(t1>0 && t2<0){
			printf("Phương trình có 2 nghiệm: %2.3f, %2.3f\n",x1,x2);
			printf("%2.3fi, %2.3fi\t đây là nghiệm phức(vô nghiệm)\n",x3,x4);
			}
		else if(t1<0 && t2>0){
			printf("Phương trình có 2 nghiệm:, %2.3f, %2.3f,\n",x3,x4);
			printf("%2.3fi, %2.3fi\t đây là nghiệm phức(vô nghiệm)\n",x1,x2);
		}
		else if(t1<0 && t2<0 ){
	 		printf("Đây là vô nghiệm do 2 nghiêm t1,t2 đều <0\n");
	 		printf("Phương trình có 4 nghiệm(chứa số phức) là: %2.3fi, %2.3fi, %2.3fi, %2.3fi\n",x1,x2,x3,x4);
			 }
	 		else{
			  printf("Phương trình có 4 nghiệm  là: %2.3f, %2.3f, %2.3f, %2.3f\n",x1,x2,x3,x4);
			  }
		}
	}
	main(){
		float heso1,heso2,heso3;
		bac4(heso1,heso2,heso3);
		
	}