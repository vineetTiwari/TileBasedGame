//
//  ErrorCrawl
//
//  Created by Vineet Tiwari on 2015-06-21.
//  Copyright (c) 2015 vinny.co. All rights reserved.
//

#import "GameObject.h"
#import "SKTUtils.h"

typedef NS_ENUM(NSInteger, CharacterState) {
  kStateJumping,
  kStateDoubleJumping,
  kStateWalking,
  kStateStanding,
  kStateDying,
  kStateFalling,
  kStateDead,
  kStateWallSliding,
  kStateAttacking,
  kStateSeeking,
  kStateHiding
};

@interface Character : GameObject

@property (nonatomic, assign) CGPoint velocity;
@property (nonatomic, assign) CGPoint desiredPosition;
@property (nonatomic, assign) BOOL onGround;
@property (nonatomic, assign) CharacterState characterState;
@property (nonatomic, assign) BOOL onWall;

- (void)update:(NSTimeInterval)dt;
- (CGRect)collisionBoundingBox;
- (void)changeState:(CharacterState)newState;

@end













