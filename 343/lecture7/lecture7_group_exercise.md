lecture 7 -- Group exercise:

Single rotations; ie., left-left heavy or right-right heavy!

Insert: 3, 2, 1, 4, 5, 6, 7 into a fresh AVL tree.

show each step of the process, eg., for each insertion: heights, rotation node, and tree before and after each rotation.

Tree in array form:
  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14
[ 3, -, -, -, -, -, -, -, -, -, -, -, -, -, -] add 3
[ 3, 2, -, -, -, -, -, -, -, -, -, -, -, -, -] add 2 check height 	-> balanced
[ 3, 2, -, 1, -, -, -, -, -, -, -, -, -, -, -] add 1 check height 	-> unbalanced vertex:3:left-left heavy
[ 2, 1, 3, -, -, -, -, -, -, -, -, -, -, -, -] rebalanced tree 		-> right-right rotation
[ 2, 1, 3, -, -, -, 4, -, -, -, -, -, -, -, -] add 4 check height 	-> balanced
[ 2, 1, 3, -, -, -, 4, -, -, -, -, -, -, -, 5] add 5 check height 	-> unbalanced vertex:3:right-right heavy
[ 2, 1, 4, -, -, 3, 5, -, -, -, -, -, -, -, -] rebalanced tree 		-> left-left rotation
[ 2, 1, 4, -, -, 3, 5, -, -, -, -, -, -, -, 6] add 6 check height 	-> unbalanced right-right heavy
[ 2, 1, 4, -, -, 3, 5, -, -, -, -, -, -, -, 6] rebalanced tree 		-> left-left rotation
[ 4, 2, 5, 1, 3, -, 6, -, -, -, -, -, -, -, 7] add 7 check height 	-> unbalanced right-right heavy
[ 4, 2, 6, 1, 3, 5, 7, -, -, -, -, -, -, -, -] rebalanced tree 		-> left-left rotation

the result is a balanced tree, regardless of input order.

translates into the following branching tree:
                               3                                
                                                                
                               3                                
                             /   \                              
                            2     -                             
                                                                
                               3                                
                             /   \                              
                            2     -                              
                           / \                                   
                          1   -                                  
                                                                
                               2                                
                             /   \                              
                            1     3                             
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                

                                                                


given a tree as:

                 1
                   \
                    6
                   /
                  3
                 
unballanced at 1.
To fix this we need to be able to do a left (counter clockwise) rotation at vertex 1, but first we need
to address the balance at vertex 6.
In order to perform the left rotation at v:1, we need to first perform a right (clockwise) rotation at v:6


                 1
                  \
                   3
                    \
                     6

performed right rotated at v:6


                 3
                / \
               1   6
                    
now, performed left rotation at v:1                    



                            
                                                                
                                4                                
                             /     \                              
                            2       6                              
                           / \     / \                            
                          1   3   5   7
                                       \         action: add 16
                                        16       STATE: balanced
                                                                
                                                                
                                4                                
                             /     \                              
                            2       6                              
                           / \     / \                            
                          1   3   5   7
                                       \
                                        16                      
                                       /       action: add 15  
                                      15       STATE: unbalanced v:7                    
                                                                
                                                                
                                4                                
                             /     \                              
                            2       6                              
                           / \     / \                            
                          1   3   5   7
                                       \
                                        15                      
                                          \                     
                                           16      action: right rotation v:16 into v:15
                                                   STATE: unbalanced v:7      
                                                                
                                                                 
                                4                                
                             /     \                              
                            2       6                              
                           / \     / \                            
                          1   3   5   15
                                     /  \
                                    7    16      action: left rotation v:7 into v:15
                                                 STATE: balanced

                                4                                
                             /     \                              
                            2       6                              
                           / \     / \                            
                          1   3   5   15
                                     /  \
                                    7    16      action: add 14
                                     \           State: unblanced v:15
                                      14


                                4                                
                             /     \                              
                            2       6                              
                           / \     / \                            
                          1   3   5   15
                                     /  \      action: left rotation v:7 to v:14
                                    14   16    STATE: unbalanced v:6
                                   /
                                  7                            
                                                              
          
                                4                                
                             /     \                              
                            2       6                              
                           / \     / \                            
                          1   3   5   15
                                     /  \      action: left rotation v:7 to v:14
                                    14   16    STATE: unbalanced v:6
                                   /
                                  7                            
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                
                                                                

                                                                

