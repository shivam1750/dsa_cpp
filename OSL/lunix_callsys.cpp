//01) - FORK 
#include<iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
int main(){
  pid_t c_pid;
  c_pid = fork(); //duplicate                                                                                                                                                
  
if( c_pid == 0 ){
    //child: The return of fork() is zero                                                                                                                                    
  cout<<("Child: I'm the child: %d\n", c_pid);
  }else if (c_pid > 0){
    //parent: The return of fork() is the process of id of the child                                                                                                         
    cout<<("Parent: I'm the parent: %d\n", c_pid);
  }else{
    //error: The return of fork() is negative                                                                                                                                
    perror("fork failed");
    _exit(2); //exit failure, hard                                                                                                                                           
  }
  return 0; //success                                                                                                                                                        
}

//02 ) - WAIT
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
 
int main()
{
    if (fork()== 0)
        printf("HC: hello from child\n");
    else
    {
        printf("HP: hello from parent\n");
        wait(NULL);
        printf("CT: child has terminated\n");
    }
 
    printf("Bye\n");
    return 0;
}

//03) -  exec.c
#include<stdio.h>
#include<unistd.h>
  
int main()
{
    int i;
      
    printf("I am EXEC.c called by execvp() ");
    printf("\n");
      
    return 0;
}
//gcc EXEC.c -o EXEC

//04) - execDemo.c
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
        //A null terminated array of character 
        //pointers
        char *args[]={"./EXEC",NULL};
        execvp(args[0],args);        // or execv(args[0],args);
     
        /*All statements are ignored after execvp() call as this whole 
        process(execDemo.c) is replaced by another process (EXEC.c)
        */
        printf("Ending-----");
      
    return 0;
}
//gcc execDemo.c -o execDemo

//05) - PS AND JOIN

$ps

$cat file1.txt
$cat file2.txt

$join file1.txt file2.txt

