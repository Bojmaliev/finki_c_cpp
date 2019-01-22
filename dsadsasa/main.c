#include <unistd.h>
#include  <sys/types.h>

void W(char g){
printf("%c", g);
}

int main(){
W('A');
int child = fork();
W('B');
if(child)
    wait(0);
W('C');
}
