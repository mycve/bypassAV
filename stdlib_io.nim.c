/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack__7fytPA5bBsob6See21YMRA tyObject_GcStack__7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyTuple__ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI32, tyProc__YrlAFY4fseJeExebH9aRGbw) (unsigned int codepage);
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack__7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk__tXn60W2f8h3jgAYdEmy5NQ* tyArray__SPr7N6UKfuF549bNPiUvSRw[256];
typedef NU32 tyArray__BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* tyArray__N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray__N1u1nqOgmuJN9cSZrnMHgOQ tyArray__B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk__W0r8S0Y3UGke6T9bIUWnnuw* tyArray__lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA {
tyArray__lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* tyArray__0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw {
tyArray__0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple__ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk__Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple__ujsjpB2O9cjj3uDHsXbnSzg tyArray__LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray__LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray__SPr7N6UKfuF549bNPiUvSRw freeSmallChunks;
NU32 flBitmap;
tyArray__BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray__B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk__XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet__EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode__IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks__PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc__fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack__7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion__x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat__0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet__jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, writeWindows_systemZio_205)(FILE* f, NimStringDesc* s, NIM_BOOL doRaise);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO_systemZio_96)(NimStringDesc* msg) __attribute__((noreturn));
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(void, decRef_system_5390)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_system_2999)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5388)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5339)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5345)(void* usr);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5383)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_4, "kernel32", 8);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_5, "kernel32", 8);
extern TNimType NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_10, "cannot write string to file", 27);
extern TNimType NTIstring__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_;
static void* TM__MnCJ0VAmeZ9aTATUB39cx60Q_2;
tyProc__YrlAFY4fseJeExebH9aRGbw Dl_26214957_;
tyProc__YrlAFY4fseJeExebH9aRGbw Dl_26214959_;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5292;
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == ((NimStringDesc*) NIM_NIL));
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr_system_2566 == ((TFrame*) NIM_NIL))) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr_system_2566).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr_system_2566;
	framePtr_system_2566 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached_system_2999();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr_system_2566 = (*framePtr_system_2566).prev;
}
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y) {
	NI result;
	nimfr_("-%", "E:\\Software\\nim\\lib\\system\\arithmetics.nim");
	result = (NI)0;
	nimln_(414, "E:\\Software\\nim\\lib\\system\\arithmetics.nim");
	nimln_(418, "E:\\Software\\nim\\lib\\system\\arithmetics.nim");
	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y) {
	NIM_BOOL result;
	nimfr_("<%", "E:\\Software\\nim\\lib\\system\\comparisons.nim");
	result = (NIM_BOOL)0;
	nimln_(186, "E:\\Software\\nim\\lib\\system\\comparisons.nim");
	nimln_(188, "E:\\Software\\nim\\lib\\system\\comparisons.nim");
	result = ((NU32)(((NU) (x))) < (NU32)(((NU) (y))));
	popFrame();
	return result;
}
static N_INLINE(void, rtlAddZCT_system_5388)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "E:\\Software\\nim\\lib\\system\\gc.nim");
	nimln_(243, "E:\\Software\\nim\\lib\\system\\gc.nim");
	addZCT_system_5339((&gch_system_5292.zct), c);
	popFrame();
}
static N_INLINE(void, decRef_system_5390)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "E:\\Software\\nim\\lib\\system\\gc.nim");
	nimln_(248, "E:\\Software\\nim\\lib\\system\\gc.nim");
	(*c).refcount = minuspercent__system_716((*c).refcount, ((NI) 8));
	nimln_(249, "E:\\Software\\nim\\lib\\system\\gc.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ltpercent__system_1005((*c).refcount, ((NI) 8));
		if (!T3_) goto LA4_;
		nimln_(250, "E:\\Software\\nim\\lib\\system\\gc.nim");
		rtlAddZCT_system_5388(c);
	}
	LA4_: ;
	popFrame();
}
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5345)(void* usr) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* result;
	NI T1_;
	nimfr_("usrToCell", "E:\\Software\\nim\\lib\\system\\gc.nim");
	result = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(177, "E:\\Software\\nim\\lib\\system\\gc.nim");
	T1_ = (NI)0;
	T1_ = minuspercent__system_716(((NI) (ptrdiff_t) (usr)), ((NI) 8));
	result = ((tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*) (T1_));
	popFrame();
	return result;
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T1_;
	nimfr_("nimGCunrefNoCycle", "E:\\Software\\nim\\lib\\system\\gc.nim");
	nimln_(276, "E:\\Software\\nim\\lib\\system\\gc.nim");
	T1_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
	T1_ = usrToCell_system_5345(p);
	decRef_system_5390(T1_);
	popFrame();
}
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y) {
	NI result;
	nimfr_("+%", "E:\\Software\\nim\\lib\\system\\arithmetics.nim");
	result = (NI)0;
	nimln_(403, "E:\\Software\\nim\\lib\\system\\arithmetics.nim");
	nimln_(407, "E:\\Software\\nim\\lib\\system\\arithmetics.nim");
	result = ((NI) ((NU)((NU32)(((NU) (x))) + (NU32)(((NU) (y))))));
	popFrame();
	return result;
}
static N_INLINE(void, incRef_system_5383)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "E:\\Software\\nim\\lib\\system\\gc.nim");
	nimln_(231, "E:\\Software\\nim\\lib\\system\\gc.nim");
	(*c).refcount = pluspercent__system_696((*c).refcount, ((NI) 8));
	popFrame();
}
static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "E:\\Software\\nim\\lib\\system\\gc.nim");
	nimln_(286, "E:\\Software\\nim\\lib\\system\\gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_system_5345(src);
		incRef_system_5383(T5_);
	}
	LA3_: ;
	nimln_(287, "E:\\Software\\nim\\lib\\system\\gc.nim");
	{
		tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_system_5345((*dest));
		decRef_system_5390(T10_);
	}
	LA8_: ;
	nimln_(288, "E:\\Software\\nim\\lib\\system\\gc.nim");
	(*dest) = src;
	popFrame();
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO_systemZio_96)(NimStringDesc* msg) {
	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T1_;
	NimStringDesc* T2_;
	nimfr_("raiseEIO", "E:\\Software\\nim\\lib\\system\\io.nim");
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTIrefioerror__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIioerror__iLZrPn9anoh9ad1MmO0RczFw_);
	(*T1_).Sup.Sup.name = "IOError";
	T2_ = (NimStringDesc*)0;
	T2_ = (*T1_).Sup.Sup.message; (*T1_).Sup.Sup.message = copyStringRC1(msg);
	if (T2_) nimGCunrefNoCycle(T2_);
	asgnRef((void**) (&(*T1_).Sup.Sup.parent), ((Exception*) NIM_NIL));
	nimln_(139, "E:\\Software\\nim\\lib\\system\\io.nim");
	raiseExceptionEx((Exception*)T1_, "IOError", "raiseEIO", "E:\\Software\\nim\\lib\\system\\io.nim", 139);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, writeWindows_systemZio_205)(FILE* f, NimStringDesc* s, NIM_BOOL doRaise) {
	int i;
	i = fprintf(f, "%s", nimToCStringConv(s));
	{
		while (1) {
			if (!(((NI) (i)) < (s ? s->Sup.len : 0))) goto LA2;
			{
				int w;
				int TM__MnCJ0VAmeZ9aTATUB39cx60Q_11;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA5_;
				w = fputc(0, f);
				{
					if (!!((w == ((NI32) 0)))) goto LA9_;
					{
						if (!doRaise) goto LA13_;
						raiseEIO_systemZio_96(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_10));
					}
					LA13_: ;
					goto LA1;
				}
				LA9_: ;
				if (nimAddInt(i, ((NI) 1), &TM__MnCJ0VAmeZ9aTATUB39cx60Q_11)) { raiseOverflow(); };
				i = (int)(TM__MnCJ0VAmeZ9aTATUB39cx60Q_11);
			}
			goto LA3_;
			LA5_: ;
			{
				int w_2;
				int TM__MnCJ0VAmeZ9aTATUB39cx60Q_12;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				w_2 = fprintf(f, "%s", (&s->data[i]));
				{
					if (!(w_2 <= ((NI32) 0))) goto LA18_;
					{
						if (!doRaise) goto LA22_;
						raiseEIO_systemZio_96(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_10));
					}
					LA22_: ;
					goto LA1;
				}
				LA18_: ;
				if (nimAddInt(i, ((NI) (w_2)), &TM__MnCJ0VAmeZ9aTATUB39cx60Q_12)) { raiseOverflow(); };
				i = (int)(TM__MnCJ0VAmeZ9aTATUB39cx60Q_12);
			}
			LA3_: ;
		} LA2: ;
	} LA1: ;
}
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0) {
	int T4_;
	int T5_;
	nimfr_("echoBinSafe", "E:\\Software\\nim\\lib\\system\\io.nim");
	{
		NimStringDesc** s;
		NI i;
		s = (NimStringDesc**)0;
		nimln_(8, "E:\\Software\\nim\\lib\\system\\iterators.nim");
		i = ((NI) 0);
		{
			nimln_(9, "E:\\Software\\nim\\lib\\system\\iterators.nim");
			while (1) {
				NI TM__MnCJ0VAmeZ9aTATUB39cx60Q_13;
				if (!(i < argsLen_0)) goto LA3;
				nimln_(801, "E:\\Software\\nim\\lib\\system\\io.nim");
				if ((NU)(i) >= (NU)(argsLen_0)){ raiseIndexError2(i,argsLen_0-1); }
				s = (&args[i]);
				writeWindows_systemZio_205(stdout, (*s), NIM_FALSE);
				nimln_(11, "E:\\Software\\nim\\lib\\system\\iterators.nim");
				if (nimAddInt(i, ((NI) 1), &TM__MnCJ0VAmeZ9aTATUB39cx60Q_13)) { raiseOverflow(); };
				i = (NI)(TM__MnCJ0VAmeZ9aTATUB39cx60Q_13);
			} LA3: ;
		}
	}
	nimln_(807, "E:\\Software\\nim\\lib\\system\\io.nim");
	T4_ = (int)0;
	T4_ = fwrite(((void*) ("\012")), ((size_t) 1), ((size_t) 1), stdout);
	(void)(T4_);
	nimln_(808, "E:\\Software\\nim\\lib\\system\\io.nim");
	T5_ = (int)0;
	T5_ = fflush(stdout);
	(void)(T5_);
	popFrame();
}
static N_NIMCALL(void, Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p, NI op) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* a;
	NI T1_;
	a = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*, newSeq_systemZio_590)(NI len) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ* result;
	nimfr_("newSeq", "E:\\Software\\nim\\lib\\system.nim");
	result = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)0;
	nimln_(680, "E:\\Software\\nim\\lib\\system.nim");
	result = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) newSeq((&NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_), len);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioInit000)(void) {
{
	int T1_;
	int T2_;
	int T3_;
	NI32 T4_;
	NI32 T5_;
	nimfr_("io", "E:\\Software\\nim\\lib\\system\\io.nim");
	nimln_(825, "E:\\Software\\nim\\lib\\system\\io.nim");
	T1_ = (int)0;
	T1_ = _fileno(stdin);
	_setmode(T1_, _O_BINARY);
	nimln_(826, "E:\\Software\\nim\\lib\\system\\io.nim");
	T2_ = (int)0;
	T2_ = _fileno(stdout);
	_setmode(T2_, _O_BINARY);
	nimln_(827, "E:\\Software\\nim\\lib\\system\\io.nim");
	T3_ = (int)0;
	T3_ = _fileno(stderr);
	_setmode(T3_, _O_BINARY);
	nimln_(837, "E:\\Software\\nim\\lib\\system\\io.nim");
	T4_ = (NI32)0;
	T4_ = Dl_26214957_(((unsigned int) 65001));
	(void)(T4_);
	nimln_(838, "E:\\Software\\nim\\lib\\system\\io.nim");
	T5_ = (NI32)0;
	T5_ = Dl_26214959_(((unsigned int) 65001));
	(void)(T5_);
	popFrame();
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioDatInit000)(void) {
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.size = sizeof(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.align = NIM_ALIGNOF(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.kind = 24;
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.base = (&NTIstring__77mFvmsOLKik79ci2hXkHEg_);
NTIseqLstringT__sM4lkSb7zS6F7OVMvW9cffQ_.marker = Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
if (!((TM__MnCJ0VAmeZ9aTATUB39cx60Q_2 = nimLoadLibrary(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_4)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_5));
	Dl_26214957_ = (tyProc__YrlAFY4fseJeExebH9aRGbw) nimGetProcAddr(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "SetConsoleOutputCP");
	Dl_26214959_ = (tyProc__YrlAFY4fseJeExebH9aRGbw) nimGetProcAddr(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "SetConsoleCP");
}

