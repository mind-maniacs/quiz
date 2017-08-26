//---Get To Work, humans of BCA left row 2nd bench---
//All Questions and answers are in Switch format
//one function = one category add more function
//topic<number>() is function which has questions for new topics
//Dont Change the functions(unless necessary) just change the switch values
//Replace the example questions with the actual questions
//Read comments withn topic0 for more details
//add more topics if needed

//Cyril, if you're reading this, please check the questions and align them properly
void start();
void restart(){
    char ent;
    printf("\n\n\n\n     ---Press Enter to RESTART---");
    scanf("%c*c",&ent);
    start();
}
void topic0()//Topic name is General Knowledge
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
                printf("     Grand Central Terminal, Park Avenue, New York is the world's ________\n");
                printf("     1) largest railway station\n");
                printf("     2) highest railway station\n");
                printf("     3) longest railway station\n");
                printf("     4) None of the above\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=2;
                printf("     Entomology is the science that studies ________\n");
                printf("     1) Behavior of human beings\n");
                printf("     2) Insects\n");
                printf("     3) The origin and history of technical and scientific terms\n");
                printf("     4) The formation of rocks\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=2;
                printf("     Eritrea, which became the 182nd member of the UN in 1993, is in the continent of ________\n");
                printf("     1) Asia\n");
                printf("     2) Africa\n");
                printf("     3) Europe\n");
                printf("     4) Australia\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=2;
                printf("     Garampani sanctuary is located at ________\n");
                printf("     1) Junagarh, Gujarat\n");
                printf("     2) Diphu, Assam\n");
                printf("     3) Kohima, Nagaland\n");
                printf("     4) Gangtok, Sikkim\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=4;
                printf("     For which of the following disciplines is Nobel Prize awarded?\n");
                printf("     1) Physics and Chemistry\n");
                printf("     2) Physiology or Medicine\n");
                printf("     3) Literature, Peace and Economics\n");
                printf("     4) All of the above\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 6:{
                c=2;
                printf("     Hitler party which came into power in 1933 is known as ________\n");
                printf("     1) Labour Party\n");
                printf("     2) Nazi Party\n");
                printf("     3) Ku-Klux-Klan\n");
                printf("     4) Democratic Party\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 7:{
                c=2;
                printf("     FFC stands for ________\n");
                printf("     1) Foreign Finance Corporation\n");
                printf("     2) Film Finance Corporation\n");
                printf("     3) Federation of Football Council\n");
                printf("     4) None of the above\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 8:{
                c=1;
                printf("     Fastest shorthand writer was ________\n");
                printf("     1) Dr. G. D. Bist\n");
                printf("     2) J.R.D. Tata\n");
                printf("     3) J.M. Tagore\n");
                printf("     4) Khudada Khan\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 9:{
                c=1;
                printf("     First human heart transplant operation conducted by Dr. Christiaan Barnard on Louis Washkansky, was conducted in ________\n");
                printf("     1) 1967\n");
                printf("     2) 1968\n");
                printf("     3) 1958\n");
                printf("     4) 1922\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 10:{
                c=3;
                printf("     First Afghan War took place in ________\n");
                printf("     1) 1839\n");
                printf("     2) 1843\n");
                printf("     3) 1833\n");
                printf("     4) 1848\n");
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
void topic1()//Topic name is Science
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
                c=2;
                //c is the correct option number for that case
                //input custom 'c' value within all cases in all topics
                printf("     Which of the following is a non metal that remains liquid at room temperature?\n");
                printf("     1) Phosphorous\n");
                printf("     2) Bromine\n");
                printf("     3) Chlorine\n");
                printf("     4) Helium\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=1;
                printf("     Nuclear sizes are expressed in a unit named ________\n");
                printf("     1) Fermi\n");
                printf("     2) Angstrom\n");
                printf("     3) Newton\n");
                printf("     4) Tesla\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=2;
                printf("     Movement of cell against concentration gradient is called ________\n");
                printf("     1) osmosis\n");
                printf("     2) active transport\n");
                printf("     3) diffusion\n");
                printf("     4) passive transport\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=1;
                printf("     Which of the following is used in pencils?\n");
                printf("     1) Graphite\n");
                printf("     2) Silicon\n");
                printf("     3) Charcoal\n");
                printf("     4) Phosphorous\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=2;
                printf("     The absorption of ink by blotting paper involves ________\n");
                printf("     1) viscosity of ink\n");
                printf("     2) capillary action phenomenon\n");
                printf("     3) diffusion of ink through the blotting\n");
                printf("     4) siphon action\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 6:{
                c=1;
                printf("     The gas usually filled in the electric bulb is ________\n");
                printf("     1) nitrogen\n");
                printf("     2) hydrogen\n");
                printf("     3) carbon dioxide\n");
                printf("     4) oxygen\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 7:{
                c=1;
                printf("     Washing soda is the common name for ________\n");
                printf("     1) Sodium carbonate\n");
                printf("     2) Calcium bicarbonate\n");
                printf("     3) Sodium bicarbonate\n");
                printf("     4) Calcium carbonate\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 8:{
                c=1;
                printf("     Pollination is best defined as ________\n");
                printf("     1) transfer of pollen from anther to stigma\n");
                printf("     2) germination of pollen grains\n");
                printf("     3) growth of pollen tube in ovule\n");
                printf("     4) visiting flowers by insects\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 9:{
                c=2;
                printf("     Other than spreading malaria, anopheles mosquitoes are also vectors of ________\n");
                printf("     1) dengue fever\n");
                printf("     2) filariasis\n");
                printf("     3) encephalitis\n");
                printf("     4) yellow fever\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 10:{
                c=2;
                printf("     Photosynthesis takes place faster in ________\n");
                printf("     1) yellow light\n");
                printf("     2) white light\n");
                printf("     3) red light\n");
                printf("     4) darkness\n");
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
void topic2()//Topic name is Technoogy
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
                c=2;
                //c is the correct option number
                printf("     What is part of a database that holds only one type of information?\n");
                printf("     1) Report\n");
                printf("     2) Field\n");
                printf("     3) Record\n");
                printf("     4) File\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=4;
                printf("     In which decade with the first transatlantic radio broadcast occur?\n");
                printf("     1) 1850s\n");
                printf("     2) 1860s\n");
                printf("     3) 1870s\n");
                printf("     4) 1900s\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=2;
                printf("     '.MOV' extension refers usually to what kind of file?\n");
                printf("     1) Image file\n");
                printf("     2) Animation/movie file\n");
                printf("     3) Audio file\n");
                printf("     4) MS Office document\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=2;
                printf("     Who developed Yahoo?\n");
                printf("     1) Dennis Ritchie & Ken Thompson\n");
                printf("     2) David Filo & Jerry Yang\n");
                printf("     3) Vint Cerf & Robert Kahn\n");
                printf("     4) Steve Case & Jeff Bezos\n");
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
        case 6:{
                c=4;
                printf("     What does VVVF stand for?\n");
                printf("     1) Variant Voltage Vile Frequency\n");
                printf("     2) Variable Velocity Variable Fun\n");
                printf("     3) Very Very Vicious Frequency\n");
                printf("     4) Variable Voltage Variable Frequency\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 7:{
                c=1;
                printf("     Who built the world's first binary digit computer: Z1...?\n");
                printf("     1) Konrad Zuse\n");
                printf("     2) Ken Thompson\n");
                printf("     3) Alan Turing\n");
                printf("     4) George Boole\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 8:{
                c=3;
                printf("     In a color television set using a picture tube a high voltage is used to accelerate electron beams to light the screen. That voltage is about ________\n");
                printf("     1) 500 volts\n");
                printf("     2) 5 thousand volts\n");
                printf("     3) 25 thousand volts\n");
                printf("     4) 100 thousand volts\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 9:{
                c=2;
                printf("     Which consists of two plates separated by a dielectric and can store a charge?\n");
                printf("     1) Inductor\n");
                printf("     2) Capacitor\n");
                printf("     3) Relay\n");
                printf("     4) Transistor\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 10:{
                c=1;
                printf("     Compact discs, (according to the original CD specifications) hold how many minutes of music?\n");
                printf("     1) 74 mins\n");
                printf("     2) 56 mins\n");
                printf("     3) 60 mins\n");
                printf("     4) 90 mins\n");
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
void topic3()//Topic name is Geograhy
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
                printf("     The latitudinal differences in pressure delineate a number of major pressure zones, which correspond with ________\n");
                printf("     1) zones of climate\n");
                printf("     2) zones of oceans\n");
                printf("     3) zones of land\n");
                printf("     4) zones of cyclonic depressions\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=4;
                printf("     The hazards of radiation belts include ________\n");
                printf("     1) deterioration of electronic circuits\n");
                printf("     2) damage of solar cells of spacecraft\n");
                printf("     3) adverse effect on living organisms\n");
                printf("     4) All of the above\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=3;
                printf("     The intersecting lines drawn on maps and globes are ________\n");
                printf("     1) latitudes\n");
                printf("     2) longitudes\n");
                printf("     3) geographic grids\n");
                printf("     4) 	None of the above\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=3;
                printf("     The great Victoria Desert is located in\n");
                printf("     1) Canada\n");
                printf("     2) West Africa\n");
                printf("     3) Australia\n");
                printf("     4) North America\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=2;
                printf("     The leading state in producing paper is ________\n");
                printf("     1) Bihar\n");
                printf("     2) West Bengal\n");
                printf("     3) Kerala\n");
                printf("     4) Orissa\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 6:{
                c=3;
                printf("     The largest dune files are found in ________\n");
                printf("     1) Middle East\n");
                printf("     2) North Africa\n");
                printf("     3) both (1) and (2)\n");
                printf("     4) None of the above\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 7:{
                c=4;
                printf("     The highest average salinity amongst the following seas is reported from ________\n");
                printf("     1) Red Sea\n");
                printf("     2) Black Sea\n");
                printf("     3) Mediterranean Sea\n");
                printf("     4) Dead Sea\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 8:{
                c=4;
                printf("     The Himalayan mountain system belongs to which of the following?\n");
                printf("     1) Volcanic mountains\n");
                printf("     2) Residual mountains\n");
                printf("     3) Block mountains\n");
                printf("     4) Fold mountains\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 9:{
                c=1;
                printf("     The infrared radiation by sun are strongly absorbed by ________\n");
                printf("     1) carbon dioxide\n");
                printf("     2) water vapours\n");
                printf("     3) carbon dioxide and water vapours\n");
                printf("     4) ozone\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 10:{
                c=3;
                printf("     The Ice age ended about ________ years ago.\n");
                printf("     1) 140\n");
                printf("     2) 1,400\n");
                printf("     3) 14,000\n");
                printf("     4) 140,000\n");
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
void topic4()//Topic name is Indian History
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
                printf("     The Battle of Plassey was fought in ________\n");
                printf("     1) 1757\n");
                printf("     2) 1782\n");
                printf("     3) 1748\n");
                printf("     4) 1764\n");
                printf("     Enter correct option number: ");
                scanf("      %d",&ia);
                break;
               }
        case 2:{
                c=1;
                printf("     Under Akbar, the Mir Bakshi was required to look after ________\n");
                printf("     1) Emilitary affairs\n");
                printf("     2) the state treasury\n");
                printf("     3) the royal household\n");
                printf("     4) the land revenue system\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 3:{
                c=3;
                printf("     The use of Kharoshti in ancient Indian architecture is the result of India's contact with ________\n");
                printf("     1) Central Asia\n");
                printf("     2) Iran\n");
                printf("     3) Greece\n");
                printf("     4) China\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 4:{
                c=2;
                printf("     We hear of two envoys being sent to the Roman kings, one in 27-28 AD to the court of Augustus and the other in 110-20 AD to the court of ________\n");
                printf("     1) Cartius\n");
                printf("     2) Trajan\n");
                printf("     3) Nero\n");
                printf("     4) Brutus\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 5:{
                c=4;
                printf("     The troops raised by the emperor but not paid directly the state and place under the charge of mansabadars were know as ________\n");
                printf("     1) Walashahi\n");
                printf("     2) Barawardi\n");
                printf("     3) JCumaki\n");
                printf("     4) Dakhili\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 6:{
                c=4;
                printf("     There was a sharp class division at Harappa and Mohen-jodaro. This is clear from the ________\n");
                printf("     1) Indus seals excavated\n");
                printf("     2) religious beliefs of the Harappans\n");
                printf("     3) tools and implements used by the Harappans\n");
                printf("     4) different types of dwellings excavated\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 7:{
                c=3;
                printf("     Tipu sultan was the ruler of ________\n");
                printf("     1) Hyderabad\n");
                printf("     2) Madurai\n");
                printf("     3) Mysore\n");
                printf("     4) Vijayanagar\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 8:{
                c=3;
                printf("     The term 'yavanika' meant ________\n");
                printf("     1) foreign goods\n");
                printf("     2) dancer\n");
                printf("     3) curtain\n");
                printf("     4) theatre\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 9:{
                c=3;
                printf("     The title of 'Viceroy' was added to the office of the Governor-General of India for the first time in ________\n");
                printf("     1) 1848 AD\n");
                printf("     2) 1856 AD\n");
                printf("     3) 1858 AD\n");
                printf("     4) 1862 AD\n");
                printf("     Enter correct option number: ");
                scanf("     %d",&ia);
                break;
               }
        case 10:{
                c=3;
                printf("     Two of the great Mughals wrote their own memories. There were ________\n");
                printf("     1) Babar and Humayun\n");
                printf("     2) Humayun and Jahangir\n");
                printf("     3) Babar and Jahangir\n");
                printf("     4) Jahangir and Shahjahan\n");
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
