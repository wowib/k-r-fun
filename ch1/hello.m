// First program example

#import <Foundation/Foundation.h>

static void NSPrint(NSString *format, ...)
 {
    va_list args;
    
    va_start(args, format);
    NSString *string  = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    
    fprintf(stdout, "%s\n", [string UTF8String]);
    
#if !__has_feature(objc_arc)
    [string release];
#endif
}

int main (int argc, const char * argv[])
{
   @autoreleasepool {
      NSPrint (@"this is Objective-C: hello, world!");
   }
   return 0;
}