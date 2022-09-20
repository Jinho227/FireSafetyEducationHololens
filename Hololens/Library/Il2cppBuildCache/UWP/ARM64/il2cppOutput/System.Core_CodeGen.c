#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000019 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000020 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000028 TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x00000029 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000070 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000072 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000073 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000074 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000075 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000076 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000077 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000079 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007A TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000083 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000085 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000086 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x00000089 System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008A System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008C TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x0000008E System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x0000008F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000090 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000092 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000093 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000094 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000095 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x00000096 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000097 System.Void System.Linq.Set`1::Resize()
// 0x00000098 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000099 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000009A System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009B System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000A0 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A1 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A2 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A3 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A4 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A5 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A6 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A7 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A8 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A9 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000AA System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AB System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AC System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AD System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AE System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AF TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000B0 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B1 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000B2 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000B3 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000B4 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000B5 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000B6 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000B7 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000B8 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000B9 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000BA System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000BB System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000BC System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000BF System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000C0 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000C2 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000C3 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000C4 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000C5 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000C6 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000C7 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000CB T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000CC System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000CD System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[205] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[205] = 
{
	6397,
	6397,
	6620,
	6620,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6299,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[68] = 
{
	{ 0x02000004, { 104, 4 } },
	{ 0x02000005, { 108, 9 } },
	{ 0x02000006, { 119, 7 } },
	{ 0x02000007, { 128, 10 } },
	{ 0x02000008, { 140, 11 } },
	{ 0x02000009, { 154, 9 } },
	{ 0x0200000A, { 166, 12 } },
	{ 0x0200000B, { 181, 1 } },
	{ 0x0200000C, { 182, 2 } },
	{ 0x0200000D, { 184, 12 } },
	{ 0x0200000E, { 196, 8 } },
	{ 0x0200000F, { 204, 11 } },
	{ 0x02000010, { 215, 12 } },
	{ 0x02000011, { 227, 12 } },
	{ 0x02000012, { 239, 6 } },
	{ 0x02000013, { 245, 2 } },
	{ 0x02000015, { 247, 8 } },
	{ 0x02000017, { 255, 3 } },
	{ 0x02000018, { 260, 5 } },
	{ 0x02000019, { 265, 7 } },
	{ 0x0200001A, { 272, 3 } },
	{ 0x0200001B, { 275, 7 } },
	{ 0x0200001C, { 282, 4 } },
	{ 0x0200001D, { 286, 23 } },
	{ 0x0200001F, { 309, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 1 } },
	{ 0x06000019, { 56, 7 } },
	{ 0x0600001A, { 63, 1 } },
	{ 0x0600001B, { 64, 2 } },
	{ 0x0600001C, { 66, 4 } },
	{ 0x0600001D, { 70, 4 } },
	{ 0x0600001E, { 74, 4 } },
	{ 0x0600001F, { 78, 3 } },
	{ 0x06000020, { 81, 3 } },
	{ 0x06000021, { 84, 1 } },
	{ 0x06000022, { 85, 1 } },
	{ 0x06000023, { 86, 3 } },
	{ 0x06000024, { 89, 3 } },
	{ 0x06000025, { 92, 2 } },
	{ 0x06000026, { 94, 2 } },
	{ 0x06000027, { 96, 5 } },
	{ 0x06000028, { 101, 3 } },
	{ 0x06000039, { 117, 2 } },
	{ 0x0600003E, { 126, 2 } },
	{ 0x06000043, { 138, 2 } },
	{ 0x06000049, { 151, 3 } },
	{ 0x0600004E, { 163, 3 } },
	{ 0x06000053, { 178, 3 } },
	{ 0x0600009C, { 258, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[311] = 
{
	{ (Il2CppRGCTXDataType)2, 6705 },
	{ (Il2CppRGCTXDataType)3, 25337 },
	{ (Il2CppRGCTXDataType)2, 10566 },
	{ (Il2CppRGCTXDataType)2, 9859 },
	{ (Il2CppRGCTXDataType)3, 43607 },
	{ (Il2CppRGCTXDataType)2, 7370 },
	{ (Il2CppRGCTXDataType)2, 9889 },
	{ (Il2CppRGCTXDataType)3, 43651 },
	{ (Il2CppRGCTXDataType)2, 9872 },
	{ (Il2CppRGCTXDataType)3, 43623 },
	{ (Il2CppRGCTXDataType)2, 6706 },
	{ (Il2CppRGCTXDataType)3, 25338 },
	{ (Il2CppRGCTXDataType)2, 10597 },
	{ (Il2CppRGCTXDataType)2, 9902 },
	{ (Il2CppRGCTXDataType)3, 43667 },
	{ (Il2CppRGCTXDataType)2, 7397 },
	{ (Il2CppRGCTXDataType)2, 9928 },
	{ (Il2CppRGCTXDataType)3, 43809 },
	{ (Il2CppRGCTXDataType)2, 9915 },
	{ (Il2CppRGCTXDataType)3, 43732 },
	{ (Il2CppRGCTXDataType)2, 1174 },
	{ (Il2CppRGCTXDataType)3, 166 },
	{ (Il2CppRGCTXDataType)3, 167 },
	{ (Il2CppRGCTXDataType)2, 3781 },
	{ (Il2CppRGCTXDataType)3, 15775 },
	{ (Il2CppRGCTXDataType)2, 1175 },
	{ (Il2CppRGCTXDataType)3, 176 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)2, 3800 },
	{ (Il2CppRGCTXDataType)3, 15784 },
	{ (Il2CppRGCTXDataType)3, 48761 },
	{ (Il2CppRGCTXDataType)2, 1215 },
	{ (Il2CppRGCTXDataType)3, 353 },
	{ (Il2CppRGCTXDataType)3, 48767 },
	{ (Il2CppRGCTXDataType)2, 1223 },
	{ (Il2CppRGCTXDataType)3, 389 },
	{ (Il2CppRGCTXDataType)2, 8040 },
	{ (Il2CppRGCTXDataType)3, 34427 },
	{ (Il2CppRGCTXDataType)2, 8041 },
	{ (Il2CppRGCTXDataType)3, 34428 },
	{ (Il2CppRGCTXDataType)3, 20749 },
	{ (Il2CppRGCTXDataType)3, 48698 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)3, 219 },
	{ (Il2CppRGCTXDataType)3, 48810 },
	{ (Il2CppRGCTXDataType)2, 1226 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)3, 48716 },
	{ (Il2CppRGCTXDataType)2, 1204 },
	{ (Il2CppRGCTXDataType)3, 311 },
	{ (Il2CppRGCTXDataType)2, 1545 },
	{ (Il2CppRGCTXDataType)3, 2966 },
	{ (Il2CppRGCTXDataType)3, 2967 },
	{ (Il2CppRGCTXDataType)2, 7371 },
	{ (Il2CppRGCTXDataType)3, 27410 },
	{ (Il2CppRGCTXDataType)3, 48795 },
	{ (Il2CppRGCTXDataType)2, 2362 },
	{ (Il2CppRGCTXDataType)3, 7063 },
	{ (Il2CppRGCTXDataType)2, 4353 },
	{ (Il2CppRGCTXDataType)2, 4659 },
	{ (Il2CppRGCTXDataType)3, 15782 },
	{ (Il2CppRGCTXDataType)3, 15783 },
	{ (Il2CppRGCTXDataType)3, 7064 },
	{ (Il2CppRGCTXDataType)3, 48725 },
	{ (Il2CppRGCTXDataType)2, 1207 },
	{ (Il2CppRGCTXDataType)3, 325 },
	{ (Il2CppRGCTXDataType)2, 5774 },
	{ (Il2CppRGCTXDataType)2, 4078 },
	{ (Il2CppRGCTXDataType)2, 4321 },
	{ (Il2CppRGCTXDataType)2, 4649 },
	{ (Il2CppRGCTXDataType)2, 5775 },
	{ (Il2CppRGCTXDataType)2, 4079 },
	{ (Il2CppRGCTXDataType)2, 4322 },
	{ (Il2CppRGCTXDataType)2, 4650 },
	{ (Il2CppRGCTXDataType)2, 5776 },
	{ (Il2CppRGCTXDataType)2, 4080 },
	{ (Il2CppRGCTXDataType)2, 4323 },
	{ (Il2CppRGCTXDataType)2, 4651 },
	{ (Il2CppRGCTXDataType)2, 4324 },
	{ (Il2CppRGCTXDataType)2, 4652 },
	{ (Il2CppRGCTXDataType)3, 15776 },
	{ (Il2CppRGCTXDataType)2, 5773 },
	{ (Il2CppRGCTXDataType)2, 4320 },
	{ (Il2CppRGCTXDataType)2, 4648 },
	{ (Il2CppRGCTXDataType)2, 2642 },
	{ (Il2CppRGCTXDataType)2, 4302 },
	{ (Il2CppRGCTXDataType)2, 4303 },
	{ (Il2CppRGCTXDataType)2, 4646 },
	{ (Il2CppRGCTXDataType)3, 15774 },
	{ (Il2CppRGCTXDataType)2, 4301 },
	{ (Il2CppRGCTXDataType)2, 4645 },
	{ (Il2CppRGCTXDataType)3, 15773 },
	{ (Il2CppRGCTXDataType)2, 4077 },
	{ (Il2CppRGCTXDataType)2, 4319 },
	{ (Il2CppRGCTXDataType)2, 4076 },
	{ (Il2CppRGCTXDataType)3, 48676 },
	{ (Il2CppRGCTXDataType)3, 14600 },
	{ (Il2CppRGCTXDataType)2, 3587 },
	{ (Il2CppRGCTXDataType)2, 4305 },
	{ (Il2CppRGCTXDataType)2, 4647 },
	{ (Il2CppRGCTXDataType)2, 4893 },
	{ (Il2CppRGCTXDataType)2, 4350 },
	{ (Il2CppRGCTXDataType)2, 4658 },
	{ (Il2CppRGCTXDataType)3, 16008 },
	{ (Il2CppRGCTXDataType)3, 25339 },
	{ (Il2CppRGCTXDataType)3, 25341 },
	{ (Il2CppRGCTXDataType)2, 856 },
	{ (Il2CppRGCTXDataType)3, 25340 },
	{ (Il2CppRGCTXDataType)3, 25349 },
	{ (Il2CppRGCTXDataType)2, 6709 },
	{ (Il2CppRGCTXDataType)2, 9873 },
	{ (Il2CppRGCTXDataType)3, 43624 },
	{ (Il2CppRGCTXDataType)3, 25350 },
	{ (Il2CppRGCTXDataType)2, 4414 },
	{ (Il2CppRGCTXDataType)2, 4706 },
	{ (Il2CppRGCTXDataType)3, 15792 },
	{ (Il2CppRGCTXDataType)3, 48641 },
	{ (Il2CppRGCTXDataType)2, 9916 },
	{ (Il2CppRGCTXDataType)3, 43733 },
	{ (Il2CppRGCTXDataType)3, 25342 },
	{ (Il2CppRGCTXDataType)2, 6708 },
	{ (Il2CppRGCTXDataType)2, 9860 },
	{ (Il2CppRGCTXDataType)3, 43608 },
	{ (Il2CppRGCTXDataType)3, 15791 },
	{ (Il2CppRGCTXDataType)3, 25343 },
	{ (Il2CppRGCTXDataType)3, 48640 },
	{ (Il2CppRGCTXDataType)2, 9903 },
	{ (Il2CppRGCTXDataType)3, 43668 },
	{ (Il2CppRGCTXDataType)3, 25356 },
	{ (Il2CppRGCTXDataType)2, 6710 },
	{ (Il2CppRGCTXDataType)2, 9890 },
	{ (Il2CppRGCTXDataType)3, 43652 },
	{ (Il2CppRGCTXDataType)3, 27473 },
	{ (Il2CppRGCTXDataType)3, 12670 },
	{ (Il2CppRGCTXDataType)3, 15793 },
	{ (Il2CppRGCTXDataType)3, 12669 },
	{ (Il2CppRGCTXDataType)3, 25357 },
	{ (Il2CppRGCTXDataType)3, 48642 },
	{ (Il2CppRGCTXDataType)2, 9929 },
	{ (Il2CppRGCTXDataType)3, 43810 },
	{ (Il2CppRGCTXDataType)3, 25370 },
	{ (Il2CppRGCTXDataType)2, 6712 },
	{ (Il2CppRGCTXDataType)2, 9918 },
	{ (Il2CppRGCTXDataType)3, 43735 },
	{ (Il2CppRGCTXDataType)3, 25371 },
	{ (Il2CppRGCTXDataType)2, 4417 },
	{ (Il2CppRGCTXDataType)2, 4709 },
	{ (Il2CppRGCTXDataType)3, 15797 },
	{ (Il2CppRGCTXDataType)3, 15796 },
	{ (Il2CppRGCTXDataType)2, 9875 },
	{ (Il2CppRGCTXDataType)3, 43626 },
	{ (Il2CppRGCTXDataType)3, 48648 },
	{ (Il2CppRGCTXDataType)2, 9917 },
	{ (Il2CppRGCTXDataType)3, 43734 },
	{ (Il2CppRGCTXDataType)3, 25363 },
	{ (Il2CppRGCTXDataType)2, 6711 },
	{ (Il2CppRGCTXDataType)2, 9905 },
	{ (Il2CppRGCTXDataType)3, 43670 },
	{ (Il2CppRGCTXDataType)3, 15795 },
	{ (Il2CppRGCTXDataType)3, 15794 },
	{ (Il2CppRGCTXDataType)3, 25364 },
	{ (Il2CppRGCTXDataType)2, 9874 },
	{ (Il2CppRGCTXDataType)3, 43625 },
	{ (Il2CppRGCTXDataType)3, 48647 },
	{ (Il2CppRGCTXDataType)2, 9904 },
	{ (Il2CppRGCTXDataType)3, 43669 },
	{ (Il2CppRGCTXDataType)3, 25377 },
	{ (Il2CppRGCTXDataType)2, 6713 },
	{ (Il2CppRGCTXDataType)2, 9931 },
	{ (Il2CppRGCTXDataType)3, 43812 },
	{ (Il2CppRGCTXDataType)3, 27474 },
	{ (Il2CppRGCTXDataType)3, 12672 },
	{ (Il2CppRGCTXDataType)3, 15799 },
	{ (Il2CppRGCTXDataType)3, 15798 },
	{ (Il2CppRGCTXDataType)3, 12671 },
	{ (Il2CppRGCTXDataType)3, 25378 },
	{ (Il2CppRGCTXDataType)2, 9876 },
	{ (Il2CppRGCTXDataType)3, 43627 },
	{ (Il2CppRGCTXDataType)3, 48649 },
	{ (Il2CppRGCTXDataType)2, 9930 },
	{ (Il2CppRGCTXDataType)3, 43811 },
	{ (Il2CppRGCTXDataType)3, 15788 },
	{ (Il2CppRGCTXDataType)3, 15789 },
	{ (Il2CppRGCTXDataType)3, 15800 },
	{ (Il2CppRGCTXDataType)3, 356 },
	{ (Il2CppRGCTXDataType)3, 355 },
	{ (Il2CppRGCTXDataType)2, 4403 },
	{ (Il2CppRGCTXDataType)2, 4698 },
	{ (Il2CppRGCTXDataType)3, 15790 },
	{ (Il2CppRGCTXDataType)2, 4440 },
	{ (Il2CppRGCTXDataType)2, 4738 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)2, 1079 },
	{ (Il2CppRGCTXDataType)2, 1216 },
	{ (Il2CppRGCTXDataType)3, 354 },
	{ (Il2CppRGCTXDataType)3, 357 },
	{ (Il2CppRGCTXDataType)3, 391 },
	{ (Il2CppRGCTXDataType)2, 4406 },
	{ (Il2CppRGCTXDataType)2, 4700 },
	{ (Il2CppRGCTXDataType)3, 393 },
	{ (Il2CppRGCTXDataType)2, 852 },
	{ (Il2CppRGCTXDataType)2, 1224 },
	{ (Il2CppRGCTXDataType)3, 390 },
	{ (Il2CppRGCTXDataType)3, 392 },
	{ (Il2CppRGCTXDataType)3, 221 },
	{ (Il2CppRGCTXDataType)2, 9106 },
	{ (Il2CppRGCTXDataType)3, 39776 },
	{ (Il2CppRGCTXDataType)2, 4396 },
	{ (Il2CppRGCTXDataType)2, 4693 },
	{ (Il2CppRGCTXDataType)3, 39777 },
	{ (Il2CppRGCTXDataType)3, 223 },
	{ (Il2CppRGCTXDataType)2, 845 },
	{ (Il2CppRGCTXDataType)2, 1179 },
	{ (Il2CppRGCTXDataType)3, 220 },
	{ (Il2CppRGCTXDataType)3, 222 },
	{ (Il2CppRGCTXDataType)3, 414 },
	{ (Il2CppRGCTXDataType)3, 415 },
	{ (Il2CppRGCTXDataType)2, 9110 },
	{ (Il2CppRGCTXDataType)3, 39781 },
	{ (Il2CppRGCTXDataType)2, 4409 },
	{ (Il2CppRGCTXDataType)2, 4702 },
	{ (Il2CppRGCTXDataType)3, 39782 },
	{ (Il2CppRGCTXDataType)3, 417 },
	{ (Il2CppRGCTXDataType)2, 854 },
	{ (Il2CppRGCTXDataType)2, 1227 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)3, 416 },
	{ (Il2CppRGCTXDataType)3, 313 },
	{ (Il2CppRGCTXDataType)2, 9108 },
	{ (Il2CppRGCTXDataType)3, 39778 },
	{ (Il2CppRGCTXDataType)2, 4399 },
	{ (Il2CppRGCTXDataType)2, 4695 },
	{ (Il2CppRGCTXDataType)3, 39779 },
	{ (Il2CppRGCTXDataType)3, 39780 },
	{ (Il2CppRGCTXDataType)3, 315 },
	{ (Il2CppRGCTXDataType)2, 847 },
	{ (Il2CppRGCTXDataType)2, 1205 },
	{ (Il2CppRGCTXDataType)3, 312 },
	{ (Il2CppRGCTXDataType)3, 314 },
	{ (Il2CppRGCTXDataType)3, 327 },
	{ (Il2CppRGCTXDataType)2, 849 },
	{ (Il2CppRGCTXDataType)3, 329 },
	{ (Il2CppRGCTXDataType)2, 1208 },
	{ (Il2CppRGCTXDataType)3, 326 },
	{ (Il2CppRGCTXDataType)3, 328 },
	{ (Il2CppRGCTXDataType)2, 10612 },
	{ (Il2CppRGCTXDataType)2, 2643 },
	{ (Il2CppRGCTXDataType)3, 14640 },
	{ (Il2CppRGCTXDataType)2, 3603 },
	{ (Il2CppRGCTXDataType)2, 11039 },
	{ (Il2CppRGCTXDataType)3, 39773 },
	{ (Il2CppRGCTXDataType)3, 39774 },
	{ (Il2CppRGCTXDataType)2, 4910 },
	{ (Il2CppRGCTXDataType)3, 39775 },
	{ (Il2CppRGCTXDataType)2, 759 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)3, 233 },
	{ (Il2CppRGCTXDataType)3, 34402 },
	{ (Il2CppRGCTXDataType)2, 8042 },
	{ (Il2CppRGCTXDataType)3, 34429 },
	{ (Il2CppRGCTXDataType)2, 1546 },
	{ (Il2CppRGCTXDataType)3, 2968 },
	{ (Il2CppRGCTXDataType)3, 34408 },
	{ (Il2CppRGCTXDataType)3, 12612 },
	{ (Il2CppRGCTXDataType)2, 886 },
	{ (Il2CppRGCTXDataType)3, 34403 },
	{ (Il2CppRGCTXDataType)2, 8037 },
	{ (Il2CppRGCTXDataType)3, 3395 },
	{ (Il2CppRGCTXDataType)2, 1568 },
	{ (Il2CppRGCTXDataType)2, 2827 },
	{ (Il2CppRGCTXDataType)3, 12630 },
	{ (Il2CppRGCTXDataType)3, 34404 },
	{ (Il2CppRGCTXDataType)3, 12607 },
	{ (Il2CppRGCTXDataType)3, 12608 },
	{ (Il2CppRGCTXDataType)3, 12606 },
	{ (Il2CppRGCTXDataType)3, 12609 },
	{ (Il2CppRGCTXDataType)2, 2823 },
	{ (Il2CppRGCTXDataType)2, 10670 },
	{ (Il2CppRGCTXDataType)3, 15786 },
	{ (Il2CppRGCTXDataType)3, 12611 },
	{ (Il2CppRGCTXDataType)2, 4233 },
	{ (Il2CppRGCTXDataType)3, 12610 },
	{ (Il2CppRGCTXDataType)2, 4085 },
	{ (Il2CppRGCTXDataType)2, 10606 },
	{ (Il2CppRGCTXDataType)2, 4355 },
	{ (Il2CppRGCTXDataType)2, 4661 },
	{ (Il2CppRGCTXDataType)3, 14619 },
	{ (Il2CppRGCTXDataType)2, 3596 },
	{ (Il2CppRGCTXDataType)3, 16672 },
	{ (Il2CppRGCTXDataType)3, 16673 },
	{ (Il2CppRGCTXDataType)3, 16678 },
	{ (Il2CppRGCTXDataType)2, 4904 },
	{ (Il2CppRGCTXDataType)3, 16675 },
	{ (Il2CppRGCTXDataType)3, 49817 },
	{ (Il2CppRGCTXDataType)2, 2831 },
	{ (Il2CppRGCTXDataType)3, 12660 },
	{ (Il2CppRGCTXDataType)1, 4224 },
	{ (Il2CppRGCTXDataType)2, 10618 },
	{ (Il2CppRGCTXDataType)3, 16674 },
	{ (Il2CppRGCTXDataType)1, 10618 },
	{ (Il2CppRGCTXDataType)1, 4904 },
	{ (Il2CppRGCTXDataType)2, 11037 },
	{ (Il2CppRGCTXDataType)2, 10618 },
	{ (Il2CppRGCTXDataType)2, 4361 },
	{ (Il2CppRGCTXDataType)2, 4665 },
	{ (Il2CppRGCTXDataType)3, 16679 },
	{ (Il2CppRGCTXDataType)3, 16677 },
	{ (Il2CppRGCTXDataType)3, 16676 },
	{ (Il2CppRGCTXDataType)2, 647 },
	{ (Il2CppRGCTXDataType)3, 12673 },
	{ (Il2CppRGCTXDataType)2, 865 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	205,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	68,
	s_rgctxIndices,
	311,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
