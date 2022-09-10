/*
 * Copyright (c) 2020 Bitdefender
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef CPUID_FLAGS_H
#define CPUID_FLAGS_H

#define ND_CFF_NO_LEAF    0xFFFFFFFF
#define ND_CFF_NO_SUBLEAF 0x00FFFFFF


#define ND_CFF(leaf, subleaf, reg, bit) ((ND_UINT64)(leaf) | ((ND_UINT64)((subleaf) & 0xFFFFFF) << 32) | ((ND_UINT64)(reg) << 56) | ((ND_UINT64)(bit) << 59))

#define ND_CFF_FPU                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 0)
#define ND_CFF_MSR                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 5)
#define ND_CFF_CX8                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 8)
#define ND_CFF_SEP                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 11)
#define ND_CFF_CMOV                     ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 15)
#define ND_CFF_CLFSH                    ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 19)
#define ND_CFF_MMX                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 23)
#define ND_CFF_FXSAVE                   ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 24)
#define ND_CFF_SSE                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 25)
#define ND_CFF_SSE2                     ND_CFF(0x00000001, 0xFFFFFFFF, NDR_EDX, 26)
#define ND_CFF_SSE3                     ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 0)
#define ND_CFF_PCLMULQDQ                ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 1)
#define ND_CFF_MONITOR                  ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 3)
#define ND_CFF_VTX                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 5)
#define ND_CFF_SMX                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 6)
#define ND_CFF_SSSE3                    ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 9)
#define ND_CFF_FMA                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 12)
#define ND_CFF_SSE4                     ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 19)
#define ND_CFF_SSE42                    ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 20)
#define ND_CFF_MOVBE                    ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 22)
#define ND_CFF_POPCNT                   ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 23)
#define ND_CFF_AES                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 25)
#define ND_CFF_XSAVE                    ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 26)
#define ND_CFF_AVX                      ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 28)
#define ND_CFF_F16C                     ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 29)
#define ND_CFF_RDRAND                   ND_CFF(0x00000001, 0xFFFFFFFF, NDR_ECX, 30)
#define ND_CFF_RDWRFSGS                 ND_CFF(0x00000007, 0x00000000, NDR_EBX, 0)
#define ND_CFF_SGX                      ND_CFF(0x00000007, 0x00000000, NDR_EBX, 2)
#define ND_CFF_BMI1                     ND_CFF(0x00000007, 0x00000000, NDR_EBX, 3)
#define ND_CFF_HLE                      ND_CFF(0x00000007, 0x00000000, NDR_EBX, 4)
#define ND_CFF_AVX2                     ND_CFF(0x00000007, 0x00000000, NDR_EBX, 5)
#define ND_CFF_BMI2                     ND_CFF(0x00000007, 0x00000000, NDR_EBX, 8)
#define ND_CFF_INVPCID                  ND_CFF(0x00000007, 0x00000000, NDR_EBX, 10)
#define ND_CFF_RTM                      ND_CFF(0x00000007, 0x00000000, NDR_EBX, 11)
#define ND_CFF_MPX                      ND_CFF(0x00000007, 0x00000000, NDR_EBX, 14)
#define ND_CFF_AVX512F                  ND_CFF(0x00000007, 0x00000000, NDR_EBX, 16)
#define ND_CFF_AVX512DQ                 ND_CFF(0x00000007, 0x00000000, NDR_EBX, 17)
#define ND_CFF_RDSEED                   ND_CFF(0x00000007, 0x00000000, NDR_EBX, 18)
#define ND_CFF_ADX                      ND_CFF(0x00000007, 0x00000000, NDR_EBX, 19)
#define ND_CFF_SMAP                     ND_CFF(0x00000007, 0x00000000, NDR_EBX, 20)
#define ND_CFF_AVX512IFMA               ND_CFF(0x00000007, 0x00000000, NDR_EBX, 21)
#define ND_CFF_CLFSHOPT                 ND_CFF(0x00000007, 0x00000000, NDR_EBX, 23)
#define ND_CFF_CLWB                     ND_CFF(0x00000007, 0x00000000, NDR_EBX, 24)
#define ND_CFF_AVX512PF                 ND_CFF(0x00000007, 0x00000000, NDR_EBX, 26)
#define ND_CFF_AVX512ER                 ND_CFF(0x00000007, 0x00000000, NDR_EBX, 27)
#define ND_CFF_AVX512CD                 ND_CFF(0x00000007, 0x00000000, NDR_EBX, 28)
#define ND_CFF_SHA                      ND_CFF(0x00000007, 0x00000000, NDR_EBX, 29)
#define ND_CFF_AVX512BW                 ND_CFF(0x00000007, 0x00000000, NDR_EBX, 30)
#define ND_CFF_PREFETCHWT1              ND_CFF(0x00000007, 0x00000000, NDR_ECX, 0)
#define ND_CFF_AVX512VBMI               ND_CFF(0x00000007, 0x00000000, NDR_ECX, 1)
#define ND_CFF_PKU                      ND_CFF(0x00000007, 0x00000000, NDR_ECX, 3)
#define ND_CFF_WAITPKG                  ND_CFF(0x00000007, 0x00000000, NDR_ECX, 5)
#define ND_CFF_AVX512VBMI2              ND_CFF(0x00000007, 0x00000000, NDR_ECX, 6)
#define ND_CFF_CET_SS                   ND_CFF(0x00000007, 0x00000000, NDR_ECX, 7)
#define ND_CFF_GFNI                     ND_CFF(0x00000007, 0x00000000, NDR_ECX, 8)
#define ND_CFF_VAES                     ND_CFF(0x00000007, 0x00000000, NDR_ECX, 9)
#define ND_CFF_VPCLMULQDQ               ND_CFF(0x00000007, 0x00000000, NDR_ECX, 10)
#define ND_CFF_AVX512VNNI               ND_CFF(0x00000007, 0x00000000, NDR_ECX, 11)
#define ND_CFF_AVX512BITALG             ND_CFF(0x00000007, 0x00000000, NDR_ECX, 12)
#define ND_CFF_AVX512VPOPCNTDQ          ND_CFF(0x00000007, 0x00000000, NDR_ECX, 14)
#define ND_CFF_RDPID                    ND_CFF(0x00000007, 0x00000000, NDR_ECX, 22)
#define ND_CFF_KL                       ND_CFF(0x00000007, 0x00000000, NDR_ECX, 23)
#define ND_CFF_CLDEMOTE                 ND_CFF(0x00000007, 0x00000000, NDR_ECX, 25)
#define ND_CFF_MOVDIRI                  ND_CFF(0x00000007, 0x00000000, NDR_ECX, 27)
#define ND_CFF_MOVDIR64B                ND_CFF(0x00000007, 0x00000000, NDR_ECX, 28)
#define ND_CFF_ENQCMD                   ND_CFF(0x00000007, 0x00000000, NDR_ECX, 29)
#define ND_CFF_AVX5124VNNIW             ND_CFF(0x00000007, 0x00000000, NDR_EDX, 2)
#define ND_CFF_AVX5124FMAPS             ND_CFF(0x00000007, 0x00000000, NDR_EDX, 3)
#define ND_CFF_UINTR                    ND_CFF(0x00000007, 0x00000000, NDR_EDX, 5)
#define ND_CFF_AVX512VP2INTERSECT       ND_CFF(0x00000007, 0x00000000, NDR_EDX, 8)
#define ND_CFF_SERIALIZE                ND_CFF(0x00000007, 0x00000000, NDR_EDX, 14)
#define ND_CFF_TSXLDTRK                 ND_CFF(0x00000007, 0x00000000, NDR_EDX, 16)
#define ND_CFF_PCONFIG                  ND_CFF(0x00000007, 0x00000000, NDR_EDX, 18)
#define ND_CFF_CET_IBT                  ND_CFF(0x00000007, 0x00000000, NDR_EDX, 20)
#define ND_CFF_AMXBF16                  ND_CFF(0x00000007, 0x00000000, NDR_EDX, 22)
#define ND_CFF_AVX512FP16               ND_CFF(0x00000007, 0x00000000, NDR_EDX, 23)
#define ND_CFF_AMXTILE                  ND_CFF(0x00000007, 0x00000000, NDR_EDX, 24)
#define ND_CFF_AMXINT8                  ND_CFF(0x00000007, 0x00000000, NDR_EDX, 25)
#define ND_CFF_AVXVNNI                  ND_CFF(0x00000007, 0x00000001, NDR_EAX, 4)
#define ND_CFF_AVX512BF16               ND_CFF(0x00000007, 0x00000001, NDR_EAX, 5)
#define ND_CFF_FRED                     ND_CFF(0x00000007, 0x00000001, NDR_EAX, 17)
#define ND_CFF_LKGS                     ND_CFF(0x00000007, 0x00000001, NDR_EAX, 18)
#define ND_CFF_HRESET                   ND_CFF(0x00000007, 0x00000001, NDR_EAX, 22)
#define ND_CFF_XSAVEOPT                 ND_CFF(0x0000000D, 0x00000001, NDR_EAX, 0)
#define ND_CFF_XSAVEC                   ND_CFF(0x0000000D, 0x00000001, NDR_EAX, 1)
#define ND_CFF_XSAVES                   ND_CFF(0x0000000D, 0x00000001, NDR_EAX, 3)
#define ND_CFF_PTWRITE                  ND_CFF(0x00000014, 0x00000000, NDR_EBX, 4)
#define ND_CFF_SVM                      ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 2)
#define ND_CFF_LZCNT                    ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 5)
#define ND_CFF_SSE4A                    ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 6)
#define ND_CFF_PREFETCHW                ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 8)
#define ND_CFF_FSC                      ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 11)
#define ND_CFF_XOP                      ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 11)
#define ND_CFF_LWP                      ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 15)
#define ND_CFF_FMA4                     ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 16)
#define ND_CFF_TBM                      ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 21)
#define ND_CFF_INVLPGB                  ND_CFF(0x80000001, 0xFFFFFFFF, NDR_EDX, 24)
#define ND_CFF_RDTSCP                   ND_CFF(0x80000001, 0xFFFFFFFF, NDR_ECX, 27)
#define ND_CFF_3DNOW                    ND_CFF(0x80000001, 0xFFFFFFFF, NDR_EDX, 31)
#define ND_CFF_WBNOINVD                 ND_CFF(0x80000008, 0xFFFFFFFF, NDR_EBX, 9)
#define ND_CFF_RDPRU                    ND_CFF(0x80000008, 0xFFFFFFFF, NDR_EBX, 4)
#define ND_CFF_MCOMMIT                  ND_CFF(0x80000008, 0xFFFFFFFF, NDR_EBX, 8)
#define ND_CFF_SNP                      ND_CFF(0x8000001F, 0xFFFFFFFF, NDR_EAX, 4)

#endif // CPUID_FLAGS_H
