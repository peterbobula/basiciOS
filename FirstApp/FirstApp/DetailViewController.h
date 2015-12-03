//
//  DetailViewController.h
//  FirstApp
//
//  Created by Peter Bobula on 03/12/15.
//  Copyright © 2015 Peter Bobula. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

