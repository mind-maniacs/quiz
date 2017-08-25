
//All Questions and answers are in Switch format
//one function = one category add more function
//example() is an example function
//Dont Change the functions just change the switch values
//Dont need the change 'example' names of function for now
void start();
void restart(){
    char ent;
    printf("\n\n\n\n     ---Press Enter to RESTART---");
    scanf("%c*c",&ent);
    start();
}
void example()
{
   char inp;
   int count=0,r=0,i,c,ia,corr=0,wrong=0;    
  for(i=0;i<5;i++)
  {
     // r=rand()%6;
     system("clear");
      //printf("Random no %d",r);
      count++;
      printf("\n\n     ~~~~~Question %d~~~~~\n",count);
      printf("     \n     Correct=%d          Wrong=%d\n\n",corr,wrong);
      r++;
        switch(r)
    {
        case 1:{
                c=1;
                //c is the correct option number
                printf("     What is your Name?\n");
                printf("     1) Cyril\n");
                printf("     2) Not Cyril\n");
                printf("     3) What?\n");
                printf("     4) Nobody.\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=2;
                printf("     Where do you live?\n");
                printf("     1) Earth C127\n");
                printf("     2) Earth\n");
                printf("     3) You don't\n");
                printf("     4) bye.\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=4;
                printf("     Wanna Die?\n");
                printf("     1) Yup\n");
                printf("     2) yes\n");
                printf("     3) yeah\n");
                printf("     4) no\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=1;
                printf("     Linux>Windows?\n");
                printf("     1) Definetly\n");
                printf("     2) nah\n");
                printf("     3) lol no\n");
                printf("     4) I dont think so\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=3;
                printf("     Hitler is:\n");
                printf("     1) Bad\n");
                printf("     2) Awesome\n");
                printf("     3) Evil\n");
                printf("     4) Dictator\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        default:printf("     Invalid Input\n\n\n");
    }
    if(ia==c)
     {
         corr++;
   //     printf("     ~CORRECT :)\n\n");
     }
    else {
        wrong++;
     //   printf("     ~WRONG :(\n\n");
         }
  }
   system("clear");
   printf("\n\n\n\n\n     Correct Answers:%d\n      Wrong Answers:%d\n",corr,wrong);
   restart();
}

void example1(){
   char inp;
   int count=0,r=0,i,c,ia,corr=0,wrong=0;    
  for(i=0;i<5;i++)
  {
     // r=rand()%6;
     system("clear");
      //printf("Random no %d",r);
      count++;
      printf("\n\n     ~~~~~Question %d~~~~~\n",count);
      printf("     \n     Correct=%d          Wrong=%d\n\n",corr,wrong);
      r++;
        switch(r)
    {
        case 1:{
                c=1;
                //c is the correct option number
                printf("     What is your Name?\n");
                printf("     1) Cyril\n");
                printf("     2) Not Cyril\n");
                printf("     3) What?\n");
                printf("     4) Nobody.\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=2;
                printf("     Where do you live?\n");
                printf("     1) Earth C127\n");
                printf("     2) Earth\n");
                printf("     3) You don't\n");
                printf("     4) bye.\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=4;
                printf("     Wanna Die?\n");
                printf("     1) Yup\n");
                printf("     2) yes\n");
                printf("     3) yeah\n");
                printf("     4) no\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=1;
                printf("     Linux>Windows?\n");
                printf("     1) Definetly\n");
                printf("     2) nah\n");
                printf("     3) lol no\n");
                printf("     4) I dont think so\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=3;
                printf("     Hitler is:\n");
                printf("     1) Bad\n");
                printf("     2) Awesome\n");
                printf("     3) Evil\n");
                printf("     4) Dictator\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        default:printf("     Invalid Input\n\n\n");
    }
    if(ia==c)
     {
         corr++;
   //     printf("     ~CORRECT :)\n\n");
     }
    else {
        wrong++;
     //   printf("     ~WRONG :(\n\n");
         }
  }
   system("clear");
   printf("\n\n\n\n\n     Correct Answers:%d\n      Wrong Answers:%d\n",corr,wrong);
   restart();
}
void example2(){
   char inp;
   int count=0,r=0,i,c,ia,corr=0,wrong=0;    
  for(i=0;i<5;i++)
  {
     // r=rand()%6;
     system("clear");
      //printf("Random no %d",r);
      count++;
      printf("\n\n     ~~~~~Question %d~~~~~\n",count);
      printf("     \n     Correct=%d          Wrong=%d\n\n",corr,wrong);
      r++;
        switch(r)
    {
        case 1:{
                c=1;
                //c is the correct option number
                printf("     What is your Name?\n");
                printf("     1) Cyril\n");
                printf("     2) Not Cyril\n");
                printf("     3) What?\n");
                printf("     4) Nobody.\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=2;
                printf("     Where do you live?\n");
                printf("     1) Earth C127\n");
                printf("     2) Earth\n");
                printf("     3) You don't\n");
                printf("     4) bye.\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=4;
                printf("     Wanna Die?\n");
                printf("     1) Yup\n");
                printf("     2) yes\n");
                printf("     3) yeah\n");
                printf("     4) no\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=1;
                printf("     Linux>Windows?\n");
                printf("     1) Definetly\n");
                printf("     2) nah\n");
                printf("     3) lol no\n");
                printf("     4) I dont think so\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=3;
                printf("     Hitler is:\n");
                printf("     1) Bad\n");
                printf("     2) Awesome\n");
                printf("     3) Evil\n");
                printf("     4) Dictator\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        default:printf("     Invalid Input\n\n\n");
    }
    if(ia==c)
     {
         corr++;
   //     printf("     ~CORRECT :)\n\n");
     }
    else {
        wrong++;
     //   printf("     ~WRONG :(\n\n");
         }
  }
   system("clear");
   printf("\n\n\n\n\n     Correct Answers:%d\n      Wrong Answers:%d\n",corr,wrong);
   restart();
}
void example3(){
   char inp;
   int count=0,r=0,i,c,ia,corr=0,wrong=0;    
  for(i=0;i<5;i++)
  {
     // r=rand()%6;
     system("clear");
      //printf("Random no %d",r);
      count++;
      printf("\n\n     ~~~~~Question %d~~~~~\n",count);
      printf("     \n     Correct=%d          Wrong=%d\n\n",corr,wrong);
      r++;
        switch(r)
    {
        case 1:{
                c=1;
                //c is the correct option number
                printf("     What is your Name?\n");
                printf("     1) Cyril\n");
                printf("     2) Not Cyril\n");
                printf("     3) What?\n");
                printf("     4) Nobody.\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=2;
                printf("     Where do you live?\n");
                printf("     1) Earth C127\n");
                printf("     2) Earth\n");
                printf("     3) You don't\n");
                printf("     4) bye.\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=4;
                printf("     Wanna Die?\n");
                printf("     1) Yup\n");
                printf("     2) yes\n");
                printf("     3) yeah\n");
                printf("     4) no\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=1;
                printf("     Linux>Windows?\n");
                printf("     1) Definetly\n");
                printf("     2) nah\n");
                printf("     3) lol no\n");
                printf("     4) I dont think so\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=3;
                printf("     Hitler is:\n");
                printf("     1) Bad\n");
                printf("     2) Awesome\n");
                printf("     3) Evil\n");
                printf("     4) Dictator\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        default:printf("     Invalid Input\n\n\n");
    }
    if(ia==c)
     {
         corr++;
   //     printf("     ~CORRECT :)\n\n");
     }
    else {
        wrong++;
     //   printf("     ~WRONG :(\n\n");
         }
  }
   system("clear");
   printf("\n\n\n\n\n     Correct Answers:%d\n      Wrong Answers:%d\n",corr,wrong);
   restart();
}
void example4(){
   char inp;
   int count=0,r=0,i,c,ia,corr=0,wrong=0;    
  for(i=0;i<5;i++)
  {
     // r=rand()%6;
     system("clear");
      //printf("Random no %d",r);
      count++;
      printf("\n\n     ~~~~~Question %d~~~~~\n",count);
      printf("     \n     Correct=%d          Wrong=%d\n\n",corr,wrong);
      r++;
        switch(r)
    {
        case 1:{
                c=1;
                //c is the correct option number
                printf("     What is your Name?\n");
                printf("     1) Cyril\n");
                printf("     2) Not Cyril\n");
                printf("     3) What?\n");
                printf("     4) Nobody.\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=2;
                printf("     Where do you live?\n");
                printf("     1) Earth C127\n");
                printf("     2) Earth\n");
                printf("     3) You don't\n");
                printf("     4) bye.\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=4;
                printf("     Wanna Die?\n");
                printf("     1) Yup\n");
                printf("     2) yes\n");
                printf("     3) yeah\n");
                printf("     4) no\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=1;
                printf("     Linux>Windows?\n");
                printf("     1) Definetly\n");
                printf("     2) nah\n");
                printf("     3) lol no\n");
                printf("     4) I dont think so\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=3;
                printf("     Hitler is:\n");
                printf("     1) Bad\n");
                printf("     2) Awesome\n");
                printf("     3) Evil\n");
                printf("     4) Dictator\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        default:printf("     Invalid Input\n\n\n");
    }
    if(ia==c)
     {
         corr++;
   //     printf("     ~CORRECT :)\n\n");
     }
    else {
        wrong++;
     //   printf("     ~WRONG :(\n\n");
         }
  }
   system("clear");
   printf("\n\n\n\n\n     Correct Answers:%d\n      Wrong Answers:%d\n",corr,wrong);
   restart();
}
