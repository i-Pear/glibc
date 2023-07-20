#include <dl-vdso.h>

void *__kernel_vsyscall0 = 0;
void *__kernel_vsyscall1 = 0;
void *__kernel_vsyscall2 = 0;
void *__kernel_vsyscall3 = 0;
void *__kernel_vsyscall4 = 0;
void *__kernel_vsyscall5 = 0;
void *__kernel_vsyscall6 = 0;

void uk_init_vsyscall(void) __attribute__((constructor));

void uk_init_vsyscall(void) {
	__kernel_vsyscall0 = dl_vdso_vsym("__kernel_vsyscall0");
	__kernel_vsyscall1 = dl_vdso_vsym("__kernel_vsyscall1");
	__kernel_vsyscall2 = dl_vdso_vsym("__kernel_vsyscall2");
	__kernel_vsyscall3 = dl_vdso_vsym("__kernel_vsyscall3");
	__kernel_vsyscall4 = dl_vdso_vsym("__kernel_vsyscall4");
	__kernel_vsyscall5 = dl_vdso_vsym("__kernel_vsyscall5");
	__kernel_vsyscall6 = dl_vdso_vsym("__kernel_vsyscall6");
}
