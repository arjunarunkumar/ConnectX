Bugs Documentation
------------------------------------------------------------------------------------------------------------------------------------------------
1.  Unit test written for placePiece function has a bug when the below values are passed.
    In Function void ConnectX::placePiece(int column)
    {
      placePiece(12); // Which must return false since its out of bound , still it gets accepted  and a player is allowed to place in a random place.
      placepiece(-2); //Gets core dumped !! (which should be silently ignored by just doing a toggle turn)
    }
------------------------------------------------------------------------------------------------------------------------------------------------
2.  Bug in inBounds function
    When we are checking for width and height in inbounds function , the condition written is wrong causing havoc accepting
    height and width when they are out of range of the board.
    for example (-1,3)  is returning true ! which is supposed to false.

------------------------------------------------------------------------------------------------------------------------------------------------
