#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       Mouth                  
//  action 1:   smiles                  
mouth.smile();
//  action 2:   opens
mouth.open();
//  action 3:   sticks out tongue 
mouth.stickOutTongue();

//  2)
//  Noun:       Kettle
//  action 1:   boils
kettle.boil();
//  action 2:   stops boiling
kettle.stopBoil();
//  action 3:   malfunctions
kettle.malfunction();   // would kettle.isBroken() be a state check?
 
//  3)
//  Noun:       Cat
//  action 1:   Catches Mouse
cat.catchMouse();
//  action 2:   Catches Bird
cat.catchBird();
//  action 3:   Sleeps
cat.sleep();
 
//  4)
//  Noun:       Counter
//  action 1:   Counts up
counter.countUp();
//  action 2:   Counts down
counter.countDown();
//  action 3:   Stops counting
counter.stop();
 
//  5)
//  Noun:       Athlete
//  action 1:   Trains
athlete.train();
//  action 2:   Competes
athlete.compete();
//  action 3:   Rests
athlete.rest();

//  6)
//  Noun:       Record Player
//  action 1:   Plays 45rpm
recordPlayer.play45();
//  action 2:   Plays 33rpm
recordPlayer.play33();
//  action 3:   Stops playing
recordPlayer.stop();
 
//  7)
//  Noun:       Printer
//  action 1:   Print colour (UK spelling!)
printer.printColour();
//  action 2:   Print black and white
printer.printBlackAndWhite();
//  action 3:   Print two sided 
printer.printTwoSided();    
 
//  8)
//  Noun:       Frog
//  action 1:   Jumps
frog.jump();
//  action 2:   Catches fly
frog.catchfly();
//  action 3:   Ribbits
frog.ribbit();
 
//  9)
//  Noun:       Student
//  action 1:   Learns
student.learn();
//  action 2:   Misunderstands
student.midunderstand();
//  action 3:   Does assignment
student.doesAssignment();
 
//  10)
//  Noun:       Postman
//  action 1:   Delivers post
postman.deliverPost();
//  action 2:   Collects post
postman.collectPost();
//  action 3:   drives to depot
postman.driveToDepot();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
