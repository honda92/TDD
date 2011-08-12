/* *  TEST.cpp *  Money * *  Created by 本田 純子 on 11/08/03. *  Copyright 2011 nara-wu. All rights reserved. * */#include <gtest/gtest.h>#include "Money.h"TEST(timesTest, Test1){	Dollar* five = new Dollar(5);	Dollar* object = new Dollar(10);	ASSERT_TRUE(five->times(2)->equals(object));	delete five, object;}TEST(timesTest, Test2){	Dollar* five = new Dollar(5);	Dollar* object = new Dollar(15);	ASSERT_TRUE(five->times(3)->equals(object));	delete five, object;}TEST(equalityTest,Test1){	Dollar* five, *object;	ASSERT_TRUE((five = new Dollar(5))->equals(object = new Dollar(5)));	delete five,object;}TEST(equalityTest,Test2){	Dollar* five, *object;	ASSERT_FALSE((five = new Dollar(5))->equals(object = new Dollar(6)));	delete five,object;}TEST(FranctimesTest, Test1){	Franc* five = new Franc(5);	Franc* object = new Franc(10);	ASSERT_TRUE(five->times(2)->equals(object));	delete five, object;}TEST(FranctimesTest, Test2){	Franc* five = new Franc(5);	Franc* object = new Franc(15);	ASSERT_TRUE(five->times(3)->equals(object));	delete five, object;}