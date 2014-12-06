//
//  ViewController.h
//  BlocBrowser
//
//  Created by Tom Lee on 11/30/14.
//  Copyright (c) 2014 Tom Lee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AwesomeFloatingToolbar.h"
#define kWebBrowserBackString NSLocalizedString(@"Back", @"Back command")
#define kWebBrowserForwardString NSLocalizedString(@"Forward", @"Forward command")
#define kWebBrowserStopString NSLocalizedString(@"Stop", @"Stop command")
#define kWebBrowserRefreshString NSLocalizedString(@"Refresh", @"Reload command")

@interface ViewController : UIViewController


- (void) resetWebView;

@end

