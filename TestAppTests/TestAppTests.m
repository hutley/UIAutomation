//
//  TestAppTests.m
//  TestAppTests
//
//  Created by Hiedi Utley on 12/16/13.
//  Copyright (c) 2013 Pioneering Software. All rights reserved.
//

#import <XCTest/XCTest.h>
#import <UIAutomation/UIAutomation.h>

@interface TestAppTests : XCTestCase

@end

@implementation TestAppTests

- (void)testAutomationDidLoad
{
	UIATarget *localTarget = [[UIAutomation targetClass] localTarget];
	XCTAssertNotNil(localTarget);
}

- (void)testFrontMostApp
{
	UIATarget *localTarget = [[UIAutomation targetClass] localTarget];
	UIAApplication *app = [localTarget frontMostApp];
	XCTAssertNotNil(app);
}

- (void)testMainWindow
{
	UIATarget *localTarget = [[UIAutomation targetClass] localTarget];
	UIAApplication *app = [localTarget frontMostApp];
	UIAWindow *window = [app mainWindow];
	XCTAssertNotNil(window);
}

- (void)testLocalTargetTap
{
	// Launch Safari in the iOS simulator to see the results of this
	// test. Launch Safari then run the tests. It taps the address bar.
	UIATarget *localTarget = [[UIAutomation targetClass] localTarget];
	[localTarget tap:[NSValue valueWithCGPoint:CGPointMake(20.0, 20.0)]];
}

- (void)testVersioning
{
	XCTAssertNotNil(UIAutomationVersionString());
	XCTAssertTrue(strcmp(@encode(typeof(kUIAutomationVersionString)), "^C") == 0);
	XCTAssertTrue(strcmp(@encode(typeof(kUIAutomationVersionNumber)), "d") == 0);
}

@end