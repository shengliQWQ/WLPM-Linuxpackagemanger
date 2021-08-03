#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   
    int a,b,c,d,e,f,g;
    char* filedir;
    char dir; 
    char url;
    char name;
	char fn[30],*p;
    printf("Welcome to WLPM!\n");
	fflush(stdin);
    CX:while(1){
	    printf("Package: 1)install 2)update 3)checkinfo 4)search 5)remove\n");
	    printf("Thisprogram: 6)modifyrepos 7)version 8)New(WMP)\n");
	    printf("please enter a number\n");
	    printf("wlpm:");
	    scanf("%d",&a);
	    if(a==1){
		    while(1){
		    printf("Enter the location of the package\n");
		    printf("wlpm(install):") ;
		    scanf("%s/%s",filedir,name);
			printf("the name is%s",name);
			goto CX;
			fflush(stdin);	
	        }
	    }else if(a==2){
		    printf("Enter the name of the package to update\n");
		    printf("wlpm(update):");
		    scanf("%s",name);
		    goto CX;
			fflush(stdin);
	    }else if(a==3){
		    printf("Enter the name of the package to view the information\n");
		    printf("wlpm(checkinfo):");
		    scanf("%s",name);
		    goto CX;
			fflush(stdin);
	    }else if(a==4){
		    printf("Enter the name of the package to search\n");
		    printf("wlpm(search):");
		    scanf("%s",name);
		    goto CX; 
			fflush(stdin);
	    }else if(a==5){
		    printf("Enter the package name you want to delete\n");
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
	    }else printf("Error!Please enter a meaningful number");
		fflush(stdin);
	}
}
