//
//  DoubanDefines.h
//  douban-objective-c
//
//  Created by py on 3/18/10.
//  Copyright 2010 Apple Inc. All rights reserved.
//

#undef _EXTERN
#undef _INITIALIZE_AS
#ifdef DOUBAN_DEFINE_GLOBALS
#define _EXTERN
#define _INITIALIZE_AS(x) =x
#else
#define _EXTERN extern
#define _INITIALIZE_AS(x)
#endif

_EXTERN NSString* const kDoubanCategoryBook  _INITIALIZE_AS(@"http://www.douban.com/2007#book");
_EXTERN NSString* const kDoubanCategoryMovie  _INITIALIZE_AS(@"http://www.douban.com/2007#movie");
_EXTERN NSString* const kDoubanCategoryMusic  _INITIALIZE_AS(@"http://www.douban.com/2007#music");

_EXTERN NSString* const kDoubanCategoryReview  _INITIALIZE_AS(@"http://www.douban.com/2007#review");
_EXTERN NSString* const kDoubanCategoryEvent  _INITIALIZE_AS(@"http://www.douban.com/2007#event");
_EXTERN NSString* const kDoubanCategoryPeople  _INITIALIZE_AS(@"http://www.douban.com/2007#people");
_EXTERN NSString* const kDoubanCategoryPhoto  _INITIALIZE_AS(@"http://www.douban.com/2007#photo");

_EXTERN NSString* const kDoubanNamespace _INITIALIZE_AS(@"http://www.douban.com/xmlns/");
_EXTERN NSString* const kDoubanNamespacePrefix _INITIALIZE_AS(@"db");




