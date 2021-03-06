//
//  Answer.h
//  BloQuery
//
//  Created by MELANIE MCGANNEY on 7/26/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Answer : NSObject
@property (nonatomic, assign) NSInteger answerNumber;
@property (nonatomic, strong) NSString *answerText;
@property (nonatomic, strong) NSString *temporaryAnswer;
@property (nonatomic, assign) NSInteger upvotes;
@end
