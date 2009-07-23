//
//  ButtonFunViewController.m
//  ButtonFun
//
//  Created by Scott Taylor on 7/22/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import "ButtonFunViewController.h"

@implementation ButtonFunViewController
@synthesize statusText;

-(IBAction)buttonPressed:(id)sender
{
  NSString *title = [sender titleForState:UIControlStateNormal];
  NSString *newText = [[NSString alloc] initWithFormat: @"%@ button pressed.", title];
  statusText.text = newText;
  [newText release];
}

-(BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
  return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning]; // Releases the view if it doesn't have a superview
  // Release anything that's not essential, such as cached data
}

- (void)dealloc {
  [statusText release];
  [super dealloc];
}

@end
