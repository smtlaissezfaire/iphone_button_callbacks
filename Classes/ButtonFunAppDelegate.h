//
//  ButtonFunAppDelegate.h
//  ButtonFun
//
//  Created by Scott Taylor on 7/22/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ButtonFunViewController;

@interface ButtonFunAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ButtonFunViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ButtonFunViewController *viewController;

@end

