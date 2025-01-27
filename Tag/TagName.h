//
//  TagName.h
//  Tag
//
//  Created by James Berry on 11/1/13.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2013-2019 James Berry
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>

// Items of this class are compared for equality in a case-insensitive fashion,
// but retain their original case in visibleName. TagName objects are used
// in forming sets of tags.

@interface TagName : NSObject<NSCopying>

- (instancetype)initWithTag:(NSString *)tag;

@property (readonly) NSString *visibleName;
@property (readonly) NSString *comparableName;

- (BOOL)isEqualToTagName:(TagName *)tagName;

@end
