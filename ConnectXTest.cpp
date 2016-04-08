/**
 * Unit Tests for ConnectX class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "ConnectX.h"

class ConnectXTest : public ::testing::Test
{
	protected:
		ConnectXTest(){}
		virtual ~ConnectXTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(ConnectXTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

TEST(ConnectXTest , placePiecevalid)
{
  ConnectX gameCheck;
gameCheck.placePiece(3);
  //gameCheck.placePiece(12);
  gameCheck.placePiece(1);
	gameCheck.placePiece(1);
	gameCheck.placePiece(1);
	gameCheck.placePiece(1);
	gameCheck.placePiece(1);
	gameCheck.placePiece(1);
	gameCheck.placePiece(1);
  gameCheck.placePiece(2);
	//gameCheck.placePiece(-1);
  gameCheck.placePiece(7); // out of bound , but no exception thrown !
  gameCheck.placePiece(0);
  gameCheck.placePiece(4);
//  gameCheck.placePiece(-1);
  gameCheck.placePiece(1);
  //gameCheck.placePiece(11);
  gameCheck.showBoard();
}

TEST(ConnectXTest, myTurn)
{
  ConnectX gameCheck;
  gameCheck.whoseTurn();
	ASSERT_TRUE(true);
}

TEST(ConnectXTest, getPosition)
{
  ConnectX gameCheck;
  gameCheck.at(3,2);
  gameCheck.at(7,6);
  gameCheck.at(-12,3);
  gameCheck.at(10,2);
	gameCheck.at(3,6);
  gameCheck.at(4,12);
  gameCheck.at(4,-12);
}

TEST(ConnectXTest, checkWidHei)
{
  ConnectX gameCheck(0,0,0);
  ConnectX gameCheck1(1,-2,2);
	ConnectX gameCheck2(1,2,-2);
}
