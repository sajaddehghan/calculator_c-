#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



float numtwo(char str[],int point){
	float num2=0;
	int i=point+1;
	for(;i<1000 && str[i]!='\0' && str[i]!='+' && str[i]!='-' && str[i]!='*' && str[i]!='/'&&str[i]!='=';i++){
		if(str[i]=='0'){
			num2=num2*10+0;
		}if(str[i]=='1'){
			num2=num2*10+1;
		}if(str[i]=='2'){
			num2=num2*10+2;
		}if(str[i]=='3'){
			num2=num2*10+3;
		}if(str[i]=='4'){
			num2=num2*10+4;
		}if(str[i]=='5'){
			num2=num2*10+5;
		}if(str[i]=='6'){
			num2=num2*10+6;
		}if(str[i]=='7'){
			num2=num2*10+7;
		}if(str[i]=='8'){
			num2=num2*10+8;
		}if(str[i]=='9'){
			num2=num2*10+9;
		}
		if(str[i]=='.'){
			float decimal=0.1;
			i++;
			for(;i<1000&&str[i]!='\0'&&str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&str[i]!='=';i++){
				if(str[i]=='0'){
					num2=(0*decimal)+num2;
				}if(str[i]=='1'){
					num2=(1*decimal)+num2;
				}if(str[i]=='2'){
					num2=(2*decimal)+num2;
				}if(str[i]=='3'){
					num2=(3*decimal)+num2;
				}if(str[i]=='4'){
					num2=(4*decimal)+num2;
				}if(str[i]=='5'){
					num2=(5*decimal)+num2;
				}if(str[i]=='6'){
					num2=(6*decimal)+num2;
				}if(str[i]=='7'){
					num2=(7*decimal)+num2;
				}if(str[i]=='8'){
					num2=(8*decimal)+num2;
				}if(str[i]=='9'){
					num2=(9*decimal)+num2;
				}
				decimal=decimal*0.1;
			}
//			printf("%f\n",num2);
			return num2;
		}
	}
//	printf("%f\n",num2);
	return num2;
}
float numone(char str[],int point){
	int i=point-1;
	for(;i>=0 && str[i]!='\0'&&str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&str[i]!='=';i--);
	double num1=numtwo(str,i);
	return num1;
}

int firstpointer(char str[],int point){
	int i=point-1;
	for(;i>=0 && str[i]!='\0'&&str[i]!='+'&&str[i]!='-'&&str[i]!='*'&&str[i]!='/'&&str[i]!='=';i--);
	i=i+1;
//	printf("%d\n",i);
	return i;
}

int secondpointer(char str[],int point){
	int i=point+1;
	for(;i<1000 && str[i]!='\0' && str[i]!='+' && str[i]!='-' && str[i]!='*' && str[i]!='/'&&str[i]!='=';i++);
	i=i-1;
//	printf("%d\n",i);
	return i;
}


int main(int argc, char *argv[]) {
	printf("Enter words:");
	char str[1000];
	char str1[1000];
	gets(str);
	int b=0;
	for(;b<1000&&str[b]!='\0';b++){
		str1[b]=str[b];
	}
	str1[b]='\0';
	int i=0;
	for(;i<1000&&str[i]!='\0'&&str[i]!='=';i++){
		int p=0;
		char str2[1000];
		for(;p<1000&&str[p]!='\0'&&str[p]!='=';p++){
			str2[p]=str[p];
		}
		str2[p]='\0';
		if(str[i]=='*'){
			float num1=numone(str,i);
			float num2=numtwo(str,i);
			float result=num1*num2;
//			printf("%f\n",result);
			int fpointer=firstpointer(str,i);
			int spointer=secondpointer(str,i);
			int e=0;
			int g=0;
			for(;e<1000&&str2[e]!='\0';e++,g++){
				if(e>=fpointer&&e<=spointer-1){
					int f=result*100;
					int z=f;
					int h=0;
			        for (; z >=1 ; h++) {
			            z=z/10;
			        }
			        int c=1;
			        int j=h;
			        for (;j>1;j--){
			            c=c*10;
			        }
			        int k=h;
					for (; k > 0; k--,g++) {
			            if (k-2>0) {
				                int l = (f / c);
				            if(l>=1){
				            	f = f - (l * c);
				                if(l==0){
									str[g]='0';
								}if(l==1){
									str[g]='1';
								}if(l==2){
								    str[g]='2';
								}if(l==3){
									str[g]='3';
								}if(l==4){
									str[g]='4';
								}if(l==5){
									str[g]='5';
								}if(l==6){
									str[g]='6';
								}if(l==7){
									str[g]='7';
								}if(l==8){
									str[g]='8';
								}if(l==9){
									str[g]='9';
								}
							}else{
								str[g]='0';
							}
			                c = c / 10;
			            }if(k-2==0){
			            	str[g]='.';
			            }
			            if(k-2<-1){
				                int l = (f / c);
				            if(l>=1){
				            	f = f - (l * c);
				                if(l==0){
									str[g]='0';
								}if(l==1){
									str[g]='1';
								}if(l==2){
								    str[g]='2';
								}if(l==3){
									str[g]='3';
								}if(l==4){
									str[g]='4';
								}if(l==5){
									str[g]='5';
								}if(l==6){
									str[g]='6';
								}if(l==7){
									str[g]='7';
								}if(l==8){
									str[g]='8';
								}if(l==9){
									str[g]='9';
								}
							}else{
								str[g]='0';
							}
			                c = c / 10;
			            }
			        }
			        g--;
			        e=spointer;
				}else{
					str[g]=str2[e];	
				}
			}
			str[g]='\0';
//			puts(str);
			i=0;
		}
		if(str[i]=='/'){
			float num1=numone(str,i);
			float num2=numtwo(str,i);
			float result=num1/num2;
//			printf("%f\n",result);
			int fpointer=firstpointer(str,i);
			int spointer=secondpointer(str,i);
			int e=0;
			int g=0;
			for(;e<1000&&str2[e]!='\0';e++,g++){
				if(e>=fpointer&&e<=spointer-1){
					int f=result*100;
					int z=f;
					int h=0;
			        for (; z >=1 ; h++) {
			            z=z/10;
			        }
			        int c=1;
			        int j=h;
			        for (;j>1;j--){
			            c=c*10;
			        }
			        int k=h;
					for (; k > 0; k--,g++) {
			            if (k-2>0) {
				                int l = (f / c);
				            if(l>=1){
				                f = f - (l * c);
				                if(l==0){
									str[g]='0';
								}if(l==1){
									str[g]='1';
								}if(l==2){
								    str[g]='2';
								}if(l==3){
									str[g]='3';
								}if(l==4){
									str[g]='4';
								}if(l==5){
									str[g]='5';
								}if(l==6){
									str[g]='6';
								}if(l==7){
									str[g]='7';
								}if(l==8){
									str[g]='8';
								}if(l==9){
									str[g]='9';
								}
							}else{
								str[g]='0';
							}
			                c = c / 10;
			            }if(k-2==0){
			            	str[g]='.';
			            }
			            if(k-2<-1){
				                int l = (f / c);
				            if(l>=1){
				                f = f - (l * c);
				                if(l==0){
									str[g]='0';
								}if(l==1){
									str[g]='1';
								}if(l==2){
								    str[g]='2';
								}if(l==3){
									str[g]='3';
								}if(l==4){
									str[g]='4';
								}if(l==5){
									str[g]='5';
								}if(l==6){
									str[g]='6';
								}if(l==7){
									str[g]='7';
								}if(l==8){
									str[g]='8';
								}if(l==9){
									str[g]='9';
								}
							}else{
								str[g]='0';
							}
			                c = c / 10;
			            }
			        }
			        g--;
			        e=spointer;
				}else{
					str[g]=str2[e];	
				}
			}
			str[g]='\0';
//			puts(str);
			i=0;
		}
	}
	i=0;
	for(;i<1000&&str[i]!='\0'&&str[i]!='=';i++){
		char str2[1000];
		int p=0;
		for(;p<1000&&str[p]!='\0'&str[p]!='=';p++){
			str2[p]=str[p];
		}
		str2[p]='\0';
		if(str[i]=='+'){
			float num1=numone(str,i);
			float num2=numtwo(str,i);
			float result=num1+num2;
//			printf("%f\n",result);
			int fpointer=firstpointer(str,i);
			int spointer=secondpointer(str,i);
			int e=0;
			int g=0;
			for(;e<1000&&str2[e]!='\0';e++,g++){
				if(e>=fpointer&&e<=spointer-1){
					int f=result*100;
					int z=f;
					int h=0;
			        for (; z >=1 ; h++) {
			            z=z/10;
			        }
			        int c=1;
			        int j=h;
			        for (;j>1;j--){
			            c=c*10;
			        }
			        int k = h;
					for (; k > 0; k--,g++) {
			            if (k-2>0) {
				                int l = (f / c);
				            if(l>=1){
				                f = f - (l * c);
				                if(l==0){
									str[g]='0';
								}if(l==1){
									str[g]='1';
								}if(l==2){
								    str[g]='2';
								}if(l==3){
									str[g]='3';
								}if(l==4){
									str[g]='4';
								}if(l==5){
									str[g]='5';
								}if(l==6){
									str[g]='6';
								}if(l==7){
									str[g]='7';
								}if(l==8){
									str[g]='8';
								}if(l==9){
									str[g]='9';
								}
							}else{
								str[g]='0';
							}
			                c = c / 10;
			            }if(k-2==0){
			            	str[g]='.';
			            }
			            if(k-2<-1){
				                int l = (f / c);
				            if(l>=1){
				                f = f - (l * c);
				                if(l==0){
									str[g]='0';
								}if(l==1){
									str[g]='1';
								}if(l==2){
								    str[g]='2';
								}if(l==3){
									str[g]='3';
								}if(l==4){
									str[g]='4';
								}if(l==5){
									str[g]='5';
								}if(l==6){
									str[g]='6';
								}if(l==7){
									str[g]='7';
								}if(l==8){
									str[g]='8';
								}if(l==9){
									str[g]='9';
								}
							}else{
								str[g]='0';
							}
			                c = c / 10;
			            }
			        }
			        g--;
			        e=spointer;
				}else{
					str[g]=str2[e];	
				}
			}
			str[g]='\0';
//			puts(str);
			i=0;
		}
		if(str[i]=='-'){
			float num1=numone(str,i);
			float num2=numtwo(str,i);
			float result=num1-num2;
//			printf("%f\n",result);
			int fpointer=firstpointer(str,i);
			int spointer=secondpointer(str,i);
			int e=0;
			int g=0;
			for(;e<1000&&str2[e]!='\0';e++,g++){
				if(e>=fpointer&&e<=spointer-1){
					int f=result*100;
					int z=f;
					int h=0;
			        for (; z >=1 ; h++) {
			            z=z/10;
			        }
			        int c=1;
			        int j=h;
			        for (;j>1;j--){
			            c=c*10;
			        }
			        int k = h;
					for (; k > 0; k--,g++) {
			            if (k-2>0) {
				                int l = (f / c);
				            if(l>=1){
				                f = f - (l * c);
				                if(l==0){
									str[g]='0';
								}if(l==1){
									str[g]='1';
								}if(l==2){
								    str[g]='2';
								}if(l==3){
									str[g]='3';
								}if(l==4){
									str[g]='4';
								}if(l==5){
									str[g]='5';
								}if(l==6){
									str[g]='6';
								}if(l==7){
									str[g]='7';
								}if(l==8){
									str[g]='8';
								}if(l==9){
									str[g]='9';
								}
							}else{
								str[g]='0';
							}
			                c = c / 10;
			            }if(k-2==0){
			            	str[g]='.';
			            }
			            if(k-2<-1){
				                int l = (f / c);
				            if(l>=1){
				                f = f - (l * c);
				                if(l==0){
									str[g]='0';
								}if(l==1){
									str[g]='1';
								}if(l==2){
								    str[g]='2';
								}if(l==3){
									str[g]='3';
								}if(l==4){
									str[g]='4';
								}if(l==5){
									str[g]='5';
								}if(l==6){
									str[g]='6';
								}if(l==7){
									str[g]='7';
								}if(l==8){
									str[g]='8';
								}if(l==9){
									str[g]='9';
								}
							}else{
								str[g]='0';
							}
			                c = c / 10;
			            }
			        }
			        g--;
			        e=spointer;
				}else{
					str[g]=str2[e];	
				}
			}
			str[g]='\0';
//			puts(str);
			i=0;
		}
	}
	int x=0;
	for(;x<1000&&str1[x]!='\0';x++){
		printf("%c",str1[x]);
	}
	puts(str);
	return 0;
}

