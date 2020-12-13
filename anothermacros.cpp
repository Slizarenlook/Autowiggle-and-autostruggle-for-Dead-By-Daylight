#include <iostream>
#include <windows.h>

using namespace std;

bool nicher = false;
bool gur = false;

int main() {

std::string StringVec[] = {
"                                                              ..---..._",
"                                                        ..----         --.",
"                                                   ..----                 -.",
"                                               ..---.                       -",
"                                            .--",
"                                         .--      ....-_",
"                                      .=-   _..-- F   .---.....___-..",
"                                     -L_ _-'    .-  j-  .--:   /--._ --",
"                                        -      :  .-  j-  :   :    |-- -.",
"                                  ......---------------------:_     |   |",
"                        ...-------                             -.   f   | -",
"                ...-----       . ..------------..                -.-... f  -.",
"         ..------       ..------------..-----------^^::            |. --.    .",
"     .---           .mm::::::::::::::::::::::::::...  --L           |x   -.",
"   --             mm;;;;;;;;;;XXXXXXXXXXXXX:::::::::::.. |           |x.   -",
" xF        -._ .mF;;;;;;XXXXXXXXXXXXXXXXXXXXXXXXXX:::::::|            |X:.  -",
"j         |   j;;;;;XXX#############################::::::|            XX::::",
"|          |.#;::XXX##################################::::|            |XX:::",
"|          j#::XXX#######################################::             XXX::",
"|         .#:XXX###########################################             |XX::",
"|         #XXX##############################XX############Fl             XXX:",
"|        .XXX###################XX#######X##XXX###########Fl             lXX:",
" |       #XX##################XXX######XXXXXXX###########F j             lXXX",
" |       #X#########X#X#####XXX#######XXXXXX#######XXX##F  jl            XXXX",
" |       #X#######XX#-  V###XX#' ####XXXXXX##F-T##XXXXXX.  V   /  .    .#XXXX",
"  |       #########-     V#XX#'  -####XXXX##.---.##XXXXXX.    /  /  / .##XXXX",
"  |       -######X' .---- -V##L   #####XXX#-      -###XXXX. .-  /  / .###XXXX",
"  |         #####X -   .m###m##L   ####XX#      m###m-###XX#   /  / .#####XXX",
"   |         -###X   .mF--   -y     #####     mX-   -Y#-^####X   / .######XXX",
"   |           -T#   #-        #     ####    X-       -F--###XX-###########XX",
"   |             L  d-     XXX  xm   -^##L mx     dXX  YL--##XX-S--##########",
"    |            xL J     XXX    T      --  T    XdX    L. -##XS.f |#########",
"    |             BL      X## X                  X## X      T#SS-  |#########",
"    |              #L     X###X                  X###X|     j#SSS /##########",
"     |              #L  ._ TXXX--           --._  XXXF.-    ###SS###########",
"     |              ##   -----                  ------      ##DS.###########",
"     |              TF                                      ##BBS.T#########F",
"      |             #L           ---                        ###BBS.T########'",
"      |            '##            --                     jL|###BSSS.T#######",
"       |          '####             ______              .:#|##WWBBBSS.T####F",
"      J L        '######.            ___/            _c::#|###WWWBSSS|####",
"     J ;;       '########m            _/            c:::'#|###WWWBBSS.T##-",
"    J ;;;L      :########.:m.          _          _cf:::'.L|####WWWWSSS|#-",
"  .J ;;;;B      ########B....:m..             _,c%%%:::'...L####WWWBBSSj",
" x  ;;;;dB      #######BB.......##m...___..cc%%%%%::::'....|#####WWBBDS.|",
"- ;;;;;ABB#     #######BB........##j%%%%%%%%%%%%%%:::'..... #####WWWWDDS|",
".;;;;;dBBB#     #######BB.........%%%%%%%%%%%%%%%:::'...   j####WWWWWBDF",
";;;;;BBB####    ######BBB.........%%%%%%%%%%%%%%:::'..     #####WWWWWWS",
";;;;dBBB####    ######BBB..........^%%%%%%%%%%:::-         #####WWWWWWB",
";;;:BBB######   X#####BBB-...........-^YYYYY::-            #####WWWWWWW",
";;.BB#########  X######BBB........:''                      #####WWWWWWW",
";;BB##########L X######BBB.......mmmm..                 ..x#####WWWWWWB.",
";dBB########### X#######BB.....        --._           x--  #####WWWWWWBL",
";BBB###########L X######BB...              --              ######WWWWBBBL",
"BBB#############. ######BBB.                                #####WWWWBBBB",
"BBB############## X#####BBB                                 #####WWWWWBBB",
"BBB############### T#####BB                                  #####WWWBBB     :",
"BB################# T###BBP                                   #####WWBB-    .#",
"BB##################..W##P                                      ###BBB-    .##",
"BB###################..l                                         -WW-      ###",
"BB####################j ___                                        - l    j###",
"BBB##################J_-   ----..             ':::'   .------------.  l  .####",
"BBB######B##########J########    --.           ::'  -- ..mmm####mm..--.< #####",
"BBBBBBBBBBBBBB#####J############    --_        :|  - .###############mmLlR####",
"BBBBBBBBBBBBBBB###/         #######    -.     .:| -.####################lT####",
"BBBBBBBBBBBBBBBBBj|######        ######xx-...:::|- ###f      .....      -#T###",
"BBBBBBBBBBBBBBBBjj##############           -:::.-j##F  .mm#########mmm.. Yj###",
"BBBBBBBBBBBBBBBB|^##################mmmmm xx ---mjF.mm####################j###",
"BBBBBBBBBBBBBBBB|                      ######mmmmmm#######################j###",
"BBBBBBBBBBBBBBBBY#m...   ..mmm##########PPPPP#####m..                    lj###",
"BBBBBBBBBBBBBBBBB2##############^^--     ..umF^^^Tx ^######........mmmmmmlj###",
"BBBBBBBBBBBBBBBBBJT######^^^--     .mm##PPPF-....-m.  -^^###############lj####",
"BBBBBBBBBBBBBBBBB##^L         .mmm###PPP............-m..    ----^^^^^-- lj####",
"BBBBBBBBBBBBBBBB#####Y#mmx#########P..................-^:muuuummmmmm###^.#####",
"BBBBBBBBBBBBBBBB#####::Y##mPPPPF^-.......|.............. --^^######^^-...#####",
"BBBBBBBBBBBBBB########..................F............           ........#####",
"BBBBBBBBBBBBB#########.................|..........          :       ....l#####",
"BBBBBBBBBBBB###########...............F.........                     ..######",
"BBBBBBBBBBB#############.............|........                :         dA####",
"BBBBBBBBBB##############.....................                           kM####",
"BBBBBBBBB################..................                             k#####",
"BBBBBBB##################................                               k#####",
"BBBBB#####################.............                                 t#####",
"BB########################............                                  -E####",
"B########################F............                           .       -####",
"#########################............'                           ..       -L##",
"########################F............                           ...        -L#",
"#######################F............'                           .....       -#",
"######################F.............                           .......       -",
"#####################$..............                         .........",
"#####################lmmm.............                      ...........   ..m#",
"####################j########mmmm.............            ......mmmmmm########",
"###################j###::::;:::::########mmmmmmm##############################",
"##################j:::::::;:::::::;;::##############################^^^----",
"##################.mm:::mmm######mmmm:::#################^^----",
"#################F...^m::;::######################mm---",
"#################.......m;::::::::::::#########^-",
"################F.........###mmm::::######^---",
" ##############F...........:###########-",
"   ############..............':####",
"     #########F............mm^--",
"       #######..........m^--",
"          ####.......%^-",
"             #.....x-",
"             |.x--",
"            .--",
"          .-",
"        .-",
"      .-",
"     -",
"   --",
  };
  
   for (short int i = 1; i < 111; i++) {
  	cout<<StringVec[i]<<endl;
  	Sleep(40);
  };
  

  
  cout<<"		______________________________________________				"<<  endl;
  cout<<"		Attacking software of Uberconference of Zyabls				\n"<<  endl;
  cout<<"This program makes autostrugle and autowiggle possible, so remember... \n"<<  endl;
  cout<<"F key - autostruggle. \n"<<  endl;
  cout<<"G key - autowiggle. \n"<<  endl;
  cout<<"V key to deactivate  \n"<<  endl;
  cout<<"I'd highly recommend holding deactivational keys (just for a couple of seconds, ofcourse) and activate macros a little bit earlier (for example during the animation)"<<  endl;
  
  	INPUT gypsy;
  gypsy.type = INPUT_KEYBOARD;
  gypsy.ki.time = 0;
  gypsy.ki.dwFlags = 0;
  gypsy.ki.wVk = 0x20;
  gypsy.ki.dwExtraInfo = 0;
  
    	INPUT gypsy2;
  gypsy2.type = INPUT_KEYBOARD;
  gypsy2.ki.time = 0;
  gypsy2.ki.dwFlags = KEYEVENTF_KEYUP;
  gypsy2.ki.wVk = 0x20;
  gypsy2.ki.dwExtraInfo = 0;
  
    	INPUT bruh;          
   bruh.type = INPUT_KEYBOARD;
   bruh.ki.time = 0;
   bruh.ki.dwFlags = 0;
   bruh.ki.wVk = 0x41;
   bruh.ki.dwExtraInfo = 0;
   
       	INPUT bruh2;          
   bruh2.type = INPUT_KEYBOARD;
   bruh2.ki.time = 0;
   bruh2.ki.dwFlags = KEYEVENTF_KEYUP;
   bruh2.ki.wVk = 0x41;
   bruh2.ki.dwExtraInfo = 0;
  
    	INPUT lain;
   lain.type = INPUT_KEYBOARD;
  lain.ki.time = 0;
  lain.ki.dwFlags = 0;
  lain.ki.wVk = 0x44;
  lain.ki.dwExtraInfo = 0;
  
  		INPUT lain2;
   lain2.type = INPUT_KEYBOARD;
  lain2.ki.time = 0;
  lain2.ki.dwFlags = KEYEVENTF_KEYUP;
  lain2.ki.wVk = 0x44;
  lain2.ki.dwExtraInfo = 0;
 
  while (true) {
  	if (GetAsyncKeyState(0x46) == -32767) {
	  Sleep(300);
  		do {
  				Sleep(300);
  			 SendInput(1,&gypsy,sizeof(INPUT));
  			 Sleep(50);
  			 SendInput(1,&gypsy2,sizeof(INPUT));
		  } 
		while (GetAsyncKeyState(0x56) != -32767);	
	  }
	
	if (GetAsyncKeyState(0x47) == -32767) {
  	Sleep(300);
  		do {
  				Sleep(300);
  			 SendInput(1,&bruh,sizeof(INPUT));
  			   	Sleep(50);
  			SendInput(1,&bruh2,sizeof(INPUT));
  				Sleep(300);
  			 SendInput(1,&lain,sizeof(INPUT));
  			 	Sleep(50);
  			 SendInput(1,&lain2,sizeof(INPUT));
		  }
		while (GetAsyncKeyState(0x56) != -32767);
	  }
  }

}
