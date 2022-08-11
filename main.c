# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <crpj/utils.h>
# define MAX_PATH_SIZE 50


int main(int argc,char* argv[]){
	char path[MAX_PATH_SIZE] = "/home/uday/stuff/code/", purpose;
	char *dirname;
	dirname = argv[2];
    strcat(path, dirname);


	if(strcmp(argv[1], "-c") == 0){
		if(!makec(path))
			printf("error: cannot create the project directory.");
	}
		

	else if(strcmp(argv[1], "-cpp") == 0){
		if(!makecpp(path))
			printf("error: cannot create the project directory.");
	}
		

	else if(strcmp(argv[1], "-py") == 0){
		if(!makepy(path))
			printf("error: cannot create the project directory.");
	}
		
	

	
		

		
    
	

	
        
		
				
	


	return 0;
}