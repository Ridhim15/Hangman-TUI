from hangman_word import word_list
import random
from hangman_art import logo,stages


class Hangman:
    # contructor and class reference 
    def __init__(self) -> None:
        self.word=random.choice(word_list)#chooses random word from word list
        self.l=len(self.word)
        self.blank=['__']*self.l#create as many balnks as word length
        self.life=6#life count for each hangman image
        self.losestreak=0
        self.hashset=set() #hashset for checking and displaying already entered letters
        self.word_idx_table = {} # HashMap
        
        for idx, ch in enumerate(self.word):#creating hashmap for hint function
            #if key doe snot exist in hashmap create key with empty list (prevents)
            if ch not in self.word_idx_table:
                self.word_idx_table[ch] = []
            self.word_idx_table[ch].append(idx)
            
            


    def main(self):# function containg main workings of game
        print(logo)
        print(stages[self.life],"\n",self.word,"\n")
        print("\n",*self.blank,"\n")
        while self.life>0:
            k=False
            if self.losestreak>3:
                self.losestreak=0
                hint=input("Do you need a hint")
                if hint.lower()=='y':
                    print("here is your hint\n")
                
            user=input("Guess a letter \n")
            if not (len(user) == 1 and user.isalpha()):
                print("You have not entered anything\n")
                continue 
            if user in self.hashset:
                print("You have already entered this word\n")
                continue
            self.hashset.add(user)
            
            for pos in range(self.l): # looping for checking if input exists in word
                check=self.word[pos]
                if check==user.lower():# check if current letter is the user choice
                    self.blank[pos]=check
                    print(f"Your chosen letter: {user} is correct\n")
                    k=True
            
            
            if not (k or self.life==0):
                self.life-=1
                print(f"You guessed wrong ,You lose a life \nYou have only {self.life} lives left\n")
                self.losestreak+=1
            

            print(stages[self.life],"\n",*self.blank)
            if "__" not in self.blank:
                print("You win")
                break
        if self.life==0:
            print("You have 0 lives left \nYou lose\n")


    def gameloop(): 
        while True:
            obj=Hangman()
            obj.main()
            play_again=input("Do you want to play again\nPress 'Y' for yes 'N' for no\n\n")
            if play_again.lower()=='n':
                break 
    
    
Hangman.gameloop()
            
       



                
            
        




    

    
        



                
            
        




    

    
        

