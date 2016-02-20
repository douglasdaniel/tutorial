#!/usr/bin/env python

# Recursive asking function                                                                  
#                                                                                            
def ask():
    ans = raw_input("Do this again? (y/n) ")
    boo = True

    # Recursively keep asking until answer is provided                                       
    #                                                                                        
    while(ans.lower() != 'y' and ans.lower() != 'n'):
        ans = raw_input('Incorrect input. Continue? (y/n) ')

    # If 'y' repeat program, if 'n' exit                                                     
    #
    if (ans == 'y' or ans == 'Y'):
        boo = True
    elif(ans == 'n' or ans == 'N'):
        boo = False
    return boo
