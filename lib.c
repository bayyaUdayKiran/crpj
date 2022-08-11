# include <ctype.h>
# include <string.h>
# include <stdio.h>
# include <sys/stat.h>
# include <unistd.h>
# define MAX_BPC_SIZE 100
# define MAX_HELP_PG_SIZE 500

void lower(char* string, char result[]){
    for(size_t i = 0; i<strlen(string); i++){
        result[i] = tolower((unsigned char) *(string+i));
    }
}

int makec(char path[]){
    char bpc[MAX_BPC_SIZE] = {"# include <stdio.h>\n\nint main(){\n\t//Write here..\n\n\n\treturn 0;\n}"};
    FILE *main, *test;
    
    //Make Directory..
    if(mkdir(path,0777))
        printf("error: Directory cannot be created!");
    
    //Moving into the new Directory..
    if(chdir(path))
        printf("error: Unable to change to the directory!");
    
    //Initializing program file..
    main = fopen("main.c", "w");
    fputs(bpc, main);
    fclose(main);
    test = fopen("test.c", "w");
    fputs(bpc, test);
    fclose(test);

    return 1;
}



int makecpp(char path[]){
    char bpc[MAX_BPC_SIZE] = {"# include <iostream>\n\nint main(){\n\t//Write here..\n\n\n\treturn 0;\n}"};
    FILE *main, *test;
    
    //Make Directory..
    if(mkdir(path,0777))
        printf("error: Directory cannot be created!");
    
    //Moving into the new Directory..
    if(chdir(path))
        printf("error: Unable to change to the directory!");
    
    //Initializing program files..
    main = fopen("main.cpp", "w");
    fputs(bpc, main);
    fclose(main);
    test = fopen("test.cpp", "w");
    fputs(bpc, test);
    fclose(test);

    return 1;
}


int makepy(char path[]){
    char bpc[MAX_BPC_SIZE] = {"#Start Here.."};
    FILE *main, *test;
    
    //Make Directory..
    if(mkdir(path,0777))
        printf("error: Directory cannot be created!");
    
    //Moving into the new Directory..
    if(chdir(path))
        printf("error: Unable to change to the directory!");
    
    //Initializing program files..
    main = fopen("main.py", "w");
    fputs(bpc, main);
    fclose(main);
    test = fopen("test.py", "w");
    fputs(bpc, test);
    fclose(test);

    return 1;
}




