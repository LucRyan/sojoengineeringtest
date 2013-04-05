# Sojo Engineering Test

Welcome! This is the GitHub git repository for Sojo Studio's take-home engineering exam. You probably have been directed here as part of an application process for an engineering position at Sojo Studios. If not, feel free to try the test out, anyway!

The engineering test's goals are as follows:
* Display an understanding of Git as a version control system
* Show comphrension of and aptitude at reading and writing C++
* Display an understanding of game systems, problem solving, organization, data structures, etc.
* Travel off the beaten path
* Build something fun

## Getting Started
### Forking the Repository
Go ahead and fork the repository. If you don't know how, refer to GitHub's [help page](https://help.github.com/articles/fork-a-repo). 
> Suggestion: be professional, commit in regular intervals with meaningful commit messages

### Setting up the project
The Sojo engineering test has been written in minimal C++11. It should compile in any IDE on any OS supporting C++11 without problems. Once you have the headers and source compiling, you will rapidly note that there is very, very little code implemented. Your mission, if you choose to accept it, is to implement the remaining simulation.

### Project Requirements
For this test, you will be implementing a simple actor simulation involving three types of agents. Actors have a few simple rules:
* The world is an arbitrary width and height grid specified by SessionData
* Each grid cell is 1 unit wide and high
* An actor perfectly occupies 1 grid cell
* An actor moves 1 grid cell per turn
* Agents cannot move beyond the bounds of the world
* All actors are randomly positioned within the world constraints at the beginning of the simulation (populated via SessionData)
* There are three logical divisions for agent behavior in the game
  * Hunter - intelligently hunt prey
  * Dodo - randomly move from location to location without concern for hunters
  * Fox - intelligently avoid predators

Additionally, there are a few development constraints:
* Implement all data structures and algorithms yourself
* Code must compile without warnings
* Do not just submit the most naive implementation and be done with it, this is a chance to show off your abilities and knowledge

## Submitting
* If your repository is private, add GitHub user [aagrapsas-sb](https://github.com/aagrapsas-sb) to your repository
* Once you are done changing your codebase, e-mail andrew dot grapsas at sojostudios dot com a link to the repository
