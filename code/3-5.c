#include <stdio.h>

int main(int argc, const char* argv[]){
    const char* filename="numbers.txt";

    FILE* fp=fopen(filename,"r");
    if(fp==NULL){
        return 0;
    }

    int sum=0;
    char bf[256]={0};

    while(fgets(bf,sizeof(bf),fp)!=NULL){
        int num;
        if(sscanf(bf,"%d",&num)==1){
            sum+=num;
        }else{
            fprintf(stderr,"invalid input %s",bf);
        }
    }

    printf("sum: %d\n",sum);
    fclose(fp);
    return 0;
}
