//
//  ViewController.h
//  Tap Me
//
//  Created by Cole Bratcher on 1/14/14.
//  Copyright (c) 2014 Cole Bratcher. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<UIAlertViewDelegate> {
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    // Add the next three lines
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
    
    AVAudioPlayer *buttonBeep;
    AVAudioPlayer *secondBeep;
    AVAudioPlayer *backgroundMusic;
}

- (IBAction)buttonPressed;
@end
