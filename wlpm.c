#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int main()
{   
    int a;
    printf("Welcome to WLPM!\n");
	fflush(stdin);
    CX:while(1){
	    printf("Package: 1)install 2)update 3)checkinfo 4)search 5)remove\n");
	    printf("Thisprogram: 6)modifyrepos 7)version 8)new(WMP) 9)quit\n");
	    printf("please enter a number\n");
	    printf("wlpm:");
	    scanf("%d",&a);
	    if(a==1){
		    while(1){
			char dir[10],name[10],c[10];
			char sha[20],shb[20];
		    printf("Enter the location of the package\n");
		    printf("wlpm(install):");
		    scanf("%s%s%s",dir,name,c);
            cd(dir);
			tar("%s%s",name,c);
			cd("%s%s",dir,name);
			system("./configure");
			system("make");
			system("sudo make install");
			addchar(name);
			printf("install compelet");
			goto CX;
			fflush(stdin);	
	        }
	    }else if(a==2){
			char name;
		    printf("Enter the name of the package to update\n");
		    printf("wlpm(update):");
		    scanf("%s",name);
		    goto CX;
			fflush(stdin);
	    }else if(a==3){
			char name;
		    printf("Enter the name of the package to view the information\n");
		    printf("wlpm(checkinfo):");
		    scanf("%s",name);
		    goto CX;
			fflush(stdin);
	    }else if(a==4){
			char name;
		    printf("Enter the name of the package to search\n");
		    printf("wlpm(search):");
		    scanf("%s",name);
		    goto CX; 
			fflush(stdin);
	    }else if(a==5){
			char name;
		    printf("Enter the package name you want to remove\n");
		    printf("wlpm(remove):");
		    scanf("%s",name);
			fflush(stdin);
		    goto CX;
	    }else if(a==6){
		    system("vim /lpm/repos");
		    goto CX;
	    }else if(a==7){
		    printf("version:0.01,by wodeshengli\n");
		    goto CX;
	    }else if(a==8){
		    printf("haha, it's not finished. You can contribute code\n");
            goto CX;
	    }else if(a==9){
		    printf("(quit this program!)");
            fflush(stdin);
			break;
			return 0;
		}else printf("Error!Please enter a meaningful number");
		fflush(stdin);
	}
}
void cd(char *path){
    chdir(path);
}
void tar(char *filename){
	system("tar -xvf *.tar mydir/*");
}
void addchar(char *filename){
	FILE *fp;
	fp = fopen("/usr/wlpm","+");
	strncat(filename,",",100);
	fputc(filename,fp);
}


