## Notes on this fork
This is Nlarn 0.7.6 with the following changes: 
Merged nlarn#299 for compilation issues (and Changelog update). 
Included unistd.h in game.c to build on FreeBSD. 
Changed memory tile and message colors - could not get them to display properly otherwise. 
There were NO gameplay changes.

Welcome to NLarn!
=================

The goal of the game is to find the potion to cure your daughter from the
illness "dianthroritis" and bring it back home. Time is finite - when you
return to your home, the doctor will tell you how much time is left. In
NLarn, time is measured in mobuls. A mobul consists of 100 turns. You can
see the number of turns elapsed in the status bar on the right, prefixed
with **T**.

The game consists of a home town, and two dungeons: the caverns of Larn and
the volcano. The potion is hidden inside the volcano, which is unfortunately
populated by dragons and demons. To be able to fight the latter, you have to
gain experience and wealth by fighting through the caverns. The equipment
available in the DND store in town is expensive, but will help you to survive
in the volcano long enough to find the potion. To earn money, you can collect
gems in the caverns and sell them to the bank.

The entrance of the caverns is depicted by the letter **O**; the shaft leading
down to the volcano by the letter **I**.

You can get help in the game by pressing **?** or **F1**.


## News and announcements

News about NLarn are posted on the [NLarn website](https://nlarn.github.io/).


## Game configuration

You can predefine some settings in the file `nlarn.ini`. The game writes
a default `nlarn.ini` to the directory `~/.nlarn` on Linux, BSD and macOS,
or to the folder `%LOCALAPPDATA%\nlarn` on Windows, when this file doesn't
exist. Comments above the individual setting explain the possible settings.


## Heritage

NLarn is modeled after Larn, which was written by Noah Morgan in 1986.
For an in-depth review of Larn, have a look at the
[@Play review of Larn](http://www.gamesetwatch.com/2008/04/play_larn_or_i_hocked_the_car.php).

Later in the eigthies, Phil Cordier created ULarn, an extended version of
Larn. It comes with more levels, items and adds character classes to the
game.

NLarn tries to maintain the atmosphere and story of the last version of
Larn (12.3) while improving game-play and user experience. Only a few of
the additions of Ularn have been included.


## Compiling NLarn

Instructions how to build NLarn on Linux, MacOS X and Windows can be found on
a [wiki page](https://github.com/nlarn/nlarn/wiki/Building).


## Reporting bugs

Bug reports are very welcome. You can either send me an eMail to
<jdegroot@web.de> or create an issue on the
[NLarn bug tracker](https://github.com/nlarn/nlarn/issues), where
known bugs and planned tasks are tracked.

If you have ideas for changes or additions to the game, please let me know.
A list of ideas is maintained on a [wiki page](https://github.com/nlarn/nlarn/wiki/Ideas).
