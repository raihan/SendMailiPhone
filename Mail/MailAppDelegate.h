//
//  MailAppDelegate.h
//  Mail
//
//  Created by Jeroen van Rijn on 13-09-11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MailViewController;

@interface MailAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MailViewController *viewController;

@end
