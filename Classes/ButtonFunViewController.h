//
//  ButtonFunViewController.h
//  ButtonFun
//
//  Created by Scott Taylor on 7/22/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ButtonFunViewController : UIViewController {
  IBOutlet UILabel *statusText;
}

@property (retain, nonatomic) UILabel *statusText;

-(IBAction)buttonPressed:(id)sender;

@end

