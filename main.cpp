#include <thread>
#include <chrono>
#include "Weapon.h"

int main()
{
    
    //waking up
    int userInput;
    cout << "You awaken in a dank and dimly lit cellar room." << endl;
    cout << "Your eyes slowly adjust to the light, and you hobble yourself up onto your feet." << endl;
    cout << "You have no recollection of any past events. Your eyes have adjusted to the light though." << endl;
    cout << endl;

    //first choices after awakening
    do{
        cout << "Options: \n1. Take a look around the room.\n2. Do nothing.\n3. Curl back up into a ball and cry." << endl;
        cout << "Choice: ";
        cin >> userInput;
        cout << endl;

        if(userInput == 1)
        {    
        cout << "The floor, walls, and ceiling around you are all cobblestone." << endl;
        cout << "They all feel slightly wet to the touch, for some reason." << endl;
        cout << "Dead ahead is a door, slightly ajar. To your left, a table with a piece of parchment on it." << endl;
        cout << "To your right, a weapons rack. There's a sword, a mace, and a pair of daggers." << endl;
        cout << "The room is lit by some torches scarcely populating the walls, providing just enough light." << endl;
        cout << "You approach the table first." << endl;
        break;
        }

        else if(userInput == 2)
        {
        cout << "You stand around. Not a whole lot happens here apparently." << endl;
        }

        else if(userInput == 3)
        {
        cout << "Overcome with an overbearing sense of anxiety from the fear of the unknown,\n";
        cout << "you collapse into a fetal position and run your tear ducts dry." << endl;
        cout << "Left to the thoughts within your head, you slowly die from dehydration and starvation." << endl;
        cout << "Game over. This program will close itself in 10 seconds." << endl;
        std::this_thread::sleep_for (std::chrono::seconds(10));
        return -1;   
        }
        else
        {
        cout << "Please pick a number 1 through 3." << endl;
        
        }

    }while(userInput || userInput == 0);


   cout << endl;
   
    //reading the letter
    cout << "You being reading the paper on the table." << endl;
    cout << "\"If you're reading this letter, you've woken up from the interrogation session.\"" << endl;
    cout << "\"For your reprehensible crimes against the state, you're currently placed in a life or death match.\"" << endl;
    cout << "\"You'll have a choice of weapons from the rack in the room. Pick one only.\"" << endl;
    cout << "\"We'll be waiting for you.\"" << endl << endl;
    std::this_thread::sleep_for (std::chrono::seconds(5));

    //choosing a weapon
    cout << "You head over to the rack and peruse your options." << endl;
    cout << "-Sword: \tYour average one-handed blade. Old reliable." << endl;
    cout << "\t\tDeals 3-5 damage per hit, with a crit chance of 10% to deal 1.5x damage" << endl << endl;
    cout << "-Mace: \t\tA decently thick rod with a large head that's covered in spikes. Don't laugh at that." << endl;
    cout << "\t\tDeals 4-6 damage per hit, with a crit chance of 10% for 1.25x damage." << endl << endl;
    cout << "-Daggers: \tTwo smaller blades that fit snugly into your hands. Cool practice hand movements optional." << endl;
    cout << "\t\tDeals 2-3 damage per hit, with a crit chance of 10% for 2x damage." << endl;
    cout << "\t\tThe daggers hit two times." <<endl << endl;
    std::this_thread::sleep_for (std::chrono::seconds(5));

    
    bool hasSword = false;
    bool hasMace = false;
    bool hasDaggers = false;
    bool hasFists = false;

    do
    {
    cout << "Choose a weapon:\n1. Sword\n2. Mace\n3. Daggers\n4. Leave the room." << endl;
    cout << "Choice: ";
    cin >> userInput;
    cout << endl;

    if(userInput == 1)
    {
        cout << "You selected the sword." << endl;
        hasSword = true;
        break;
    }
    else if (userInput == 2)
    {
        cout << "You selected the mace." << endl;
        hasMace = true;
        break;
    }
    else if(userInput == 3)
    {
        cout << "You selected the daggers." << endl;
        hasDaggers = true;
        break;
    }
    else if (userInput == 4)
    {
        cout << "Deciding you are above tools of murder, you opt for just your fists." << endl;
        cout << "Fists deal 1-2 damage per hit with a 50% chance of dealing 1.25x damage." << endl;
        cout << "You attack twice with fists." << endl;
        hasFists = true;
        break;
    }
    else
    {
        cout << "Please select a number 1-4." << endl;
    }
    
    } while (userInput || !userInput);
    std::this_thread::sleep_for (std::chrono::seconds(5));

    //after choosing weapon and getting to first encounter
    cout << "\n\nAfter deciding on your weapon, you head through the only door in the room." << endl;
    cout << "Immediately outside the door is a long hallway with doors on both sides of the walls." << endl;
    cout << "What's contained on the other side of the doors you may never know, but it's also not your current focus." << endl;
    cout << "There's a final door at the end of the hallway, and opening it leads into a large circular arena." << endl;
    cout << "The main arena floor is well lit, but the spectator stands positioned above it are hard to see." << endl;
    cout << "You can make out a silhouette or two moving amongst the shadows of the stands but it's difficult to confirm." << endl;
    cout << "What you can make out, however, is the large orc on the opposite side of the arena." << endl;
    cout << "He's at least a head or two taller than you, wields a club almost as thick as his thighs, and seems delighted that you're here." << endl << endl;
    std::this_thread::sleep_for (std::chrono::seconds(2));
    cout << "\"HAHA, finally you're out of your cell!\"" << endl;
    cout << "\"They told me all about what you did. I am going to love this.\"" << endl;
    cout << "\"Enough talk. Let's get to the main attraction!\"" << endl;
    cout << "The orc readies its club and prepares for combat." << endl << endl;
    std::this_thread::sleep_for (std::chrono::seconds(2));

    float orcHP = 25;
    float playerHP = 20;
    int turnCounter = 0;
    float damageDealt = 0;
    float orcDamage = 0;
    bool isDefending = false;

    do{
        turnCounter++;
        cout << "\nTurn " << turnCounter << ":" << endl;
        cout << "Your health: " << playerHP << "\nEnemy health: " << orcHP << endl;
        cout << "The orc is prepared to swing." << endl << endl;
        cout << "Actions:" << endl;
        cout << "1. Attack\n2. Defend\n3. Analyze\n";
        cin >> userInput;

        if(userInput == 1)
        {
            //attacking
            
            if(hasSword)
            {
                srand(time(0));
                if(rand() % 10 + 1 == 1)
                {
                    damageDealt = swordDamageCrit();
                    cout << "Critical hit! You hit the enemy for " << damageDealt << " health." << endl;
                    orcHP = orcHP - damageDealt;
                    
                }
                else
                {
                    damageDealt = swordDamageNormal();
                    cout << "You hit the enemy for " << damageDealt << " health." << endl;
                    orcHP = orcHP - damageDealt;
                    
                }
            }
            else if(hasDaggers)
            {
                srand(time(0));
                if(rand() % 10 + 1 == 1)
                {
                    damageDealt = daggersDamageCrit();
                    cout << "Critical hit! You hit the enemy for " << damageDealt << " health." << endl;
                    orcHP = orcHP - damageDealt;
                
                }
                else
                {
                    damageDealt = daggersDamageNormal();
                    cout << "You hit the enemy for " << damageDealt << " health." << endl;
                    orcHP = orcHP - damageDealt;
                    
                }
            }
            else if(hasMace)
            {
                srand(time(0));
                if(rand() % 10 + 1 == 1)
                {
                    damageDealt = maceDamageCrit();
                    cout << "Critical hit! You hit the enemy for " << damageDealt << " health." << endl;
                    orcHP = orcHP - damageDealt;
                    
                }
                else
                {
                    damageDealt = maceDamageNormal();
                    cout << "You hit the enemy for " << damageDealt << " health." << endl;
                    orcHP = orcHP - damageDealt;
                    
                }
            }
            else if(hasFists)
            {
                srand(time(0));
                if(rand() % 10 + 1 >= 5)
                {
                    damageDealt = fistsDamageCrit();
                    cout << "Critical hit! You hit the enemy for " << damageDealt << " health." << endl;
                    orcHP = orcHP - damageDealt;
                    
                }
                else
                {
                    damageDealt = fistsDamageNormal();
                    cout << "You hit the enemy for " << damageDealt << " health." << endl;
                    orcHP = orcHP - damageDealt;
                    
                }
            }
        }

        //defending
        else if(userInput == 2)
        {
        cout << "You put your guard up, and only take 75% damage for the next hit." << endl;
        isDefending = true;
        }
        else if(userInput == 3)
        {
        //analysis
            
        cout << "You take a moment to look at your enemy from head to toe." << endl;
        cout << "The orc's club and deal up to 3-4 damage, and has a 10% chance to crit for 1.25x damage." << endl;
        }

        //not choosing a number 1-3
        else{
        cout << "You lose your footing and stumble while preparing to attack, and lose your turn." << endl;
        }

        cout << "The orc swings his club at you." << endl;
        srand(time(0));
        if(rand() % 10 + 1 == 1)
        {
            orcDamage = orcWeaponCrit();
            cout << "Critical hit! The orc hits you for " << orcDamage << " health." << endl;
            if(isDefending)
            {
                orcDamage = orcDamage * .75;
                cout << "Thanks to your pre-emptive guard, you only take " << orcDamage << " damage." << endl;
            }
            playerHP = playerHP - orcDamage;
            isDefending = false;
        }
        else
        {
            orcDamage = orcWeaponNormal();
            cout << "The orc hits you for " << orcDamage << " health." << endl;
            if(isDefending)
            {
                orcDamage = orcDamage * .75;
                    cout << "Thanks to your pre-emptive guard, you only take " << orcDamage << " damage." << endl;
            }
            playerHP = playerHP - orcDamage;
            isDefending = false;
        }
     

    }while(playerHP > 0 && orcHP > 0);

    std::this_thread::sleep_for (std::chrono::seconds(3));
    if(playerHP <= 0 && orcHP <= 0)
    {
        cout << "\nAfter trading blows both you and the orc go for one final attack." << endl;
        cout << "You both land precise strikes and knock the other down, unable to get up." << endl;
        cout << "As you lay on the floor, your eyes meet with the orc's and he snorts out one final breath." << endl;
        cout << "\"What a stupid way to end... at least I served my purpose... in saving the country from you." << endl;
        cout << "You lose consciousness." << endl;
        exit;
    }
    else if(playerHP <= 0)
    {
        cout << "The orc takes a strong swing at your feet, sending you flying across the arena." << endl;
        cout << "Both legs crippled and unable to stand, the orc lumbers over to you with a massive shit-eating grin." << endl;
        cout << "\"Your head is going to pop like a grape in this next one... Ohhh, how I've waited for this.\"" << endl;
        cout << "The orc winds up his swing, and then brings the club down on your he-" << endl;
        exit;
    }
    else if(orcHP <= 0)
    {
        cout << "After your last trade of hits the orc stumbles and attempts to balance himself with his club." << endl;
        cout << "He collapses from under the weight of himself and crumples onto the floor." << endl;
        cout << "\"I can't believe... my task... you are a menace to society." << endl;
        cout << "\"I heard of what you did. You will never be forgiven by.. <hack>... the public." << endl;
        cout << "\"What did you kill for...? Nothing... I kill for my family. My friends. The protection of life as I know it..." << endl;
        cout << "\"My ancestors and I curse y-\"" << endl;
        cout << "Deciding you've had enough of whatever near-death hallucinations the orc was going through, you end it somewhat tersely." << endl;
        cout << "Murmurs from the peanut gallery whisper to and fro in your ears, but it's of no matter to you. You're free!" << endl;
        cout << "As you advance into the next room, you find an older man with some important looking robes and hat." << endl;
        cout << "His demeanor is grim, and his eyes share a mixture of sadness and fear." << endl;
        cout << "\"Well, as ordained by the Court of the Temple, you are hereby acquitted of your past charges and free to go. Door's on your left.\"" << endl;
        cout << "He stamps and signs a few papers before handing them to you, before muttering under his breath, \"Gods help us...\"" << endl;
        cout << "The door on the left leads to a long series of staircases and hallways and more doors until you eventually reach the outside world." << endl;
        cout << "Finally removed from the dank and dark dungeon, you take in a strong breath of fresh country air." << endl;
        cout << "A nearby orc farmer traveling down a nearby road with some cattle notices you." << endl;
        cout << "His eyes widen and falls back on himself in an attempt to flee." << endl;
    }


}