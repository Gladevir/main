#include<iostream> 
using namespace std;

void mainMenu(), getMOBAGames(), getRPGGames(), getShootingGames(), getSandboxGames();
int getDOTACreditsPrice(), getLOLCreditsPrice(), getMLCreditsPrice();		
int getGenshinCreditsPrice(), getHonkaiCreditsPrice(), getDiabloCreditsPrice(), getRobloxCreditsPrice();
int getValorantCreditsPrice(), getCSGOCreditsPrice(), getApexCreditsPrice(), getFortniteCreditsPrice();
int getMinecraftCreditsPrice(), getGTACreditsPrice(), getGrowtopiaCreditsPrice();
int getTotalPrice();

int choice, choiceGenre, choiceMOBA, choiceRPG, choiceShooting, choiceSandbox, quantity, price;
int DOTACreditsPrice=0, LOLCreditsPrice=0, MLCreditsPrice=0;
int GenshinCreditsPrice=0, HonkaiCreditsPrice=0, DiabloCreditsPrice=0, RobloxCreditsPrice=0;
int ValorantCreditsPrice=0, CSGOCreditsPrice=0, ApexCreditsPrice=0, FortniteCreditsPrice=0;
int MinecraftCreditsPrice=0, GTACreditsPrice=0, GrowtopiaCreditsPrice=0;
int totalPrice=0;

main(){


cout<<"W E L C O M E ! !"<<"\n";
cout<<"STORE NAME"<<"\n"<<"\n";
mainMenu();

totalPrice = 	DOTACreditsPrice + LOLCreditsPrice + MLCreditsPrice +
	 			GenshinCreditsPrice + HonkaiCreditsPrice + DiabloCreditsPrice + RobloxCreditsPrice +
				ValorantCreditsPrice + CSGOCreditsPrice + ApexCreditsPrice + FortniteCreditsPrice +
				MinecraftCreditsPrice + GTACreditsPrice + GrowtopiaCreditsPrice;
cout<<"The total amount is "<<totalPrice<<"\n"<<"\n";
	
}//end of main

//Defining Functions
	void mainMenu(){
		do{
		cout<<"What type of game are you looking for?"<<"\n";
		cout<<"[1] MOBA (Multiplayer Online Battle Arena)"<<"\n";
		cout<<"[2] RPG (Role-Playing Games)"<<"\n";
		cout<<"[3] Shooter Games"<<"\n";
		cout<<"[4] Sandbox Games"<<"\n";
		cin>>choiceGenre;
		cin.clear();
		cin.ignore(1000,'\n');
			if (choiceGenre <=0 || choiceGenre >4){
		   	 	cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
	}
}while (choiceGenre <=0||choiceGenre>4);
	switch(choiceGenre){
		case 1: 
			getMOBAGames();
		break;
		
		case 2: 
			getRPGGames();
		break;
		
		case 3: 
			getShootingGames();
		break;
		
		case 4: 
			getSandboxGames();
		break;
	}
	}
	
	void getMOBAGames(){
		do{
		cout<<"Please choose your game:"<<"\n";
		cout<<"[1] DOTA 2"<<"\n";
		cout<<"[2] League of Legends"<<"\n";
		cout<<"[3] Mobile Legends: Bang Bang "<<"\n";
		cin>>choiceMOBA;
		cin.clear();
   	 	cin.ignore(1000,'\n');
   	 		if (choiceMOBA <=0 || choiceMOBA >3){
   	 		cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
			}
   	 	}while (choiceMOBA <=0||choiceMOBA>3);
			switch (choiceMOBA){
				case 1:
					getDOTACreditsPrice();
				break;
				
				case 2:
					getLOLCreditsPrice();
				break;
				
				case 3:
					getMLCreditsPrice();
				break;
			}
	}

	void getRPGGames(){
		do{
		cout<<"Please choose your game:"<<"\n";
		cout<<"[1] Genshin Impact "<<"\n";
		cout<<"[2] Honkai Impact"<<"\n";
		cout<<"[3] Diablo Immortal"<<"\n";
		cout<<"[4] Roblox"<<"\n";
		cin>>choiceRPG;	
		cin.clear();
 	  	cin.ignore(1000,'\n');
 	  		if (choiceRPG <=0 || choiceRPG >4){
   	 		cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
			}
   	 	}while (choiceRPG <=0||choiceRPG >4);
   	 		switch (choiceRPG){
				case 1:
					getGenshinCreditsPrice();
				break;
				
				case 2:
					getHonkaiCreditsPrice();
				break;
				
				case 3:
					getDiabloCreditsPrice();
				break;
				
				case 4:
					getRobloxCreditsPrice();
				break;
			}
	}
	
	void getShootingGames(){
		do{
		cout<<"Please choose your game:"<<"\n";
		cout<<"[1] Valorant"<<"\n";
		cout<<"[2] Counter-Strike: Global Offensive"<<"\n";
		cout<<"[3]  Apex Legends"<<"\n";
		cout<<"[4]  Fortnite"<<"\n";
		cin>>choiceShooting;
		cin.clear();
	    cin.ignore(1000,'\n');
	    	if (choiceShooting <=0 || choiceShooting >4){
   	 		cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
			}
   	 	}while (choiceShooting <=0||choiceShooting >4);
   	 		switch (choiceShooting){
				case 1:
					getValorantCreditsPrice();
				break;
				
				case 2:
					getCSGOCreditsPrice();
				break;
				
				case 3:
					getApexCreditsPrice();
				break;
				
				case 4:
					getFortniteCreditsPrice();
				break;
			}
	}
	
	void getSandboxGames(){
		do{
		cout<<"Please choose your game:"<<"\n";
		cout<<"[1] Minecraft"<<"\n";
		cout<<"[2] Grand Theft Auto V"<<"\n";
		cout<<"[3] Growtopia"<<"\n";
		cin>>choiceSandbox;
		cin.clear();
 	   	cin.ignore(1000,'\n');
 	   		if (choiceSandbox <=0 || choiceSandbox >3){
   	 		cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
			}
   	 	}while (choiceSandbox <=0||choiceSandbox >3);
   	 		switch (choiceSandbox){
				case 1:
					getMinecraftCreditsPrice();
				break;
				
				case 2:
					getGTACreditsPrice();
				break;
				
				case 3:
					getGrowtopiaCreditsPrice();
				break;

			}
	}
	
	int getDOTACreditsPrice(){
		do{
			cout<<"[1] PhP 55  -  50 Steam Wallet"<<"\n";
			cout<<"[2] PhP 110  -  100 Steam Wallet"<<"\n";
			cout<<"[3] PhP 265  -  250 Steam Wallet "<<"\n";
			cout<<"[4] PhP 530  -  500 Steam Wallet "<<"\n";
			cout<<"[5] PhP 1,050  -  1,000 Steam Wallet "<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    			if (choice <=0 || choice >5){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}
			
    		cout<<"How many would you like to buy? (Enter quantity): "<<"\n";
    		cin>>quantity;
			cin.clear();
    		cin.ignore(1000,'\n');
    		switch(choice){
    			case 1:
    				price = 55; break;
    			case 2:
    				price = 110; break;
    			case 3:
    				price = 265; break;
    			case 4:
    				price = 530; break;
    			case 5:
    				price = 1050; break;
    		}
    		DOTACreditsPrice = quantity*price;
    		return DOTACreditsPrice;	
    		
		}while (choice <=0||choice >5);
	}
	
	int getLOLCreditsPrice(){
		do{
			cout<<"[1] PhP 20  -  108 Riot Points"<<"\n";
			cout<<"[2] PhP 50  -  270 Riot Points"<<"\n";
			cout<<"[3] PhP 100  -  540 Riot Points"<<"\n";
			cout<<"[4] PhP 200  -  1080 Riot Points"<<"\n";
			cout<<"[5] PhP 300  -  1620 Riot Points"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    			if (choice <=0 || choice >5){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}
			cout<<"How many would you like to buy? (Enter quantity): "<<"\n";
    		cin>>quantity;
			cin.clear();
    		cin.ignore(1000,'\n');
    		switch(choice){
    			case 1:
    				price = 20; break;
    			case 2:
    				price = 50; break;
    			case 3:
    				price = 100; break;
    			case 4:
    				price = 200; break;
    			case 5:
    				price = 300; break;
    		}
    		LOLCreditsPrice = quantity*price;
    		return LOLCreditsPrice;		
		}while (choice <=0||choice >=5);
	}
	
	int getMLCreditsPrice(){
		do{
			cout<<"[1] ML Credits"<<"\n";
			cout<<"[2] ML Pass"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    		   	if (choice <=0 || choice >2){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}	
		}while (choice <=0||choice >2);
			switch (choice){
				case 1:
					do{
						cout<<"[1] PhP 50  -  55 Diamonds"<<"\n";
						cout<<"[2] PhP 100  -  110 Diamonds"<<"\n";
						cout<<"[3] PhP 200  -  220 Diamonds"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
			    		cin.ignore(1000,'\n');
			    			if (choice <=0 || choice >3){
			   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
						cout<<"How many would you like to buy? (Enter quantity): "<<"\n";
				    	cin>>quantity;
						cin.clear();
				    	cin.ignore(1000,'\n');
				    	switch(choice){
				    		case 1:
				   				price = 50; break;
				   			case 2:
			    				price = 100; break;
			    			case 3:
			    				price = 200; break;
			    		}
						MLCreditsPrice = quantity*price;
			    		return MLCreditsPrice;

					}while (choice <=0||choice >3);
				break;
				
				case 2:
					do{
						cout<<"[1] PhP 375  -  Crystals of Aurora Pass"<<"\n";
						cout<<"[2] PhP 400  -  Twilight Pass"<<"\n";
						cout<<"[3] PhP 500  -  Starlight Pass"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
			    		cin.ignore(1000,'\n');
			    			if (choice <=0 || choice >3){
			   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
							cout<<"How many would you like to buy? (Enter quantity): "<<"\n";
				    	cin>>quantity;
						cin.clear();
				    	cin.ignore(1000,'\n');
				    	switch(choice){
				    		case 1:
				   				price = 375; break;
				   			case 2:
			    				price = 400; break;
			    			case 3:
			    				price = 500; break;
			    		}
						MLCreditsPrice = quantity*price;
			    		return MLCreditsPrice;
					}while (choice <=0||choice >3);
				break;
			}	
	}
	
	int getGenshinCreditsPrice(){
		do{
			cout<<"[1] Genshin Impact Credits"<<"\n";
			cout<<"[2] Genshin Impact Items"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    		   	if (choice <=0 || choice >2){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}	
		}while (choice <=0||choice >2);
			switch (choice){
				case 1:
					do{
						cout<<"[1] PhP 50  -  60 Crystals"<<"\n";
						cout<<"[2] PhP 100  -  120 Crystals"<<"\n";
						cout<<"[3] PhP 500  -  650 Crystals"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >3){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >3);
					
				break;
				
				case 2:
					do{
						cout<<"[1] PhP 250  -  Welkin Moon"<<"\n";
						cout<<"[2] PhP 1000  -  Diluc Skin"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >2){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >2);
				break;
			}
	}
	
	int getHonkaiCreditsPrice(){
		do{
			cout<<"[1] PhP 50  -  65 Crystals"<<"\n";
			cout<<"[2] PhP 250  -  330 Crystals"<<"\n";
			cout<<"[3] PhP 500  -  660 Crystals"<<"\n";
			cout<<"[4] PhP 1,000  -  1,320 Crystals"<<"\n";
			cout<<"[5] PhP 2,490  -  3,300 Crystals"<<"\n";
			cout<<"[6] PhP 4,990  -  6,600 Crystals"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    			if (choice <=0 || choice >6){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}
		}while (choice <=0||choice >6);
	}
	
	int getDiabloCreditsPrice(){
		do{
			cout<<"[1] PhP 49  -  60 Eternal Orbs"<<"\n";
			cout<<"[2] PhP 249  -  300+20 Eternal Orbs"<<"\n";
			cout<<"[3] PhP 499  -  600+50 Eternal Orbs"<<"\n";
			cout<<"[4] PhP 1,190  -  1,500+150 Eternal Orbs"<<"\n";
			cout<<"[5] PhP 4,790  -   6,000+1,200 Eternal Orbs"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    			if (choice <=0 || choice >5){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}
		}while (choice <=0||choice >5);
	}
	
	int getRobloxCreditsPrice(){
		do{
			cout<<"[1] Roblox Credits"<<"\n";
			cout<<"[2] Roblox Premium"<<"\n";
			cout<<"[3] Roblox Gift Card"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    		   	if (choice <=0 || choice >3){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}	
		}while (choice <=0||choice >3);
			switch (choice){
				case 1:
					do{
						cout<<"[1] PhP 250  -  400 Robux"<<"\n";
						cout<<"[2] PhP 500  -  800 Robux"<<"\n";
						cout<<"[3] PhP 1,000  -  1,700 Robux"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >3){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >3);
				break;
				
				case 2:
					do{
						cout<<"[1] PhP 250  -  450 Robux"<<"\n";
						cout<<"[2] PhP 500  -  1,000 Robux"<<"\n";
						cout<<"[3] PhP 1,000  -  2,200 Robux"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >3){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >3);
				break;
				
				case 3:
					do{
						cout<<"[1] PhP 500  -  800 Robux with 2 Virtual Items"<<"\n";
						cout<<"[2] PhP 1,000  -  1,700 Robux  with 2 Virtual Items"<<"\n";
						cout<<"[3] PhP 2,500  -  4,500 Robux  with 2 Virtual Items"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >3){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >3);
				break;
			}		
	}
	
	int getValorantCreditsPrice(){
		do{
			cout<<"[1] PhP 50  -  125 Points"<<"\n";
			cout<<"[2] PhP 150  -  400 Points"<<"\n";
			cout<<"[3] PhP 300  -  800 Points"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    			if (choice <=0 || choice >3){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}
		}while (choice <=0||choice >3);
	}
	
	int getCSGOCreditsPrice(){
		do{
			cout<<"[1] CSGO Credits"<<"\n";
			cout<<"[2] CSGO Items"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    		   	if (choice <=0 || choice >2){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}	
		}while (choice <=0||choice >2);
			switch (choice){
				case 1:
					do{
						cout<<"[1] PhP 55  -  50 Steam Wallet"<<"\n";
						cout<<"[2] PhP 110  -  100 Steam Wallet"<<"\n";
						cout<<"[3] PhP 265  -  250 Steam Wallet "<<"\n";
						cout<<"[4] PhP 530  -  500 Steam Wallet "<<"\n";
						cout<<"[5] PhP 1,050  -  1,000 Steam Wallet "<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >5){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >5);
				break;
				
				case 2:
					do{
						cout<<"[1] PhP 100  -  Operation Riptide Case"<<"\n";
						cout<<"[2] PhP 550  -  Operation Hydra Case"<<"\n";
						cout<<"[3] PhP 2,500  -  Operation Bravo Case"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >3){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >3);
				break;
			}
	}
	
	int getApexCreditsPrice(){
		do{
			cout<<"[1] PhP 50  -  90 SC"<<"\n";
			cout<<"[2] PhP 150  -  280 SC"<<"\n";
			cout<<"[3] PhP 200  -  500 SC"<<"\n";
			cout<<"[4] PhP 400  -  1,050 SC"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    			if (choice <=0 || choice >4){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}
		}while (choice <=0||choice >4);
	}
	
	int getFortniteCreditsPrice(){
		do{
			cout<<"[1] Fortnite Credits"<<"\n";
			cout<<"[2] Fortnite Items"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    		   	if (choice <=0 || choice >2){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}	
		}while (choice <=0||choice >2);
			switch (choice){
				case 1:
					do{
						cout<<"[1] PhP 428  -  1,000 V-Bucks"<<"\n";
						cout<<"[2] PhP 1,071  -   2,800 V-Bucks"<<"\n";
						cout<<"[3] PhP 1,713  -  5,000 V-Bucks"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
	    				cin.ignore(1000,'\n');
    						if (choice <=0 || choice >3){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >3);
				break;
				
				case 2:
					do{
						cout<<"[1] PhP 214  -  Checkered Past Pack"<<"\n";
						cout<<"[2] PhP 770  -   The Final Reckoning Pack"<<"\n";
						cout<<"[3] PhP 1,071  -  Skull Squad Pack"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >3){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >3);
				break;
			}		
	}
	
	int getMinecraftCreditsPrice(){
		do{
			cout<<"[1] PhP 50  -  125 Points"<<"\n";
			cout<<"[2] PhP 150  -   400 Points"<<"\n";
			cout<<"[3] PhP 300  -  800 Points"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    			if (choice <=0 || choice >3){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}
		}while (choice <=0||choice >3);
	}
	
	int getGTACreditsPrice(){
		do{
			cout<<"[1] PhP 298  -  Bull Shark Cash Card"<<"\n";
			cout<<"[2] PhP 598  -   Great White Shark Cash Card"<<"\n";
			cout<<"[3] PhP 1,498  -  Whale Shark Cash Card"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    			if (choice <=0 || choice >3){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}
		}while (choice <=0||choice >3);
	}
	
	int getGrowtopiaCreditsPrice(){
		do{
			cout<<"[1] Growtopia Credits"<<"\n";
			cout<<"[2] Growtopia Pass"<<"\n";
			cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
			cin>>choice;
			cin.clear();
    		cin.ignore(1000,'\n');
    		   	if (choice <=0 || choice >2){
   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
				}	
		}while (choice <=0||choice >2);
			switch (choice){
				case 1:
					do{
						cout<<"[1] PhP 60  -  26,000 Gems"<<"\n";
						cout<<"[2] PhP 100  -   60,000 Gems"<<"\n";
						cout<<"[3] PhP 300  -  170,00 Gems w/ Extra 20 Worldlocks & 1 Growtoken"<<"\n";
						cout<<"[4] PhP 500  -  380,00 Gems w/ Extra 45 Worldlocks, 2 Growtoken & 1 Megaphone"<<"\n";
						cout<<"[5] PhP 3,000  -  2,050,00 Gems w/ Extra 230 Worldlocks, 10 Growtoken & 5 Megaphone"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
			    		cin.ignore(1000,'\n');
			    			if (choice <=0 || choice >5){
			   	 			cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >5);
				break;
				
				case 2:
					do{
						cout<<"[1] PhP 500  -  Royal Grow Pass"<<"\n";
						cout<<"[2] PhP 1,000  -  1 Year Subscription w/ Game Benefits"<<"\n";
						cout<<"What would you like to buy? (Enter the Item Number): "<<"\n";
						cin>>choice;
						cin.clear();
    					cin.ignore(1000,'\n');
    						if (choice <=0 || choice >2){
   	 						cout<<"INVALID INPUT! Please try again."<<"\n"<<"\n";	
							}
					}while (choice <=0||choice >2);
				break;
			}
	}
	
/*int getTotalPrice(){
	totalPrice = 	DOTACreditsPrice + LOLCreditsPrice + MLCreditsPrice +
	 				GenshinCreditsPrice + HonkaiCreditsPrice + DiabloCreditsPrice + RobloxCreditsPrice +
					ValorantCreditsPrice + CSGOCreditsPrice + ApexCreditsPrice + FortniteCreditsPrice +
					MinecraftCreditsPrice + GTACreditsPrice + GrowtopiaCreditsPrice;
	return totalPrice;*/
	
