#import <Foundation/Foundation.h>

int main(int argc, char *argv[])
{
	int i;
	for(i=argc-1;i>0;i--)
		NSLog(@"%s ",argv[i]);
	return 0;
}
