#import <UIKit/UIKit.h>

@class MailViewController;

@interface MailAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MailViewController *viewController;

@end
