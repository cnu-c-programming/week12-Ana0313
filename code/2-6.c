#include <stdio.h>
#include <string.h>

int main(int argc, const char* argv[]){
    if(argc<3)
        return 0;

    FILE* fp=fopen(argv[1],"r");
    const char* target_str=argv[2];

    if(fp==NULL)
        return 0;

    char bf[256]={0};
    while(fgets(bf,sizeof(bf),fp)!=NULL){
        if(strstr(bf,target_str)!=NULL){
            printf("%s",bf);
        }
    }

    fclose(fp);
    return 0;
}
