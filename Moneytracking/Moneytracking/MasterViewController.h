//
//  MasterViewController.h
//  Moneytracking
//
//  Created by Peter Bobula on 03/11/15.
//  Copyright © 2015 Peter Bobula. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

