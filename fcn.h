#include<time.h>
#include<stdio.h>
void gotoxy(int,int);
void welcomescreen();
int password();
void cusp(int);
void delay(int);
int main();
void fortunes();
void asciiaries();
void asciitaurus();
void asciigemini();
void asciicancer();
void asciileo();
void asciivirgo();
void asciilibra();
void asciiscorpio();
void asciisaggitarius();
void asciicapricorn();
void asciiaquarius();
void asciipisces();
void compat(int);
void details(char *,char,int);
int zodmenu();
int lovemenu();
void admintools();


struct logfo{
    char name[50];
    char sex;
    int yr,mn,dy;
        }c;



COORD coord = {0, 0}; // sets coordinates to 0,0

void gotoxy (int x, int y)
        {
        coord.X = x;
        coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        }


void welcomescreen()
            {
                int i=1,j=0;
                for(;i<80;i++)  //topmost line
                    {
                        gotoxy(i,1);
                        printf("*");
                        int j=0;
                        for(j=0;j<=10000000;j++);
                    }
                i=1;
                for(;i<25;i++)  //the line on the right of the screen
                    {
                        gotoxy(79,i);
                        printf("|\n");
                        for(j=0;j<=10000000;j++);
                    }
                i=79;
                for(;i>=1;i--)     //the bottom linse
                    {
                        gotoxy(i,24);
                        printf("*");
                        for(j=0;j<=10000000;j++);
                    }
                i=23;
                for(;i>0;i--)      //the leftmost line
                    {
                        gotoxy(1,i);
                        printf("|");
                        for(j=0;j<=10000000;j++);
                    }
            //printfint the ascii images
                gotoxy(6,7);printf("WANT TO KNOW YOUR FUTURE???...");
                delay(1);
                gotoxy(68,4); printf(" %cWWWWW/",92);
                delay(1);
                gotoxy(66,5); printf(" _|  o_o  |_");
                delay(1);
                gotoxy(53,6); printf(" %cWWWWWWW/   (_   / %c   _)",92,92);
                delay(1);
                gotoxy(51,7); printf(" _.'` o_o `'._   |  %c_/  |",92);
                delay(1);
                gotoxy(50,8); printf(" (_    (_)    _)  : ~~~~~ :");
                delay(1);
                gotoxy(52,9); printf(" '.'-...-'.'     %c_____/",92);
                delay(1);
                gotoxy(52,10); printf("  (`'---'`)      [     ]");
                delay(1);
                gotoxy(51,11); printf("     %c%c%c%c%c         %c%c%c%c%c",96,96,96,96,96,34,34,34,34,34);
                delay(1);
                gotoxy(10,18);printf("....THE VOO-DOO BROTHERS ARE AT YOUR DESK!!!!...");
                gotoxy(49,23);printf("you are only a click away!!!!!!");
                getch();

                system("cls");
                gotoxy(1,1); printf("when will i top the class?");
                for(j=0;j<=100000000;j++);
                gotoxy(40,3);printf("WHEN WILL I COME OUT OF THIS PROBLEM?");
                for(j=0;j<=100000000;j++);
                gotoxy(5,5);printf("what should i do to get the tender??");
                for(j=0;j<=100000000;j++);
                gotoxy(40,7); printf("DOES SHE LOVE ME??");
                for(j=0;j<=100000000;j++);
                gotoxy(1,9); printf("which business will help me?");
                for(j=0;j<=100000000;j++);
                gotoxy(30,11); printf("HOW IS MY MARRIED LIFE GOING TO BE??");
                for(j=0;j<=100000000;j++);
                gotoxy(4,13);printf("how is my health going to be?");
                for(j=0;j<=100000000;j++);
                gotoxy(30,15);printf("million cases.....");
                for(j=0;j<=100000000;j++);
                gotoxy(49,15);printf("thousand guesses.....");
                for(j=0;j<=100000000;j++);
                gotoxy(33,16);printf("sure shot answer.....");
                for(j=0;j<=100000000;j++);
                gotoxy(55,16);printf("is right here.....");
                    }


int password()
	{
        char a='y';
        int b=0;
        while(a=='y')
            {
                system("cls");
				gotoxy(30,13);
				char buffer[256] = {0};
				char password[] = "occlumency";
				char c;
				int pos = 0;

				printf("%s", "Enter password: ");
				do
					{
						c = getch();

						if( isprint(c) )
						{
							buffer[ pos++ ] = c;
							printf("%c", '*');
						}
						else if( c == 8 && pos )
						{
							buffer[ pos-- ] = '\0';
							printf("%s", "\b \b");
						}
					}
				while( c != 13 );

				if( !strcmp(buffer, password) )
					{
                        printf("\n%s\n", "\t\t\t\tACCESS GRANTED!!");
                        return (1);exit(0);
					}
				else
                    {
                        printf("\n%s\n", "\t\t\t\tACCESS DENIED!!\n");
                        printf("TRY AGAIN??(Y/N)");
                        a=tolower(getche());
                        b++;
                        if(b==3)
                            {
                                printf("\a\a\a");
                                gotoxy(25,8);printf("MORE THAN 3 FAILURES!!");
                                for(b=5;b>=1;b--)
                                    {
                                       gotoxy(22,9);printf("SYSTEM RESTARTS IN %d SECONDS",b);
                                        delay(1);
                                    }
                                main();
                            }

                        }
                }

        return 2;
	}


/*void cusp(int x)
    {
        char *array[]={
            "*  The Zodiacal Sign of Aries commences on March 21st, but for next seven days, it does not come into its full power. It starts loosing the power form May 14th. For seven days it is gradually losing its strength on account of becoming overlapped by the ""cusp"" of the incoming sign -Taurus.",
            "*  The zodiacal Sign of Taurus commences on April 20th, but for seven days it does not come into its full power until on or about April 27th. From this date onwards it is in full strength until May 20th, and is then for seven days gradually losing its strength on account of becoming overlapped by the ""cusp"" of the incoming sign Gemini.",
            "*  The Zodiacal Sign of Gemini - The Twins commences on May 21st, but for seven days it does, not come into its full power until on or about May 28th.From this date onwards it is in full strength until June 20th, and is then for seven days, gradually losing strength on account of becoming overlapped by the ""cusp"" of the incoming sign -Cancer.",
            "*  The Zodiacal Sign of Cancer commences on June 21st, but for days it does not come into full power until on or about June 28th. From this date onwards it is In full strength until July 20th, and is then for seven days gradually losing its strength on account of becoming overlapped by the ""cusp"" of the incoming sign Leo.",
            "*  The Zodiacal Sign of Leo commences on July 23rd, but for seven days it does not come into its full power until on or about July 28th. From this date onwards it is in full strength until August 20th and is then for seven days gradually losing its strength on account of becoming overlapped by the ""cusp"" of the incoming sign Virgo.",
            "*  The Zodiacal Sign of Virgo commences on August 23rd, but for seven days it does not come into its full power until on or about August 29th. From this date onwards it is in full strength until September 20th, and is then for seven days gradually losing its strength.",
            "*  The Zodiacal Sign of Libra commences on September 23rd, but for seven days it does not come into full power until on or about September 28th. From this date onwards it is in full strength until October 20th, and is then for seven days gradually losing power on account of becoming overlapped by the incoming sign Scorpio.",
            "*  The Zodiacal Sign of Scorpio commences on October 23rd, but for seven days it does not come into its full power until on or about October 28th. From this date onwards it is in full strength until November 20th and is then for seven days gradually losing its strength on account of becoming overlapped by the ""cusp"" of the incoming sign Sagittarius.",
            "*  The Zodiacal Sign of Sagittarius commences on November 22nd, but for seven days it does not come into its full power until on or about November 22. From this date onwards it is in full power until December 20th, and is then for seven days gradually losing its strength on account of being overlapped by the incoming Sign Capricorn.",
            "*  The Zodiacal Sign of Capricorn commences on December 22nd, but for seven days, being overlapped by the influence of the previous sign, so it can not take its full power until on or about December 28th. ",
            "*  The Zodiacal Sign of Aquarius commences on January 20th, but for seven days, being overlapped by the ""cusp"" of the previous sign, it does not come into full power until on or about January 28th.You generally tend to feel very lonely in life. You are over-sensitive, and easily wounded in their feelings.",
            "*  The Zodiacal Sign of Pisces commences on February 19th, but for seven days, it does not come into its full power until about February 27th. From this date onwards it is in full strength until March 20th, and it is then for seven days gradually losing its strength on account of becoming overlapped by the ""cusp"" of the incoming sigsn Aries."
                            };
        gotoxy(1,9);
        printf("%s\n",array[x]);
    }*/


void delay(int x)
    {
        int i=0,j;
        for(;i<=x;i++)
           for(j=0;j<=105500000;j++);
        return ;
    }


void fortunes()
    {
        char *fort[]={"YOUR TALENTS WIL BE RECOGNIZED AND SUITABLY REWARDED.",
                      "YOU ARE GOING TO HAVE SOME NEW CLOTHES.",
                      "DO NOT MISTAKE TEMPTATION FOR OPPORTUNITY.",
                      "THE WORLD MAY BE YOUR OYSTER, BUT IT DOESN'T MEAN YOU'LL GET ITS PEARL.",
                      "FLATTERY WILL GO FAR TONIGHT.",
                      "THE GREATEST DANGER COULD BE YOUR STUPIDITY.",
                      "A SECRET ADMIRER WILL SOON SEND YOU A SIGN OF AFFECTION.",
                      "WE CANNOT DO GREAT THINGS; ONLY SMALL THINGS WITH GREAT LOVE. -- MOTHER TERESA.",
                      "YOU WERE BORN WITH THE SKILL TO COMMUNICATE WITH PEOPLE EASILY.",
                      "NONE OF THE SECRETS OF SUCCESS WILL WORK UNLESS YOU DO.",
                      "YOU ARE VERY EXPRESSIVE AND POSITIVE IN WORDS, ACT AND FEELING.",
                      "TRUST YOUR INTUITION. THE UNIVERSE IS GUIDING YOUR LIFE.",
                      "IF YOU WANT THE RAINBOW, YOU MUST TO PUT UP WITH THE RAIN. -- D. PARTON",
                      "A BUG IN THE HAND IS BETTER THAN ONE AS YET UNDETECTED.",
                      "A COMPLEX SYSTEM THAT WORKS IS INVARIABLY FOUND TO HAVE EVOLVED FROM A SIMPLE SYSTEM THAT WORKS.",
                      "A BLACK CAT CROSSING YOUR PATH SIGNIFIES THAT THE ANIMAL IS GOING SOMEWHERE.",
                      "AND NOW THE TIME FOR SOMETHING COMPLETELY DIFFERENT."
                      "THE HARD TIMES WILL BEGIN TO FADE, JOY WILL TAKE THEIR PLACE.",
                      "LIES TODAY.",
                      "SMALL ONES CAN BE JUST AS EFFECTIVE.",
                      "DON'T YOU WISH YOU HAD MORE ENERGY... OR LESS AMBITION?",
                      "FINE DAY FOR FRIENDS.",
                      "O-SO DAY FOR YOU.",
                      "IT IS SO VERY HARD TO BE AN ON-YOUR-OWN-TAKE-CARE-OF-YOURSELF-BECAUSE-THERE-IS-NO-ONE-ELSE-TO-DO-IT-FOR-YOU GROWNUP.",
                      "ITS A VERY *__UN*LUCKY WEEK IN WHICH TO BE TOOK DEAD.",
                      "IT'S ALL IN YOUR HEAD.",
                      "GET A LIFE!",
                      "MANY CHANGES OF MIND AND MOOD; DO NOT HESITATE TOO LONG.",
                      "STAY AWAY FROM CARS TODAY.",
                      "ALL YOUR HARD WORK WILL SOON PAY OFF.",
                      "YOU'LL DIE IN A LOTTLE MORE THAN A MONTH.",
                      "A GOOD TIME TO FINISH UP OLD TASKS.",
                      "YOU DONT REALLY BELIEVE IN FORTUNES.",
                      "STAY AWAKE TILL LATE TODAY.",
                      "YOU'LL BE SURPRISED.",
                      "LET YOUR FOOT LOOSE TODAY!",
                      "YOUR CRUSH WILL MEET TO YOU TODAY.",
                      "YOU NEED SOME FUN IN LIFE.",
                      "WHAT HAPPENED LAST NIGHT CAN HAPPEN AGAIN.",
                      "A FRIEND ASKS ONLY FOR YOUR TIME, NOT YOUR MONEY.",
                      "NEVER TROUBLE TROUBLE UNTIL TROUBLE TROUBLES YOU.",
                      "MISUNDERSTANDING WILL BREAK YOUR FRIENDSHIP SOON.",
                      "YOU HAVE TAKEN YOURSELF TOO SERIOUSLY.",
                      "YOU'RE STUPID.",
                      "YOU HAVE THE CAPACITY TO LEARN FROM MISTAKES.",
                      "YOU'LL LEARN A LOT TODAY."
                      "YOU HAVE UNUSUAL EQUIPMENT FOR SUCCESS, USE IT PROPERLY.",
                      "YOU WILL RECEIVE A FORTUNE COOKIE.",
                      "SOMEONE WILL INVITE YOU TO A KARAOKE PARTY.",
                      "HELP! IM STUCK INSIDE THE FORTUNE TELLER!",
                      "THERE IS NO MISTAKE SO GREAT AS THAT OF BEING ALWAYS RIGHT.",
                      "SOMEONE THINKS YOU ARE WONDERFULLY MYSTERIOUS",
                      "A TUB AND A RUB WILL CHANGE YOUR DAY.",
                      "EAT YOUR VEGETABLE AND YOU WILL BE STRONG LIKE POPEYE.",
                      "A CLOSED MOUTH GATHERS NO FEET.",
                      "YOU WILL MAKE A GREAT LAWYER.",
                      "IF YOU THINK YOU’RE TOO SMALL TO BE EFFECTIVE, YOU’VE NEVER BEEN IN BED WITH A MOSQUITO.",
                      "A ROLLING STONE GATHERS NO MOSS.",
                      "YOU CAN ALWAYS FIND HAPPINESS AT WORK ON FRIDAY.",
                      "A FANATIC IS ONE WHO CAN'T CHANGE HIS MIND, AND WON'T CHANGE THE SUBJECT.",
                      "HE WHO LAUGHS AT HIMSELF NEVER RUNS OUT OF THINGS TO LAUGH AT.",
                      "FLATTERY WILL GO FAR TONIGHT.",
                      "HE WHO FARTS IN CHURCH, SITS IN HIS OWN PEW!",
                      "YOU WILL RECEIVE A FORTUNE.",
                      "SING AND REJOICE, FORTUNE IS SMILING ON YOU.",
                      "YOU HAVE THE RARE ABILITY TO RECOGNIZE ABILITY IN OTHERS.",
                      "LIFE TO YOU IS A DASHING AND BOLD ADVENTURE.",
                      "THE TIME IS RIGHT TO MAKE NEW FRIENDS.",
                      "YOU WILL MAKE A SUDDEN RISE IN LIFE.",
                      "SOMEONE FROM YOUR PAST HAS RETURNED TO STEAL YOUR HEART.",
                      "YOU DISPLAY THE WONDERFUL TRAITS OF CHARM AND COURTESY.",
                      "HAPPINESS ALWAYS ACCOMPANIES WITH YOU.",
                      "YOUR HEART IS PURE, AND YOUR MIND CLEAR, AND SOUL DEVOUT.",
                      "WHEN WINTER COMES HEAVEN WILL RAIN SUCCESS ON YOU.",
                      "YOU WILL HAVE A FINE CAPACITY FOR THE ENJOYMENT OF LIFE.",
                      "YOU WILL ENJOY GOOD HEALTH.",
                      "ACCEPT THE NEXT PROPOSITION YOU HEAR.",
                      "YOU SHOULD BE ABLE TO UNDERTAKE AND COMPLETE ANYTHING.",
                      "IN GOD (SIC) WE TRUST; ALL OTHERS MUST PAY CASH.",
                      "THESE THREE GO TOGETHER:\nYOU WILL BE CALLED UPON TO HELP A FRIEND IN TROUBLE.\nDON'T LET FRIENDS IMPOSE ON YOU, WORK CALMLY AND SILENTLY.\nYOUR ROAD WILL BE MADE SMOOTH FOR YOU BY GOOD FRIENDS.",
                      "YOU WILL ALWAYS BE SUCCESSFUL IN YOUR PROFESSIONAL CAREER.",
                      "THERE IS NO WISDOM GREATER THAN KINDNESS.",
                      "YOU LEAD A USEFUL LIFE NO MATTER WHAT RICHES ARE COMING TO YOU.",
                      "YOUR MIND IS CREATIVE, ORIGINAL AND ALERT.",
                      "YOU COULD PROSPER IN THE FIELD OF MEDICAL RESEARCH.",
                      "YOU ARE A HAPPY MAN.",
                      "YOUR PRESENT PLANS ARE GOING TO SUCCEED.",
                      "A PLEASANT SURPRISE IS WAITING FOR YOU.",
                      "THESE TWO GO TOGETHER:\nYOU HAVE MUCH SKILL IN EXPRESSING YOURSELF TO BE EFFECTIVE.\nYOU HAVE GREAT SKILL IN EXPRESSING YOURSELF TO BE EFFECTIVE.",
                      "YOUR HOME IS A PLEASANT PLACE FROM WHICH YOU DRAW HAPPINESS.",
                      "A VISIT TO A MUSEUM WILL BRING YOU A NEW SENSE OF APPRECIATION.",
                      "YOUR GOOD DEEDS ARE NEVER FORGOTTEN.",
                      "IT'S TIME YOU ASKED THAT SPECIAL SOMEONE OUT ON A DATE.",
                      "THE WORLD IS ALWAYS READY TO RECIEVE TALENT WITH OPEN ARMS.",
                      "WISH YOU A LONG LIFE.",
                      "YOU WILL HAVE A LONG AND HEALTHY LIFE.",
                      "HAPPINESS IS FOUND WHEN ONE IS NOT LOOKING.",
                      "SOMEONE HAS COMPLEMENTED YOU TODAY IN YOUR ABSENCE.",
                      "YOU WILL BECOME BETTER ACQUAINTED WITH A COWORKER."


                      };
        srand(time(NULL));
        gotoxy(5,10);printf("------------------------------------------------------------------");
        gotoxy(5,18);printf("------------------------------------------------------------------");
        gotoxy(10,12);printf("YOUR FORTUNE FOR TODAY:");
        gotoxy(10,14);printf("%s",fort[rand()%100]);
        gotoxy(50,23);printf("Enter any key to continue...");
        getch();
    }

void asciiaries()
    {//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Aries-The Ram");
        gotoxy(6,3);printf(".-.   .-.");
        gotoxy(5,4);printf("(_  \\ /  _)");
        gotoxy(10,5);printf("|");
        gotoxy(10,6);printf("|\n\n");
        }


void asciitaurus()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Taurus-The Bull");
        gotoxy(6,3);printf(".     .");
        gotoxy(6,4);printf("'.___.'");
        gotoxy(6,5);printf(".'   `.");
        gotoxy(5,6);printf(":       :");
        gotoxy(5,7);printf(":       :");
        gotoxy(6,8);printf("`.___.'\n\n");
}


void asciigemini()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Gemini-The Twins");
        gotoxy(5,3);printf("._____.");
        gotoxy(7,4);printf("| |");
        gotoxy(7,5);printf("| |");
        gotoxy(7,6);printf("| |");
        gotoxy(6,7);printf("_|_|_");
        gotoxy(5,8);printf("'     `\n\n");
}


void asciicancer()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Cancer-The Crab");
        gotoxy(8,3);printf(".--.");
        gotoxy(7,4);printf("/   _`.");
        gotoxy(6,5);printf("(_) ( )");
        gotoxy(5,6);printf("'.    /");
        gotoxy(5,7);printf("  `--'\n\n");
        }


void asciileo()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Leo-The Lion");
        gotoxy(7,3);printf(".--.");
        gotoxy(6,4);printf("(    )");
        gotoxy(5,5);printf("(_)  /");
        gotoxy(9,6);printf("(_,\n\n");
        }


void asciivirgo()
{//drawing the ascii art
                    gotoxy(3,2);printf("Your horoscope sign is Virgo-The Virgin");
                    gotoxy(6,3);printf("_");
                    gotoxy(5,4);printf("' `:--.--.");
                    gotoxy(8,5);printf("|  |  |_");
                    gotoxy(8,6);printf("|  |  | )");
                    gotoxy(8,7);printf("|  |  |/");
                    gotoxy(13,8);printf("(J\n\n");
                    }


void asciilibra()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Libra-The Balance");
        gotoxy(10,3);printf("__");
        gotoxy(5,4);printf("___.'  '.___");
        gotoxy(5,5);printf("____________\n\n");
        }


void asciiscorpio()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Scorpius-The Scorpion");
        gotoxy(6,3);printf("_");
        gotoxy(5,4);printf("' `:--.--.");
        gotoxy(8,5);printf("|  |  |");
        gotoxy(8,6);printf("|  |  |");
        gotoxy(8,7);printf("|  |  |  ..,");
        gotoxy(14,8);printf("`---':");
        }


void asciisaggitarius()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Sagittarius-  The Archer");
        gotoxy(11,3);printf("...");
        gotoxy(11,4);printf(".':");
        gotoxy(9,5);printf(".'");
        gotoxy(5,6);printf("`..'");
        gotoxy(5,7);printf(".'`.\n\n");
        }


void asciicapricorn()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Capricorn-  The Goat");
        gotoxy(13,3);printf("_");
        gotoxy(5,4);printf("\\      /_)");
        gotoxy(6,5);printf("\\    /`.");
        gotoxy(7,6);printf("\\  /   ;");
        gotoxy(8,7);printf("\\/ __.'\n\n");
        }


void asciiaquarius()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Aquarius-The Water Bearer");
        gotoxy(5,3);printf("..-\"-._.-\"-._.-");
        gotoxy(5,4);printf("..-\"-._.-\"-._.-\n\n");
        }


void asciipisces()
{//drawing the ascii art
        gotoxy(3,2);printf("Your horoscope sign is Pisces-The Fishes");
        gotoxy(5,3);printf("`-.    .-'");
        gotoxy(8,4);printf(":  :");
        gotoxy(6,5);printf("--:--:--");
        gotoxy(8,6);printf(":  :");
        gotoxy(5,7);printf(".-`    `-.\n\n");
        }


void compat(int a)
    {
        char *love[]={"Both enter with the intent of dominating the scenario. A passionate affair, but neither is content with playing the smaller role. In the sexual relationships between them the woman will dominate. The Aries-man will not stand for a long time the role of subordinated. Each of them will try to become the leader, and it will create the atmosphere of quarrel. As a result it means many problems in a bedroom. While this is definitely not the best union ever found, it can be made to work if both love each other enough to sacrifice a little of self and ego for the sake of the others feelings. Having a Birth Natal Charts made is almost a must for these two as the charts will show where the weakness and the strengths lie and enable them to work around and with these so that they will have a lasting and happy union.",
                      "Both are highly sensual, but Aries may be annoyed by the deliberate pace and unimaginative lovemaking of Taurus. Aries is a fun seeking person and will be trying to entertain him/herself constantly. The thrift of Taurus, who seldom makes anything spontaneously, will irritate. Taurus is good at making money but Aries is even better at spending it. The long haul can be hard going, though if they hang on long enough Aries will come to appreciate Taurus's steadiness and dependability. If Taurus allows Aries to take a lead role, they will find out the new opportunities of sensual pleasure. Otherwise it will be difficult to get a desirable balance. The relationships are usually short term.",
                      "This union can turn out to be delightful, because both Aries and Gemini are tireless, active, inclined to search for a new knowledge. The Aries' tendency to dominate is limited by an ingenuity of the Twins. The Twins have no sexual prejudices, but their energy can search for other ways of satisfaction. Gemini may seek extra stimulation, but is discreet about it. Both minds mesh well; Aries is dynamic and intelligent, Gemini is versatile and ingenious. Aries is likely to be the leader sexually, and Gemini delights in thinking up variations to keep Aires's interest at a peak. The marriage can turn out to be quite successful.",
                      "This combination is usually hard to match. The powerful sexual attraction is a usual thing for these two signs. A problem is that sexual attraction fades in the face of many temperamental differences. Aries leaps without looking; Cancer is cautious. Cancer loves hearth and home; Aries hates being tied down. Resentments build up and they argue over trifles. The discrepancy between their temperaments results in strengthening of incompatibility in bed. Astrological forecast for this couple is a stormy sea, and the marriage for certain will result in ship-wreck.",
                      "Both Aries and Leo have aggressive temperaments. Both have got egos to burn and both like to lead. Aggressive Aries wouldn't dream of taking second place, and kingly Leo needs constant admiration. This is particularly true if Aries will allow Leo to hold the center of the floor on occasions. Sharing the limelight is important on Leo's part however, as Aries will feel the need to be on stage once in a while as well. Aries should flatter the Leo on his/her physical fit. Being so much alike sexually can be one of the important things that will keep them true to their commitments. Between the two of them, if one is loving and tactful with the other, meeting that persons emotional needs they can create a steady and long term union.",
                      "The bravery of the Aries will probably intrigue the imagination of shy, reserved Virgo for a time. However, their sexualities are so different, that they will have to be very patient in order to succeed. Aires's passions are impulsive and direct. Virgo's sexuality is more enigmatic and takes time to be revealed. In other areas Aries is full of exciting new plans and ideas, and insists on being boss. Virgo is critical and fussy, and likes things to be done the way Virgo wants. In case the charts are well aspected for these two it could work, but it will take a lot of effort on both sides. Otherwise the relationships will not be very pleasant and chances for a successful marriage are fifty / fifty.",
                      "There is a powerful initial attraction between these two opposites, for in certain areas each supplies what the other lacks. Both are fond of of sexual pleasures, but the Aries probably will try to go too far too quickly. The Libra is inclined to idealize everything and can lose all illusions. Later Libra will look for someone less demanding, and Aries will bind someone more adoring. The physical connection is possible, but only temporarily. The marriage is very rare.",
                      "The sex can turn out to be either stimulating or useless. There are two directions for the events to develop. Both the Aries, and the Scorpio possess a large amount of physical energy. They are both inclined to act. On the other hand, they are both independent and do not like being controlled. Long-term disagreements may destroy their phenomenal ability to share passion of and with each other. Usually this is an unstable partnership with a low ignition point.",
                      "The Mars-Jupiter duo are usually an ideal match for each other. Sagittarius is a perfect temperamental match for Aries. They are both active, spontaneous people who like socializing, have extravagant tastes in common, and enjoy the good life. The Aries' optimism and his good sense of humor will help to overcome propensity of the Sagittarius to argue and will bring a funny side into the process of making love. The mutual understanding achieved in a bedroom, can create a favorable atmosphere for the relationships. This is certainly successful and recommended unuion. The marriage will be connected closely with a problem of physical satisfaction. In other words if they make it in the bedroom, they'll make it everywhere else.",
                      "Not a hopeful combination. Saturn, represented by Father Time, is the Capricorn's standard bearer. The Aries is a restless,fiery, impulsive experimenter. The Capricorn is on the contrary sanctimonious person. Capricorn needs to dominate and so does Aries. Problems also crop up over money Aries is extravagant, Capricorn is security minded. Capricorn is a simple soul and Aries may be too overwhelming; Aries will take risks and enjoy them while the same risks will make Capricorn shudder. Some very violent quarrels can erupt due to this and the many other personality conflicts. Aries will not like the pessimistic gloom that Capricorn use to dampen the Aries enthusiasms. The Capricorn can prefer only one pose for making love or even the certain time. However, the Aries can take the initiative under his/her own control. If it takes place, a marriage is more preferable then a short connection.",
                      "This connection will be stormy and will bring a lot of new emotions. There is a chance that the Aries will be dominating, as the Aquarius is more passive. The planet Uranus, which rules Aquarius, is unpredictable in its actions; therefore, Aquarians have a tendency to procrastinate too much to please the Arien \"up and at ' em\" characteristics. If both sides try a bit of tact & understanding, this great love affair could turn into something special. The Aries must be very tactful if he/she wants to deal with this extremely emotional dreamer. In bedroom Aquarius, while jealous and possessive of his/her partner, rarely overindulges activities as he/she has far more things to do and be engrossed in; therefore he/she is not as sexually active as Aries would like, and Aries will come to see Aquarius as a selfish lover. It is unusual, complete of events connection. In case of marriage a lot will be depending on how much they love each other.",
                      "Fire and water do not normally mix and that is why the Aries with Pisces love match could be a complex relationship. Aries is self-assured and vivacious; Pisces is somewhat shy and easily led. Aries likes to be dominant, Pisces likes having someone to lean on. The Aries will be intrigued by the behavior of Pisces in the bedroom. The active participation of the Aries will help Pisces get the shyness over. The realization of Pisces' sexual wishes can cause strong excitation. Together they should have interesting and pleasant time. The opportunity of connection or a marriage is very high, if they manage to overcome the differences between their temperaments.",
                      "This isn't the most exciting union ever, for both are domestic creatures who prefer safety to adventure. They are also not always sexually compatible. The woman is more sentimental in love, the man on the contrary is more terrestrial nature. The Taurus- man would rather prefer an other men's company. The Taurus- woman can't bear a deceit or inattention. On the other hand both share a fondness for money, are hardworking, loyal, and affectionate. The perfect solution is for each to develop some outside hobbles and friends without raising the possessive hackles of the other. The connection can and be pleasant, but marriage is under the question.",
                      "An unpromising match, though at the beginning Taurus responds to Gemini's sparkle and Gemini is intrigued by Taurus's uncomplicated directness. The Gemini's representatives are usually double-faced ,changeable people. The Taurus' representatives are tend to a constancy. Taurus is attracted by an artistry and riches of imagination of the Gemini. However The Gemini are irritated by the Taurus' slow reaction. Taurus with the innate need to possess will never be able to hang on to the unsettled Gemini. Gemini loves change and Taurus resists it. Their sex life is gradually affected by the Gemini moods which are very changeable. Gemini behaves as the playful, mischievous little kid one minute and the next minute he/she will turn basic and animalistic in his/her sexual appetites. The typical Taurus reaction to this action will probably drive him/her into someone elses bed.",
                      "Usually this makes a good combination. Both need security and a sense of permanence, and both are loving, affectionate, and passionate as well. The Cancer adds to this union more sensuality and imagination. Both are passionate and do not need any extraneous help to be pleased with each other. The Taurus is capable to understand changes in the mood of the Cancer, and can help smooth the problems if any appears. The Taurus is usually an attentive person. The Cancer is responsive. This relationship can and will improve with age and hard work, as these are such different personalities, and in many ways ones strength supports the others weakness. Cancers sex life is affected by the way they are getting along in the evening and if there is arguing or other unpleasantness Cancer will not make love to Taurus and too much of this could build a wall between them. The understanding of each other problems will help the existence of pleasant connection. A successful marriage is possible if case these two are willing to give rather than get.",
                      "Both are fixed signs, so neither will give an inch. Leo merely becomes angrier and Taurus more obstinate. Leo considers that it is natural for him/her to be a leader in the bedroom. Taurus will supply the attention that Leo requires but will expect it to be returned. Leo loves to dominate and eventually Taurus being strong willed but more patient, will raise the sword when their needs are not being met. Thrifty Taurus is also appalled at Leo's careless spending habits. Taurus is cautious and deliberate; Leo expansive and extravagant. Taurus stubbornly refuses to give Leo constant worship, and Leo is too self-centered to give Taurus the devotion it needs. On the other hand excellent physical qualities and great sex appeal are there for both partners in this match. There is a strong physical and emotional attraction but too many obstacles to hurdle.",
                      "There will be love at first sight- Both are homebodies and they share the same intellectual pursuits. Virgo, while making love prefers simple ways/positions. The Taurus is not against simplicity, but his/her style in sex can be disturbing for Virgo. But in the other aspects of life they don't have many problems. Taurus's tenacity and Virgo's sharp mind are a good combination for success as a team. And Taurus keeps a careful eye on expenditures, which pleases thrifty Virgo. A good connection is possible, but it demands to be more patient from the representatives of the both signs.",
                      "This couple shares a love of music and art, but hasn't much else in common. Taurus is the proprietor by nature and not romantic enough for Libra. Taurus likes to plan life but Libra will make no such commitment and this can lead to some violent abuse on both sides. Libra dislikes Taurus's dictatorial ways and quickly loses patience with Taurus's stodgy attitudes. To boot, Taurus is jealous of Libra's romantic and fickle nature. They are sexually in tune, so a lot of pleasant games are possible but not a sound union.",
                      "With a strong sexual urge both will find much in common. They are both equally active in sexual affairs. None of them needs to cheat on each other. On the other hand both are very jealous and stubborn. The difference between these two is that Taurus wants to own a lover, like a valuable object, and Scorpio tries to possess in an emotional sense. Taurus can be obstinate in his irritation and Scorpio can be dangerous if he/she is angry. So, this affair is complete of the problems, and marriage is possible only if both of them are very tolerant and intelligent people.",
                      "They are two very different personality types. Extremely sexual Taurus will be pleased with the Sagittarius, but also angry with his/her aspiration to search for love wherever it is only possible. When Taurus refuses to join in with the Sagittarians sporting ways, he/she will find someone who will. There are few, if any natural domestic talents in Sagittarius (unless the stars are well placed) and the Taurus domestic abilities are not given a second thought. Sagittarius hardly notices the Taurus' ability to keep or provide a comfortable home for him/her. They may feel happy together, but there is a short future for this pair.",
                      "Both partners having mutual understanding of each other's personalities. Both the Capricorn and the Taurus like money, and sure that the safety is really important. While the Taurus is a patient person the Capricorn is ready to work for both of them. Taurus can get through to aloof, cautious Capricorn and give the encouragement and responsiveness needed. Both have earthy, passionate natures, and sensual Taurus can tap the deep well of romanticism that lies under Capricorn's reserve. This couple can conceive everything in the field of sex - every idea will come truth. Capricorn's sexual appetite can be either over indulgent, or he/she may abstain altogether if affected by outside pressures. Taurus will need to be sensitive to Capricorns tension and be willing to discus it and ease his burden of guilt he/she may feel because of it. There are perfect prospects for that couple and it can turn out to be a very compatible marriage.",
                      "Aquarius's careless attitude toward love will baffle and finally enrage highly passionate Taurus, who doesn't want someone just to play with. The Aquarius is inclined to analyze everything and not very interested in getting pleasure from making love. The Aquarius would rather prefer to talk, but the sensual Taurus will not be satisfied with such type of love. Taurus will seem to be too requiring for the Aquarius. These two are stubborn in very different ways: Aquarius refuses to be conventional, while Taurus rigidly adheres to the values of family and security. Aquarius is interested in humane concerns; Taurus is single minded about itself and its possessions. Aquarius puts a low emphasis on sex and places it far down on the list of necessities. This attitude could cause Taurus some major upsets as he/she will not be able to accept the problems of the whole world sharing his/her bed, which could cause Taurus to become over demanding in Aquarius' eyes.",
                      "This usually is a very happy combination. Taurus is a strong, authoritative figure who can provide security and stability for vacillating Pisces. Trying to help Pisces make all of their dreams come true, tactfully and reliably encouraging them, a persevering Taurus can achieve all what he wants from these relationships. Success of their sexual harmony depends on the Taurus. These two can share a great deal of their appreciation for beauty, art, sensuality and just about any of the finer things in life. Pisces is easily clouded by emotion but can be brought to reality by Taurus' down to earth nature. Taurus can be helped to dream by the Pisces personality. There are good prospects for interesting affair as well as for healthy marriage.",
                      "You won't find a more versatile, charming, or vivacious pair. They are fascinating conversationalists, have tons of friends, and together they'll throw some marvelous parties. Sex is fun and games. On the other hand while this connection can be very pleasant for both sides, it may lose it's stability very quickly. Because their needs are shared and they have mutual understanding of the likes and dislikes of the other then they will be highly in tune sexually. There will be a mad love between them, and marriage won't become an accident. Such combination is possible and it will be the most interesting couple that you know.",
                      "Gemini's sparkle immediately intrigues Cancer, but Cancer won't find security with fickle, fly-by-night Gemini. The Cancer's self-confidence will decrease during his dialogue with the changeable Gemini, who are fond of pleasures. The unguided sexual energy of the Gemini will create problems for the Cancer. Cancer is the home loving type and will be content to stay there and lock the rest of the world outside, but Gemini would soon become restless and angry over this as he/she is very sociable and likes to be around other people; having no wish to feel as if they are a prisoner in their own home. Life will quickly become unbearable to Gemini. Cancers are driven by emotion and feelings and generally prefer the constant. Gemini's unstoppable movement will prove unsettling to Cancer. Though it is a very emotional connection, the long term connection is almost impossible here.",
                      "An affectionate pair who really enjoy each other. While Leo loves with his/her heart first, Gemini loves with his/her mind. Gemini seem to be romantic enough for Leo. The Gemini's stability will not be fluctuated by the moody Leo. Leo's self-confidence blinks at Gemini's flirtations with others. Gemini's penchant for ridicule can annoy regal Leo, though, and Leo will probably demand more adoration than Gemini is willing to give. It can be a problem but they have so much fun together that don't tend to pay attention to such small problems. Both Leo and Gemini have strong desire to have a passionate, emotional life. Sexually, Leo loves whole-heartly and Geminis variable desires are a complete mystery to him/her. Leo is quite capable of warm-heartly breaking down any resentments that Gemini may harbor from the daytime thereby easing the tension in the bedroom. It will be an acceptable connection and, surely, safe marriage in the future.",
                      "Both are Mercury ruled and have a mental approach to life. But similarity ends there; these two are star-crossed from the beginning. Gemini treats Virgo as a boring creature. There are precise representations about sexual behavior in the Virgo's head. The Gemini will show indecision. After attenuation of passion's fire Virgo will start to grumble and criticize Gemini. Gemini will start searching for entertainment with someone else in his/her turn. Passions run on a low thermostat; their sex life soon turns chilly. This is going to be as short as flash relationship, which has not a chance to last long time.",
                      "These two air signs are well suited intellectually and every other way. It is difficult for the representatives of both signs to control their passions. If love makes this world spinning around then this couple gives an initial push for it. This is an ideal partnership. Both favor similar changes of interests. In the case of this pair, Libra is the judge and Gemini is the responsive jury in the nuptial courthouse. The combination's intellectual and artistic interests are compatible. Both sides of the Gemini nature will be under stood by the Libra. Both of them are passionate and nobody is too jealous at the same time . They characters have a lot in common , and they perfectly understand each other in bedroom. Libra is highly sexed and their lovemaking will never go lacking. Their sex-life will never be dull. This is a perfect connection; warm and happy married couple.",
                      "Gemini's imagination and Scorpio's dynamism can make a good combination if only these two are able to get along together. They are close in the sexual relationships, but that is not enough. Gemini is the type who tries to live a full, busy life but not so with Scorpio, as Scorpio is more centered on the idea of self improvement. Scorpio is sensual, passionate, demanding, jealous, inflexible. Gemini is fickle, flighty, superficial, lighthearted, changeable. Gemini is a social creature, Scorpio likes privacy. The representatives of Gemini'sign take everything too easy for the Scorpio. The Scorpio is purposeful while the Gemini are always doubting. It will probably be a kind of relationships that is not easy to cope with with difficult marriage as a result.",
                      "These two are opposites in the zodiac and are attracted to each other like magnets. They are both tireless, changeable and not frank enough as lovers. Gemini are inclined to criticize the Sagittarius' behavior in bed. They may be disappointed sexually, since neither is demonstrative-and Gemini is very quick to criticize. There are also some other weak points in their relationships while the strength is that they are both undemanding people. Their affair will probably begin impulsively and will be finished suddenly as well. The marriage can turn out to be quite good but it will require efforts from both of them.",
                      "They have different sexual natures. The Saturn ruled Capricorn will be at odds with the Mercury ruled Gemini. The Gemini are usually easy-going, amorous people, while the Capricorn are sluggish, devoted, cautious. Capricorn will have a hard time holding the reins on excitable, flirtatious, wayward Gemini. All of Capricorn's patience is needed to deal with a partner it considers to be capricious, extravagant, and scatterbrained. In order for the sexual relationship to be a success, Gemini will have to distract Capricorns mind from his/her career and the problems that go with it. The initial interest can not last very long.",
                      "Uranus, the ruling planet of Aquarius, is full of surprises and sudden changes. This will suit the Gemini perfectly. Gemini are capable to subordinate to the Aquarius' will. There will be a lot of pleasant things in a bedroom though the lack of passions is also possible. The changeable Gemini are easily influenced by the Aquarius' constant pressure. They love to socialize, they have a wide range of outside activities, and neither is particularly jealous or proprietary. Sexual attraction with them is likely to be intense, as Aquarius finds Gemini to be very attractive physically. This couple will be fine bed-mates and fascinating friends. It is an interesting connection which may turn into a charming marriage.",
                      "The passion quotient is high, and so are the problems. The Pisces are too emotional for Gemini. Emotional Pisces for his/her turn is too easily hurt by thoughtless Gemini. Gemini is mischievous and playful, but Pisces is sensitive and takes things to heart. It creates an atmosphere of suspiciousness and mistrust. There can be a feeling of flame between them but the instability in their relations will destroy connection as a result. This is a rather risky connection and unhappy marriage.",
                      "They have a lot in common, and that's the trouble. They are too similar to be happy together. Both suffer from excessive sensitivity and that results in emotional problems. Both want to play a main role in the sexual relationships, and it often causes a criticism and disputes. They both take words and actions to be literal truths and that can mean some consistent pain and unrest for them. They tend to see themselves as martyrs, vastly giving individuals, and when one does not see this in the other then the reaction is shock. They will waste a lot of time together, better spent on other things, in the middle of petty bickering and dredging up the past mistakes of the other. However physically they attract each other and this connection can be rather sensual. The marriage demands a great goodwill and mutual understanding.",
                      "Usually this is a good combination, since the Moon (Cancer) reflects the light of the Sun (Leo). The Leo has an ability to stabilize moody Cancer. Generous, openhearted, strong Leo is just what insecure Cancer is looking for and it creates a feeling of reliance for a changeable Cancer. On the other hand it is necessary to flatter and admire by the Leo's advantages and especially in the field of sex, where he/she should dominate. If the Cancer is ready to let the Leo be the leader in bedroom the passionate connection and rather successful marriage can take place.",
                      "Cancer's responses are emotive while Virgo's are analytical, but their personalities mesh so well that it doesn't seem to matter. The Virgo is practical person and gives a basis for this union. The Cancer is more emotional creature but they are capable to feel pleasure from their relationships. They perfectly fit each other in the bedroom. One of the dangers in this relationship will be too much caring! Each one of these signs love to look after, and fuss around the person they love, which will go far in making life intolerable for both of them. Together these signs do a lot of talking about things that need doing; each one needs to be paired with a positive personality for anything but talk to get accomplished. This can turn out to be quite interesing connection in case the Virgo is little less demonstrative and affectionate with cancer.",
                      "This pair operates on entirely different levels: Cancer wants love to be emotionally transcendent, Libra seeks perfect intellectual communion. It is difficult for the Libra to get on well with a Cancer's changeable temperament. The Cancer for his turn feels uncertainty and anxiety because of the Libra's attachment. The Libra is attracted by the Cancer's moods, but he/she prefers to avoid any troubles. Cancer will have to bring some excitement and glamour into the bedroom and their love making if he/she would capture and hold Libras attention, as he/she has a roving eye and will always be looking for greener pastures, sex being the important part of life to him/her that it is. But if Cancer turns critical, especially about Libra's extravagance, Libra will start looking elsewhere. The connection is possible. The marriage is almost unreal.",
                      "Masterful Scorpio should make a good mate for quiet spoken Cancer. The Scorpio's force and his/her needs to dominate and protect is just what the Cancer is longing for. Cancer's possessiveness will actually make Scorpio feel secure. Cancer admires Scorpio's strength while Scorpio finds a haven in Cancer's emotional commitment. The Cancer is more sensitive about sexual relations, while the Scorpio is more passionate. The Cancer's desire to please helps avoid many problems in this area. The the Scorpio's furious jealousy does not arise, since the Cancer is devoted to the partner. The love will be growing, and this passionate connection can develop in a perfect marriage.",
                      "They usually have the different purposes and desires. Sagittarius is the wanderer and does not like to stop his/her choice on something certain. The Cancer wants to be sure of the love of the partner. The Sagittarius is not capable to ensure it. The Cancer lives for the sake of the future. Sagittarius lives for today. Cancer's jealousy is aroused by Sagittarius's flighty, faithless ways; Sagittarius is bored by Cancer's dependency. Sagittarius likes to wander, while Cancer is a stay-at-home. When Sagittarius feels boredom he/she begins searching for new connections/partners. The Cancer will be deeply offended by this fact. Sexually, Sagittarius is very active, and as a rule Cancer is easily satisfied. This can leave Sagittarius feeling let down and depressed and unfulfilled, which in turn will send him/her searching for a new partner. There are vague prospects of more - less steady connection.",
                      "The Capricorn is not able to pay very much attention to the partner, and it doesn't meet the Cancer's wishes. The Capricorn has too much other interests. Both are good money managers and are unlikely to have many financial problems. Waste is an offense to Capricorn as is extravagance. Capricorn is a faithful and devoted mate which the more positive type of Cancer can be content with, even if life does get a little boring at times. However, there are a strong sexual attraction exists between these two signs. In a bedroom everything will be perfect, until Cancer feels bored with a practicality and restraint of the Capricorn. The connection is unstable, the marriage is undesirable.",
                      "Fun-loving Aquarius will be too unpredictable for a vulnerable Cancer. The Cancer is usually more open and steady than Aquarius who inclined to find new adventures. Aquarians love to share their life stories with the world while Cancer is satisfied to concentrate on personal obligations. Cancer have a conservative taste; Aquarius taste are usually the opposite. The Cancer's needs can't remain unsatisfied. Aquarius tends to exempt him/herself from the emotional requirements. They are able to find common language in bedroom for some time, though they will not sustain this partnership in a drawing room for a long time. The eccentricity of Uranus does not go well with the moods of Luna. Odds against this combination are too great for this combination, unless one will become subservient to the other.",
                      "This is an affectionate, sensitive couple who will bolster each other's ego. Pisces is an imaginative dreamer but Cancer is an imaginative worker-and together they can make their dreams a reality. Pisces provides romance in Cancer's life, and Cancer is the all-protective lover Pisces needs. They are a good pair in the field of sex. They are both sympathetic and try to support each other. Probably the Cancer will be the leader, because of the the Pisces' inclination for some eccentricity in love affairs. The quarrels are usually short and quickly come to an end in bed. They are perfectly fit for each other. They can spend their time during day and during night with the same result and the sentimental combination of these two signs make for an ideal marriage.",
                      "This should prove to be a compatible combination, but it is not always true. In bedroom , as well as everywhere else Leo tends to think only of him/herself. A question is : Is it possible for two \"I'm\" to turn to one \"we're\"? Both Lions are extremely romantic and sexually compatible. They enjoy a strong sex drive and these two will probably spend a lot of their time together in bed. This could develop into an overactive sex life that may branch off in perverse directions, totally without love, unless checked and kept within bounds. They should allow each other \"to shine\", and to share the light in case they want to be together. Well , It is not always possible, but when it is so - long live king! Long live queen!",
                      "Here is a good chance for a happy partnership. Magnanimous Leo will overlook Virgo's tendency to be critical, while Virgo will take pride in Leo's accomplishments, good humor, and lovable nature. Virgo will bring in that couple's sexual life large amount of emotional heat and understanding. Leo will respect Virgo's clever and alert mentality. Virgo will try to excite and satisfy the partner. Leo is also persevering person, so the chances for mutual satisfaction are really big. This is one of those relationships that depends on the type of relationship it is. The connection is usually \"nice\" and a long union also is possible.",
                      "Both signs satisfy needs and desires of each other. Leo is more interested in the strictly physical side of love than Libra, but Leo's style and brio can win Libra over. Libra is indecisive and Leo will naturally take charge. While Leo is a sensitive person Libra is more emotional and they are both crazy about sex. All the time which will be spend in a bedroom, will be continuous celebratory salute for them. In case there is a collision of characters Libra should concede. It will not make any difficulty, because of the Libra's ability to cooperate. The Libra's best weapon is a correct strategy and tact. The hot connection can turn into in a rather warm matrimony.",
                      "There will be an instant mutual sexual attraction, equal in force between them. But Leo finds it hard to cope with Scorpio's jealousy and possessiveness. Intense, smoldering Scorpio is on a too short fuse, while Leo is much more buoyant. These two very strong willed individuals generally create some rather stormy moments. Generally in such relationships there will be no \"romanticism\", but these two are capable of sensual loving and good, long partnership.",
                      "Together they share a liking for freedom, adventure, and meeting new people. They are both inclined to entertain themselves, and consider love as an amusement. Leo likes to make love as often as Sagittarius. Sagittarius stimulates and inspires Leo, and Leo in his/her turn makes Sagittarius to be more faithful. This connection is perfect, and the happy marriage is guaranteed.",
                      "Ordered, organized Capricorn neither understands nor approves of Leo's exuberant impulsiveness. Leo forgives and forgets; Capricorn being the one who is slow to anger and seldom forgets. The Leo supposes that the Capricorn is full of love and spends it too economically. The Capricorn for his/her turn is also not the best partner for the Leo because of his/her poor imagination. The Capricorn is much more passionate in bed. They not fit each other in the bedroom. They are both representatives of independent signs of the zodiac that inclined to dominate in everyday life. These two are almost complete opposites and in case of a love affair their distinctions can appear insignificant, but in case of marriage they will never be happy together.",
                      "Leo can't get the cooperation or the admiration it requires, and Aquarius resents Leo's attempt to rule. They have different views of independence: to Aquarius it means freedom to explore new horizons; to Leo it means pursuing a glamorous, extravagant lifestyle. Aquarius is interested in the world; Leo is strictly interested in Leo. Their sexual life will be unsatisfactory for Leo as Aquarius can and will find others that capture their interests and this will frustrate Leo, causing Leo to think that his/her mate is inhuman and uncaring. While these two will be attracted to one another, they are zodiac opposite which means that it can be bad as well as good connection.",
                      "Leo is flamboyant, domineering; Pisces is unworldly and mystical. They intrigue each other because they are so different, but the differences don't mesh well. An active Leo can not understand timid and quiet Pisces. Leo won't not even try to understand the Pisces' behavior in bedroom. Representatives of both signs are inclined to receive more than give. Leo needs public acclaim, while Pisces prefers the sheltered life. Leo can't tolerate Pisces's ultra-sensitivity, nor Pisces's inclination toward exotic boudoir activity. When Pisces run into despondency the Leo's pride doesn't allow him to participate and help his/her partner to get a problem over. It will be rather difficult connection and unsuccessful marriage.",
                      "Both of them are constrained in the sexual relations and consider love as a basis for something more important - partnership in life. They are responsible, sensitive, intelligent, and take love seriously. They also share passions of the mind, and will never bore each other. The requirements in a bedroom are not too great and do not cause many complaints and criticism. Both the intense affair and the marriage are possible in case these perfectionists curb their instincts for finding fault. There will probably also be a continual contest over who is leader, but they have too much else in common for that to matter.",
                      "Virgo lives according to her/his rules while Libra is absolutely different creature. There are also other discrepancies of characters. Virgo is more interested in money, than in sex. Libra finds it inexcusable. Stay-at-home Virgo resents Libra's socialbutterfly instincts and pursuit of pleasure. Libra's tastes are expensive. Virgo is careful, not to say miserly. Libra finds Virgo fussy, critical, completely inflexible. Virgo can also be a grumbling and tiresome person with dictatorial propensity. Libra will not stand it too long and start searching for support somewhere else. Virgo, is more straight forward about his/her approach to sex and Libra methods of the \"dance\" can drive him or her up the wall. This is a doubtful connection and extremely complicated marriage.",
                      "Their interests are the same in many areas, but they are too different when it refers to the sexual sphere. It is difficult for them to establish good relationships. Virgo can become captious. Restrained Virgo has trouble keeping up with highly demonstrative Scorpio and doesn't understand what all the fuss and bother is about. Scorpio can fly into jealous rages for no reason, even if Virgo has proved to be a faithful mate, and the general Scorpio views are hard for Virgo to take or agree with for Virgo always sees the other side of the situation and the other persons point of view. In other words Scorpio can be roughly frank. The spiritual affinity is possible for some time, and then Scorpio will probably begin to search for new sexual partners. Friendship may be the best idea here.",
                      "The Sagittarius' attitude to love drives Virgo out of his/her mind. The Virgos' feeling of safety is vanishing. Sagittarius doesn't try to understand the Virgo's needs. Elsewhere, Virgo looks for order and simplicity whereas Sagittarius looks for excitement and new experiences. Virgo wants a long term commitment; Sagittarius has to be free to roam. Since Virgo is not one to place too great an emphasis on the sexual side of life and does not have the same appetites that Sagittarius has, Sagittarius may well feel that he or she is justified in finding a new lover from time to time which will cause many fights. They will be able to stay together for a week, but not for the rest of the life.",
                      "Virgo's neat orderly mind meshes well with Capricorn's self-discipline and capacity for hard work. Both take pride in their home, enjoy having a few close friends rather than many acquaintances, and admire each other's intellectual abilities. The Caoricorn's practicality suits the Virgo's accuracy perfectly. There are possible misunderstandings in the field of sex, but they know and feel each other so well, that these misunderstandings don't disturb them. They are both - clever, conservative and patient. This relationship could suffer from lack of romance, as both tend to be a bit reserved in this area. Generally there is a good basis for a long union.",
                      "Both are mental signs rather than emotional, but Virgo looks on the darker side of life while Aquarius is imaginative and optimistic. There is no strong sexual attraction between them. Aquarius needs activity, social events, a wide circle of acquaintances. Virgo enjoys a quiet existence with a few close friends. There will be neither especially strong excitation, nor interesting erotic games. The sober, practical Virgo is inclined to criticize the Aquarius' generosity. Their goals are very different: Aquarius wants to be as brilliant as possible; Virgo wants to be as efficient as possible. The marriage is possible in case they both have strong feelings towards each other.",
                      "The love is closely connected with the stability, physical needs, intellectual compatibility. The love for the Pisces is a beauty and emotional experiences. The Virgo's cautious, prudent attitude the to sex doesn't satisfy unlimited desires of the Pisces . The marriage will probably be unsuccessful.",
                      "Both of these people are filled with energy and both are over demanding of one another which will make this relationship a very exhausting one for the two Libras involved. They treat each other passionately. They have a lot in common. They are cheerful, and easy-going. They also love harmony and beauty. But the severe reality interferes anyway. Neither one nor another wants to realize the facts. Their biggest problem may be unresolved conflicts, as neither wants to stir the pot when differences appear. Their life together is likely to be hectic and they will spend more time with others than they will with each other. The connection can be interesting while the marriage requires maturity",
                      "Scorpio is too jealous for the careless Libra. His/her well known jealousy does not let him/her stay calm and wise. The Virgo's carelessness concerning sex results in a quarrel. These problems can end up by driving Libra into an affair with someone else who does not make him/her feel restricted in any way. Scorpio is not the forgiving type and any infidelity will never be forgotten by this sign, and any taking back after this happens will be to get revenge on Libra for his/her act. Scorpio should dominate while Libra - submit. There is a strong mutual attraction between them , but this can lead to an explosion. This is a passionate rough connection and the marriage is not recomended.",
                      "The people who were born under the Sagittarius' sign is fond of adventures, so Libra will never be bored with him/her. Sagittarius will remain indifferent to the Libra's adventures. Charming, clever Libra knows how to appeal to Sagittarius's intellectual side and easily keeps Sagittarius intrigued. The main problem is that Sagittarius does not like remaining on one place and aspires to independence. On contrary, one of the most important things for Libra is a reliable partner. If they manage to overcome these distinctions, than there is a quite good chance for a short-term affair as well as for a long-term relations.",
                      "Capricorn has a strong sexual interest in the Libra. Libra in her/his part likes the Capricorn's aspiration to earn money. However, the Libra's propensity for laziness irritates the Capricorn who got used to work without a rest. As a result the Libra will be dissatisfied by a Capricorn's sober practicality. The Capricorn wouldn't like Libra's constant attempts to be center of everyone's attention. Capricorn will even bring his/her work to bed, literally, and it will be up to Libra to distract him/her long enough for sexual relations to take place. A sign such as Libra is not about to put up with this for very long before greener pastures are sought out. There is too big personal incompatibility for a successful marriage.",
                      "They should suit each other perfectly . Warm, sensual Libra joins with enthusiasm in Aquarius's erotic fun and games. Also, diplomatic Libra knows must how to get around Aquarius's quirky stubborn streak. Libra is waiting for a support from the Aquarius in this life full of adventures. They both like to live in a society and will participate in public affairs. They have a lot of friends, however they do not forget their own interests. While there are some aspects of their personalities that will irritate the other they will find it easier than most signs to compromise. The opinions of others mean very little to Aquarius he/she cannot understand how Libra can be wounded by a cruel remark from someone else and will possibly feel that Libra is being over sensitive. They will be happy together, even without perfect sex. This is a sensual connection and a good forecast for the conjugal relations.",
                      "Here there is mutual attraction, but it seldom lasts long as they start off fine, since both are sentimental and affectionate. In a way they are alike: both want to impose their romantic visions on reality. Libra can get along will with mast people, but Pisces is more discriminating, and this is the source of their disagreements. Nothing makes Libra more miserable then a sulky, complaining Pisces. Finally Libra will become tired with a Pisces' desire to rely on someone. As for the Pisces -they can't stand the fact that the Libra has a vast variety of interests. If Libra becomes quarrelsome, Pisces will plunge into despondency. Does it sound sadly? Yes, it does.",
                      "These two are capable to light the fire even in the water. The problem is that they are too similar. They are both resolute, both are proprietors, and both have awful characters. They are highly jealous and demanding. They are so intense that every little storm quickly becomes a hurricane. Both are sulky, brooding, possessive. Both are in a continual struggle to force the other to relinquish control. If they have different opinions about something, it may result in big cracks in their relationship, and as a result the mutual understanding between them will evaporate. Their connection can not last long outside a warm atmosphere of the bedroom. The connection is extraordinary. The marriage is a real disaster!",
                      "Scorpio is dominant by nature, but he/she will have trouble keeping their Sagittarius partner under control. Scorpio loves his/her house while the Sagittarius' suitcase is always ready to be taken to a journey. The freedom is necessary for Sagittarius . Sagittarlus's far-roaming interests constantly make Scorpio jealous. Romantically, this is a volatile combination. Sagittarius is playful about sex and finds Scorpio's intense, dominating passions too much to cope with. Soon Sagittarius's inclination is to fly. Their mutual attraction is explained by sex and can not last for a long time. A one night's affair - yes; a marriage -NO.",
                      "This union means successful sexual mutual relationships. Scorpio is the more imaginative lover, but Capricorn's stamina is a delightful match. Scorpio's possessiveness spells security to Capricorn. These two work well as a team - Capricorn is highly organized and Scorpio has native shrewdness. The Scorpio is more inventive, while the Capricorn is more patient. Their success in bedroom opens some interesting opportunities. The representatives of both signs have strong will, but the Scorpio is inclined to dominate. The Capricorn must understand, that it happens because of the Scorpio's great love. The connection is usually passionate and marriages are successful.",
                      "This combination usually ends up getting into unpleasant terms after a little time. Fueled by Scorpio's volatility and Aquarius's imaginativeness, sex is quite out of the ordinary. But Aquarius is turned off by Scorpio's powerful and jealous passions, and Scorpio is upset by Aquarius's unpredictable moods. Aquarius constantly participates in numerous public affairs. Scorpio can't bend the Aquarius to his/ her will, because of Aquarius' love of freedom. The Aquarius is extremely sociable. The Scorpio is reserved. The happiness in bed will not help this couple to be happy together. Let everyone go their own way.",
                      "This may be a love at first sight combination. There is a strong mutual attraction between them. Pisces are ready to rely on Scorpio to compensate their indecision, and will agree with the Scorpio's aspiration to dominate. Scorplo's jealousy and possessiveness won't bother Pisces-in fact, it makes Pisces feel loved. Pisces's dependency is just what Scorpio is looking for. These two share a special communion, much of it on a sensual, unspoken level. Both have intense feelings, are loyal, intuitive, interested in the mystical and the unusual. Their sexual life should be delightful. The Pisces are inventive. The Scorpio is persevering. Both - affair and marriage are successful.",
                      "This is a remarkable, but unpredictable combination. There is always something \"being prepared in their kitchen\". The unpredictability that is peculiar for both may result in demonstration of the worst features. Their tireless natures will require freedom from each other sooner or later. In the bedroom they each have and open mind about sex and anything goes, even an orgy. They are like two wandering ships which can't sail together. This won't last long time but they'll be good fellows when the fun is over.",
                      "Unless Sagittarius can clip their wings a bit, there is strong warning against this combination. The Capricorn loves making love in some certain places while the Sagittarius is ready to do it everywhere. The Capricorn is cautious and conservative. He/she always worries about safety. The Sagittarius is a careless and irresponsible player. The Sagittarius will be irritated by the close-fisted Capricorn. Their sex life is very apt to be frustrating for both parties, although Sagittarius will feel this more keenly than Capricorn. This is not the best connection, and will end up as unsuccessful marriage in the future.",
                      "The combination usually has a great chance for success. These two are so innovative about lovemaking that they ought to charge admission. In addition, they inspire each other intellectually, for Aquarius has far-out, inventive ideas and Sagittarius is optimistic and visionary. They both are unpredictable, active and cheerful. They both like making love. They have rich imagination and they are full of interesting fantasies. They love to be the center of everyone's attention. Usually they are interesting people which are not suffering from jealousy. There is a very good chance for a successful relationship. Many of their values are alike and their need to be outgoing and sociable is inherent in both of these people. Aquarius and Sagittarius both understand the need to let the other be when they need their freedom",
                      "These two ignite in the bedroom, but the compatibility ends there. None of them can give another the feeling of reliability. Independent Sagittarius is too much of a rover to satisfy Pisces's need for attention and devotion. Sagittarius's sharp tongue will hurt Pisces's romantic sensibilities. Pisces wants to get close but is constantly confused and rebuffed by Sagittarius's struggle to free itself of the heavy emotional demands. The Sagittarius thinks that, that he/she is constrained by shyness of the Pisces, and that his/her energy and optimism are slowly drowning in a bog of despondency. This is an extremely difficult connection. The marriage is almost impossible.",
                      "Capricorn approves of people like him/herself, so with these two there's no lack of mutual respect and regard. Both are cautious, reserved personalities who work hard and love to save money. The biggest problem here will be keeping things lively and new. They are both alike in their values and many of their actions. Things could become too serious for too long and stubbornness could cause some alienation. Capricorn needs a more carefree, light hearted sexual partner to keep his/her interest in bedroom affairs stirred up and with these two signs there is not likely to be any kind of love life to speak of, as they will be mentally working on their careers rather than on each other. This is not the best match and not very exciting marriage as a result.",
                      "Both signs have a strong sense of self, but Aquarius wants to be free and Capricorn wants to dominate. They will find out soon that their romance has turned into a friendship. it is uneasy for the Capricorn to cope with the Aquarius in intimate affairs. The Aquarius is a inventive, free-will person. He/she can't long be in love with the practical Capricorn. Aquarius is continually on the go and likes to spend money. Capricorn considers that frivolous and tries to impose strict controls. Aquarius may go through a number of jobs, searching for the right challenges but Capricorns' need for financial security is so strong that this will horrify him/her. This is not a satisfactory connection, and marriage will require efforts.",
                      "The Pisces will probably try to cheat on the Capricorn, because it is in their character, but the Capricorn is able to cope with it and will be the leader in bed. The Pisces will soon decide to follow him/her. The Pisces are affectionate and sincere creatures and can make the Capricorn's life full of joy. Capricorn provides a ballast for Pisces's drifting dreaminess and supplies the stability that Pisces needs and admires. And there's nothing Capricorn likes better than being admired. These very different people supplement each other emotionally. It is a good combination with complimentary values. They will find comfort in one another providing Capricorn displays his/her emotions at least once in awhile. There is very good forecast for these relationships.",
                      "They are perfectly compatible with each other. They are both inventive in love. However, there are no deep feelings between them . They are both too rational, reasonable and moderate for deep and strong feelings. There are many personal interests. Given, that they are unsuited physically, they will not find this odd or a reason to allow hostilities into their relationship, for sex does not play a big role in either ones life as they are easily distracted by daily happenings and other peoples problems. In general it promises to be a peasant connection and reliable marriage as a result.",
                      "In case Pisces study the Aquarian horoscope , this may not be a bad combination. But usually their sexual affinity turns into a war with elements of a melodrama. The sensitive Pisces dependent on the Aquarius too much and constantly demanding the proofs of his/her love. The Aquarius feels depressed. The Pisces is a highly complex personality that must be the center of attention in his/her lovers life, and this is disheartening to Aquarius who believes in developing individuality. Pisces can have deep bouts of depression and if he/she perceives that Aquarius is unsympathetic to these he/she may cut Aquarius off completely and make his/her own private decision about their life together. This connection seems to be promising at first , but it will never get into a happy marriage.",
                      "With these two signs having the same virtues and vices they should get along well together, or at least they will have understanding and sympathy for one another. Their mutual sympathy guarantees that there will be a perfect understanding in the field of sexual needs between them. If their problems can be dissolved on a background of a sexual compatibility, it will be one of the best pairs in the Zodiac. The only possible drawback is a drifting too far from practical realities. To solve this problem they both can be anchored to each other, so that they can put their shoulders to the wheel and face the responsibilities that reality demands. This is seems to be a rather sexual connection. The marriage will be interesting."
                        };
        gotoxy(1,12);printf("%s",love[a]);
        printf("\n\nEnter any key to continue......");
        getch();
    }


void details(char *a,char s,int y)
    {//writing basic ingo in the screen
        gotoxy(55,3);printf("Name: %s",a);
        gotoxy(55,4);printf("Age=%d",(2010-y));
        gotoxy(55,5);printf("Sex=%c",toupper(s));
    }


int zodmenu()
    {//writing menu screen

            int b;
            gotoxy(5,10);printf("-------------------------------------------------------------------");
            gotoxy(5,20);printf("-------------------------------------------------------------------");
            gotoxy(20,12);printf("1.ABOUT YOURSELF");
            gotoxy(20,14);printf("3.LUCKY NUMBERS");
            gotoxy(50,12);printf("2.FORTUNES");
            gotoxy(50,14);printf("4.LOVE COMPATIBILITY");
            gotoxy(20,16);printf("5.ADMINISTRATOR TOOLS");
            gotoxy(50,16);printf("6.EXIT");
            gotoxy(37,23);printf("Enter any other key to restart the program.");
            gotoxy(20,18);printf("Enter Your Choice: ");
            fflush(stdin);
            scanf("%d",&b);
            return (b);
    }


int lovemenu()
    {//writing for the love compatibility
         int b;
            gotoxy(5,9);printf("Enter your Partnes's horoscope:");
            gotoxy(5,10);printf("-------------------------------------------------------------------");
            gotoxy(5,20);printf("-------------------------------------------------------------------");
            gotoxy(20,12);printf("1.ARIES      \t\t 2.TAURUS");
            gotoxy(20,13);printf("3.GEMINI     \t\t 4.CANCER");
            gotoxy(20,14);printf("5.LEO        \t\t 6.VIRGO");
            gotoxy(20,15);printf("7.LIBRA      \t\t 8.SCORPIO");
            gotoxy(20,16);printf("9.SAGGITARIUS\t\t10.CAPRICORN");
            gotoxy(20,17);printf("11.AQUARIUS \t\t12.PISCES");
            gotoxy(20,19);printf("Enter Your Choice: ");
            fflush(stdin);
            scanf("%d",&b);
            return (b);
    }


void removes()
{
    remove("records.txt");
    //rename("temp.txt","records.txt");
      system("copy temp.txt records.txt");
      remove("temp.txt");

    return ;
}
void admintools()
    {
        FILE *fp,*fb;
        system("cls");
        int b=0;
        fp=fopen("records.txt","rb");
        while(fread(&c,sizeof(c),1,fp)==1)     //counting the number of entries
            b++;
        gotoxy(50,1);printf("NO OF USERS=%d",b);
        gotoxy(5,5);printf("ADMINISTRATOR TOOLS:");
        gotoxy(5,6);printf("----------------------------------------------------------------------");
        gotoxy(10,8);printf("1.SEE USER'S DIRECTORY");
        gotoxy(10,10);printf("2.SEARCH BIRTHDAYS");
        gotoxy(10,12);printf("3.DELETE USER RECORD");
        gotoxy(10,14);printf("4.RETURN TO MAIN PROGRAM");
        gotoxy(10,6);printf("----------------------------------------------------------------------");
        gotoxy(15,17);printf("Enter your choice");
        scanf("%d",&b);
        int i=1;
        switch(b)
            {
                case 1:
                    system("cls");
                    rewind(fp);
                    gotoxy(10,1);printf("ADMINISTRATOR TOOLS");
                    gotoxy(3,5);printf("NAME");
                    gotoxy(30,5);printf("SEX\tAGE\tDATE OF BIRTH");
                    gotoxy(3,2);printf("Following Users Have Used Our Program:");
                    gotoxy(3,3);printf("-------------------------------------------------------------");
                    while(fread(&c,sizeof(c),1,fp)==1)
                    {
                        gotoxy(3,i+5);
                        printf("%d  %s",i,c.name);
                        gotoxy(30,i+5);printf("%c  \t%d  \t%d/%d/%d\n",c.sex,(2010-c.yr),c.dy,c.mn,c.yr);
                        delay(1);
                        i++;
                    }
                    printf("\n\n\n\n\nEnter any key to continue....");
                    getch();
                    fclose(fp);
                    admintools();
                    break;
                case 2:
                    system("cls");
                    char name[50];
                    i=9;
                    gotoxy(3,2);printf("THIS IS VOODOO SEARCH ENGINE. ENTER THE NAME YOU WANT TO SEARCH:");
                    gotoxy(3,4);printf("NAME=");
                    fflush(stdin);
                    gets(name);
                    gotoxy(3,6);printf("Following results found:");
                    gotoxy(3,7);printf("----------------------------------------------------------------");
                    gotoxy(3,8);printf("NAME");
                    gotoxy(30,8);printf("SEX\tAGE\tDATE OF BIRTH");
                    rewind (fp);
                    while(fread(&c,sizeof(c),1,fp)==1)
                        if(strcmp(name,c.name)==0)
                        {
                            gotoxy(3,i);
                            printf("%d  %s",i-8,c.name);
                            gotoxy(30,i);printf("%c  \t%d  \t%d/%d/%d\n",toupper(c.sex),(2010-c.yr),c.dy,c.mn,c.yr);
                            delay(1);
                            i++;
                        }

                        if (i==9)
                            {
                                gotoxy(6,i+3);
                                printf("(Sorry,There are no results to display)");
                            }
                        printf("\n\n\n\nEnter any key to continue....");
                        getch();
                    fclose(fp);
                    admintools();
                    break;
                case 3:
                    system("cls");
                    rewind(fp);
                    fclose(fp);
                    fp = fopen("records.txt","rb+");
                    fb=fopen("temp.txt","wb");
                    gotoxy(10,1);printf("ADMINISTRATOR TOOLS");
                    char name1[50],ans;
                    i=9;
                    gotoxy(3,2);printf("----------------------------------------------------------------");
                    gotoxy(3,3);printf(" ENTER THE NAME YOU WANT TO DELETE:");
                    gotoxy(3,4);printf("NAME=");
                    fflush(stdin);
                    gets(name1);
                    while(fread(&c,sizeof(c),1,fp)==1)
                       { if(strcmp(c.name,name1)!=0)
                            fwrite(&c,sizeof(c),1,fb);
                       }
                    //rewind(fb);
                    fclose(fb);
                    fclose(fp);
                    removes();
                    gotoxy(5,8);printf("Please wait while the system rearranges the data.");
                    delay(1);printf(".");
                    delay(1);printf(".");
                    delay(1);printf(".");
                    gotoxy(3,10);printf("Entry successfully deleted...do you wish to see the new data?(Y/N)");
                    ans=toupper(getche());
                    if(ans=='Y')
                        {
                            i=1;
                            fp=fopen("records.txt","rb");        //re-opening the file
                            system("cls");
                            //rewind(fp);
                            gotoxy(10,1);printf("ADMINISTRATOR TOOLS");
                            gotoxy(3,5);printf("NAME");
                            gotoxy(30,5);printf("SEX\tAGE\tDATE OF BIRTH");
                            gotoxy(3,2);printf("Following Users Have Used Our Program:");
                            gotoxy(3,3);printf("-------------------------------------------------------------");
                            while(fread(&c,sizeof(c),1,fp)==1)
                            {
                                gotoxy(3,i+5);
                                printf("%d  %s",i,c.name);
                                gotoxy(30,i+5);printf("%c  \t%d  \t%d/%d/%d\n",toupper(c.sex),(2010-c.yr),c.dy,c.mn,c.yr);
                                delay(1);
                                i++;
                            }
                            printf("\n\n\n\n\nEnter any key to continue....");
                            getch();
                            fclose(fp);
                        }
                    admintools();
                    break;

                case 4:
                    return;
            }
    }


