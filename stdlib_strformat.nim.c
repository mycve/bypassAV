/* Generated by Nim Compiler v1.6.0 */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
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
typedef struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
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
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ {
NIM_CHAR fill;
NIM_CHAR align;
NIM_CHAR sign;
NIM_BOOL alternateForm;
NIM_BOOL padWithZero;
NI minimumWidth;
NI precision;
NIM_CHAR typ;
NI endPosition;
};
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
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
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
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
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
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier_pureZstrformat_58)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NI, parseSaturatedNatural_pureZparseutils_316)(NimStringDesc* s, NI* b, NI start);
N_LIB_PRIVATE N_NOINLINE(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(NimStringDesc*, X5BX5D__pureZunicode_3195)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached_system_2999)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot__stdZenumutils_80)(NI a, NI b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_system_5383)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NI, pluspercent__system_696)(NI x, NI y);
static N_INLINE(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_system_5345)(void* usr);
static N_INLINE(NI, minuspercent__system_716)(NI x, NI y);
static N_INLINE(void, decRef_system_5390)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(NIM_BOOL, ltpercent__system_1005)(NI x, NI y);
static N_INLINE(void, rtlAddZCT_system_5388)(tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_system_5339)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell__1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NI, runeOffset_pureZunicode_637)(NimStringDesc* s, NI pos, NI start);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignString_pureZstrformat_20)(NimStringDesc* s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill);
N_LIB_PRIVATE N_NIMCALL(NI, validateUtf8_pureZunicode_277)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
extern TNimType NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_16, "invalid format string, cannot parse: ", 37);
STRING_LITERAL(TM__qDXzsifTQdn8ucTam9cFp4w_22, "invalid type in format string for string, expected \'s\', but got ", 64);
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern TFrame* framePtr_system_2566;
extern tyObject_GcHeap__1TRH1TZMaVZTnLNcIHuNFQ gch_system_5292;
static N_INLINE(void, nimSetMem_systemZmemory_7)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_systemZmemory_7(p, ((int) 0), size);
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem_system_1727)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == ((NimStringDesc*) NIM_NIL)))) goto LA3_;
		copyMem_system_1727(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
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
static N_INLINE(NimStringDesc*, X5BX5D__pureZunicode_3195)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NimStringDesc* result;
	NI a;
	NI L;
	NI TM__qDXzsifTQdn8ucTam9cFp4w_17;
	NI TM__qDXzsifTQdn8ucTam9cFp4w_18;
	NI TM__qDXzsifTQdn8ucTam9cFp4w_19;
	nimfr_("[]", "E:\\Software\\nim\\lib\\system.nim");
	result = (NimStringDesc*)0;
	nimln_(2560, "E:\\Software\\nim\\lib\\system.nim");
	a = x.a;
	nimln_(2561, "E:\\Software\\nim\\lib\\system.nim");
	nimln_(2548, "E:\\Software\\nim\\lib\\system.nim");
	if (nimSubInt((s ? s->Sup.len : 0), x.b, &TM__qDXzsifTQdn8ucTam9cFp4w_17)) { raiseOverflow(); };
	if (nimSubInt((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_17), a, &TM__qDXzsifTQdn8ucTam9cFp4w_18)) { raiseOverflow(); };
	if (nimAddInt((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_18), ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_19)) { raiseOverflow(); };
	L = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_19);
	nimln_(2562, "E:\\Software\\nim\\lib\\system.nim");
	if ((L) < ((NI) 0) || (L) > ((NI) 2147483647)){ raiseRangeErrorI(L, ((NI) 0), ((NI) 2147483647)); }
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		nimln_(119, "E:\\Software\\nim\\lib\\system\\iterators_1.nim");
		i_2 = ((NI) 0);
		{
			nimln_(120, "E:\\Software\\nim\\lib\\system\\iterators_1.nim");
			while (1) {
				NI TM__qDXzsifTQdn8ucTam9cFp4w_20;
				NI TM__qDXzsifTQdn8ucTam9cFp4w_21;
				if (!(i_2 < L)) goto LA3;
				nimln_(2563, "E:\\Software\\nim\\lib\\system.nim");
				i = i_2;
				if ((NU)(i) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(i,(result ? result->Sup.len : 0)-1); }
				if (nimAddInt(i, a, &TM__qDXzsifTQdn8ucTam9cFp4w_20)) { raiseOverflow(); };
				if ((NU)((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_20)) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_20),(s ? s->Sup.len : 0)-1); }
				result->data[i] = s->data[(NI)(TM__qDXzsifTQdn8ucTam9cFp4w_20)];
				nimln_(122, "E:\\Software\\nim\\lib\\system\\iterators_1.nim");
				if (nimAddInt(i_2, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_21)) { raiseOverflow(); };
				i_2 = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_21);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot__stdZenumutils_80)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimfr_("..", "E:\\Software\\nim\\lib\\system.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimln_(512, "E:\\Software\\nim\\lib\\system.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	popFrame();
	return result;
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
N_LIB_PRIVATE N_NIMCALL(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ, parseStandardFormatSpecifier_pureZstrformat_58)(NimStringDesc* s, NI start, NIM_BOOL ignoreUnknownSuffix) {
	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ result;
	NI i;
	NI parsedLength;
	NI TM__qDXzsifTQdn8ucTam9cFp4w_12;
	nimfr_("parseStandardFormatSpecifier", "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ));
	nimln_(430, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	result.fill = 32;
	nimln_(431, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	result.align = 0;
	nimln_(432, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	result.sign = 45;
	nimln_(433, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	i = start;
	nimln_(434, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		NIM_BOOL T3_;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_2;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_3;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_4;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_5;
		T3_ = (NIM_BOOL)0;
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_2)) { raiseOverflow(); };
		T3_ = ((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_2) < (s ? s->Sup.len : 0));
		if (!(T3_)) goto LA4_;
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_3)) { raiseOverflow(); };
		if ((NU)((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_3)) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_3),(s ? s->Sup.len : 0)-1); }
		T3_ = (((NU8)(s->data[(NI)(TM__qDXzsifTQdn8ucTam9cFp4w_3)])) == ((NU8)(60)) || ((NU8)(s->data[(NI)(TM__qDXzsifTQdn8ucTam9cFp4w_3)])) == ((NU8)(62)) || ((NU8)(s->data[(NI)(TM__qDXzsifTQdn8ucTam9cFp4w_3)])) == ((NU8)(94)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(435, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		result.fill = s->data[i];
		nimln_(436, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_4)) { raiseOverflow(); };
		if ((NU)((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_4)) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_4),(s ? s->Sup.len : 0)-1); }
		result.align = s->data[(NI)(TM__qDXzsifTQdn8ucTam9cFp4w_4)];
		nimln_(437, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, ((NI) 2), &TM__qDXzsifTQdn8ucTam9cFp4w_5)) { raiseOverflow(); };
		i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_5);
	}
	goto LA1_;
	LA5_: ;
	{
		NIM_BOOL T8_;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_6;
		nimln_(438, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		T8_ = (NIM_BOOL)0;
		T8_ = (i < (s ? s->Sup.len : 0));
		if (!(T8_)) goto LA9_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		T8_ = (((NU8)(s->data[i])) == ((NU8)(60)) || ((NU8)(s->data[i])) == ((NU8)(62)) || ((NU8)(s->data[i])) == ((NU8)(94)));
		LA9_: ;
		if (!T8_) goto LA10_;
		nimln_(439, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		result.align = s->data[i];
		nimln_(440, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_6)) { raiseOverflow(); };
		i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_6);
	}
	goto LA1_;
	LA10_: ;
	LA1_: ;
	nimln_(442, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		NIM_BOOL T14_;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_7;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < (s ? s->Sup.len : 0));
		if (!(T14_)) goto LA15_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		T14_ = (((NU8)(s->data[i])) == ((NU8)(45)) || ((NU8)(s->data[i])) == ((NU8)(43)) || ((NU8)(s->data[i])) == ((NU8)(32)));
		LA15_: ;
		if (!T14_) goto LA16_;
		nimln_(443, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		result.sign = s->data[i];
		nimln_(444, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_7)) { raiseOverflow(); };
		i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_7);
	}
	LA16_: ;
	nimln_(446, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		NIM_BOOL T20_;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_8;
		T20_ = (NIM_BOOL)0;
		T20_ = (i < (s ? s->Sup.len : 0));
		if (!(T20_)) goto LA21_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		T20_ = ((NU8)(s->data[i]) == (NU8)(35));
		LA21_: ;
		if (!T20_) goto LA22_;
		nimln_(447, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		result.alternateForm = NIM_TRUE;
		nimln_(448, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_8)) { raiseOverflow(); };
		i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_8);
	}
	LA22_: ;
	nimln_(450, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		NIM_BOOL T26_;
		NIM_BOOL T27_;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_9;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_10;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_11;
		T26_ = (NIM_BOOL)0;
		T27_ = (NIM_BOOL)0;
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_9)) { raiseOverflow(); };
		T27_ = ((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_9) < (s ? s->Sup.len : 0));
		if (!(T27_)) goto LA28_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		T27_ = ((NU8)(s->data[i]) == (NU8)(48));
		LA28_: ;
		T26_ = T27_;
		if (!(T26_)) goto LA29_;
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_10)) { raiseOverflow(); };
		if ((NU)((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_10)) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_10),(s ? s->Sup.len : 0)-1); }
		T26_ = (((NU8)(s->data[(NI)(TM__qDXzsifTQdn8ucTam9cFp4w_10)])) >= ((NU8)(48)) && ((NU8)(s->data[(NI)(TM__qDXzsifTQdn8ucTam9cFp4w_10)])) <= ((NU8)(57)));
		LA29_: ;
		if (!T26_) goto LA30_;
		nimln_(451, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		result.padWithZero = NIM_TRUE;
		nimln_(452, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_11)) { raiseOverflow(); };
		i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_11);
	}
	LA30_: ;
	nimln_(454, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	parsedLength = parseSaturatedNatural_pureZparseutils_316(s, (&result.minimumWidth), i);
	nimln_(455, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	if (nimAddInt(i, parsedLength, &TM__qDXzsifTQdn8ucTam9cFp4w_12)) { raiseOverflow(); };
	i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_12);
	nimln_(456, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		NIM_BOOL T34_;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_13;
		NI parsedLengthB;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_14;
		T34_ = (NIM_BOOL)0;
		T34_ = (i < (s ? s->Sup.len : 0));
		if (!(T34_)) goto LA35_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		T34_ = ((NU8)(s->data[i]) == (NU8)(46));
		LA35_: ;
		if (!T34_) goto LA36_;
		nimln_(457, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_13)) { raiseOverflow(); };
		i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_13);
		nimln_(458, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		parsedLengthB = parseSaturatedNatural_pureZparseutils_316(s, (&result.precision), i);
		nimln_(459, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, parsedLengthB, &TM__qDXzsifTQdn8ucTam9cFp4w_14)) { raiseOverflow(); };
		i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_14);
	}
	goto LA32_;
	LA36_: ;
	{
		nimln_(461, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		result.precision = ((NI) -1);
	}
	LA32_: ;
	nimln_(463, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		NIM_BOOL T41_;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_15;
		T41_ = (NIM_BOOL)0;
		T41_ = (i < (s ? s->Sup.len : 0));
		if (!(T41_)) goto LA42_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		T41_ = (((NU8)(s->data[i])) >= ((NU8)(65)) && ((NU8)(s->data[i])) <= ((NU8)(90)) || ((NU8)(s->data[i])) >= ((NU8)(97)) && ((NU8)(s->data[i])) <= ((NU8)(122)));
		LA42_: ;
		if (!T41_) goto LA43_;
		nimln_(464, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		result.typ = s->data[i];
		nimln_(465, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimAddInt(i, ((NI) 1), &TM__qDXzsifTQdn8ucTam9cFp4w_15)) { raiseOverflow(); };
		i = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_15);
	}
	LA43_: ;
	nimln_(466, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	result.endPosition = i;
	nimln_(467, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		NIM_BOOL T47_;
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T51_;
		NimStringDesc* T52_;
		tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T53_;
		NimStringDesc* T54_;
		T47_ = (NIM_BOOL)0;
		T47_ = !((i == (s ? s->Sup.len : 0)));
		if (!(T47_)) goto LA48_;
		T47_ = !(ignoreUnknownSuffix);
		LA48_: ;
		if (!T47_) goto LA49_;
		T51_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		T51_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*T51_).Sup.Sup.Sup.m_type = (&NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_);
		(*T51_).Sup.Sup.name = "ValueError";
		nimln_(469, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		T52_ = (NimStringDesc*)0;
		T53_ = dotdot__stdZenumutils_80(i, ((NI) 1));
		T54_ = (NimStringDesc*)0;
		T54_ = X5BX5D__pureZunicode_3195(s, T53_);
		T52_ = rawNewString((T54_ ? T54_->Sup.len : 0) + 37);
appendString(T52_, ((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_16));
appendString(T52_, T54_);
		asgnRef((void**) (&(*T51_).Sup.Sup.message), T52_);
		asgnRef((void**) (&(*T51_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		nimln_(468, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		raiseExceptionEx((Exception*)T51_, "ValueError", "parseStandardFormatSpecifier", "E:\\Software\\nim\\lib\\pure\\strformat.nim", 468);
	}
	LA49_: ;
	popFrame();
	return result;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a == ((NI) (-2147483647 -1)));
		if (!(T3_)) goto LA4_;
		T3_ = (b == ((NI) -1));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA5_: ;
	{
		(*res) = (NI)(a / b);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, alignString_pureZstrformat_20)(NimStringDesc* s, NI minimumWidth, NIM_CHAR align, NIM_CHAR fill) {
	NimStringDesc* result;
	nimfr_("alignString", "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	result = (NimStringDesc*)0;
	nimln_(330, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		if (!(minimumWidth == ((NI) 0))) goto LA3_;
		nimln_(331, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		result = copyString(s);
	}
	goto LA1_;
	LA3_: ;
	{
		NI sRuneLen;
		NI toFill;
		NI TM__qDXzsifTQdn8ucTam9cFp4w_23;
		nimln_(333, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		{
			NI T8_;
			T8_ = (NI)0;
			T8_ = validateUtf8_pureZunicode_277(s);
			if (!(T8_ == ((NI) -1))) goto LA9_;
			sRuneLen = nucruneLen(s);
		}
		goto LA6_;
		LA9_: ;
		{
			sRuneLen = (s ? s->Sup.len : 0);
		}
		LA6_: ;
		nimln_(334, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		if (nimSubInt(minimumWidth, sRuneLen, &TM__qDXzsifTQdn8ucTam9cFp4w_23)) { raiseOverflow(); };
		toFill = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_23);
		nimln_(335, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		{
			if (!(toFill <= ((NI) 0))) goto LA14_;
			nimln_(336, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
			result = copyString(s);
		}
		goto LA12_;
		LA14_: ;
		{
			NIM_BOOL T17_;
			NimStringDesc* T21_;
			NimStringDesc* T22_;
			nimln_(337, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
			T17_ = (NIM_BOOL)0;
			T17_ = ((NU8)(align) == (NU8)(60));
			if (T17_) goto LA18_;
			T17_ = ((NU8)(align) == (NU8)(0));
			LA18_: ;
			if (!T17_) goto LA19_;
			nimln_(338, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
			T21_ = (NimStringDesc*)0;
			if ((toFill) < ((NI) 0) || (toFill) > ((NI) 2147483647)){ raiseRangeErrorI(toFill, ((NI) 0), ((NI) 2147483647)); }
			T22_ = (NimStringDesc*)0;
			T22_ = nsuRepeatChar(fill, ((NI) (toFill)));
			T21_ = rawNewString((s ? s->Sup.len : 0) + (T22_ ? T22_->Sup.len : 0) + 0);
appendString(T21_, s);
appendString(T21_, T22_);
			result = T21_;
		}
		goto LA12_;
		LA19_: ;
		{
			NI half;
			NI TM__qDXzsifTQdn8ucTam9cFp4w_24;
			NimStringDesc* T26_;
			NimStringDesc* T27_;
			NI TM__qDXzsifTQdn8ucTam9cFp4w_25;
			NimStringDesc* T28_;
			nimln_(339, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
			if (!((NU8)(align) == (NU8)(94))) goto LA24_;
			nimln_(340, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
			if (((NI) 2) == 0){ raiseDivByZero(); }
			if (nimDivInt(toFill, ((NI) 2), &TM__qDXzsifTQdn8ucTam9cFp4w_24)) { raiseOverflow(); };
			half = (NI)(TM__qDXzsifTQdn8ucTam9cFp4w_24);
			nimln_(341, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
			T26_ = (NimStringDesc*)0;
			if ((half) < ((NI) 0) || (half) > ((NI) 2147483647)){ raiseRangeErrorI(half, ((NI) 0), ((NI) 2147483647)); }
			T27_ = (NimStringDesc*)0;
			T27_ = nsuRepeatChar(fill, ((NI) (half)));
			if (nimSubInt(toFill, half, &TM__qDXzsifTQdn8ucTam9cFp4w_25)) { raiseOverflow(); };
			if (((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_25)) < ((NI) 0) || ((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_25)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_25), ((NI) 0), ((NI) 2147483647)); }
			T28_ = (NimStringDesc*)0;
			T28_ = nsuRepeatChar(fill, ((NI) ((NI)(TM__qDXzsifTQdn8ucTam9cFp4w_25))));
			T26_ = rawNewString((T27_ ? T27_->Sup.len : 0) + (s ? s->Sup.len : 0) + (T28_ ? T28_->Sup.len : 0) + 0);
appendString(T26_, T27_);
appendString(T26_, s);
appendString(T26_, T28_);
			result = T26_;
		}
		goto LA12_;
		LA24_: ;
		{
			NimStringDesc* T30_;
			NimStringDesc* T31_;
			nimln_(343, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
			T30_ = (NimStringDesc*)0;
			if ((toFill) < ((NI) 0) || (toFill) > ((NI) 2147483647)){ raiseRangeErrorI(toFill, ((NI) 0), ((NI) 2147483647)); }
			T31_ = (NimStringDesc*)0;
			T31_ = nsuRepeatChar(fill, ((NI) (toFill)));
			T30_ = rawNewString((T31_ ? T31_->Sup.len : 0) + (s ? s->Sup.len : 0) + 0);
appendString(T30_, T31_);
appendString(T30_, s);
			result = T30_;
		}
		LA12_: ;
	}
	LA1_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, formatValue_pureZstrformat_162)(NimStringDesc** result, NimStringDesc* value, NimStringDesc* specifier) {
	tyObject_StandardFormatSpecifier__NDU7AW5Eu6Q69c8cH6RDouQ spec;
	NimStringDesc* value_2;
	NimStringDesc* T15_;
	nimfr_("formatValue", "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	nimln_(553, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	spec = parseStandardFormatSpecifier_pureZstrformat_58(specifier, ((NI) 0), NIM_FALSE);
	nimln_(554, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	value_2 = copyString(value);
	nimln_(555, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	switch (((NU8)(spec.typ))) {
	case 115:
	case 0:
	{
	}
	break;
	default:
	{
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T3_;
		NimStringDesc* T4_;
		T3_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		T3_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTIrefvalueerror__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*T3_).Sup.Sup.Sup.m_type = (&NTIvalueerror__yoNlBGx0D2tRizIdhQuENw_);
		(*T3_).Sup.Sup.name = "ValueError";
		nimln_(559, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		T4_ = (NimStringDesc*)0;
		T4_ = rawNewString(65);
appendString(T4_, ((NimStringDesc*) &TM__qDXzsifTQdn8ucTam9cFp4w_22));
appendChar(T4_, spec.typ);
		asgnRef((void**) (&(*T3_).Sup.Sup.message), T4_);
		asgnRef((void**) (&(*T3_).Sup.Sup.parent), ((Exception*) NIM_NIL));
		nimln_(558, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		raiseExceptionEx((Exception*)T3_, "ValueError", "formatValue", "E:\\Software\\nim\\lib\\pure\\strformat.nim", 558);
	}
	break;
	}
	nimln_(561, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	{
		if (!!((spec.precision == ((NI) -1)))) goto LA7_;
		nimln_(562, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
		{
			NI T11_;
			NI T14_;
			T11_ = (NI)0;
			T11_ = nucruneLen(value_2);
			if (!(spec.precision < T11_)) goto LA12_;
			nimln_(563, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
			if ((spec.precision) < ((NI) 0) || (spec.precision) > ((NI) 2147483647)){ raiseRangeErrorI(spec.precision, ((NI) 0), ((NI) 2147483647)); }
			T14_ = (NI)0;
			T14_ = runeOffset_pureZunicode_637(value_2, ((NI) (spec.precision)), ((NI) 0));
			if ((T14_) < ((NI) 0) || (T14_) > ((NI) 2147483647)){ raiseRangeErrorI(T14_, ((NI) 0), ((NI) 2147483647)); }
			value_2 = setLengthStr(value_2, ((NI) (T14_)));
		}
		LA12_: ;
	}
	LA7_: ;
	nimln_(564, "E:\\Software\\nim\\lib\\pure\\strformat.nim");
	T15_ = (NimStringDesc*)0;
	T15_ = alignString_pureZstrformat_20(value_2, spec.minimumWidth, spec.align, spec.fill);
	unsureAsgnRef((void**) (&(*result)), resizeString((*result), (T15_ ? T15_->Sup.len : 0) + 0));
appendString((*result), T15_);
	popFrame();
}
