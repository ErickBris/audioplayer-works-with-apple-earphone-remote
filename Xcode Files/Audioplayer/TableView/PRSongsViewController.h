//
//  PRTableViewController.h
//  Audioplayer
//
//  Created by Paolo Rossignoli on 24/02/14.
//  Copyright (c) 2014 Paolo Rossignoli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>

@interface PRSongsViewController : UIViewController

@property (nonatomic, readwrite) MPMediaItemCollection *mediaItemCollection;

@end
