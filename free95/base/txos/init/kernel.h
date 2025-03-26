#ifndef KERNEL_H
#define KERNEL_H

#define PORT 0x3f8          // COM1 serial port
#define VGA_WIDTH 80
#define VGA_HEIGHT 20

#define FREE95_MAX_PATH 108

#define LOG_SUCCESS 1
#define LOG_FAIL 0
#define LOG_ERROR 2
#define LOG_WARN 3
#define LOG_INFO 4

void kernel_main();
void terminal_initialize();
void print(const char* str);
void DbgPrint(const char *format, ...);
void DbgLog(const char *msg, int type);

#define ERROR(value) (void*)(value)
#define ERROR_I(value) (int)(value)
#define ISERR(value) ((int)value < 0)

#endif
