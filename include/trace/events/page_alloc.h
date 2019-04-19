#undef TRACE_SYSTEM
#define TRACE_SYSTEM page_alloc

#if !defined(_TRACE_PAGE_ALLOC_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_PAGE_ALLOC_H

#include <linux/types.h>
#include <linux/tracepoint.h>

TRACE_EVENT(alloc_pages_nodemask,
	TP_PROTO(int slow_count),

	TP_ARGS(slow_count),

	TP_STRUCT__entry(
		__field(		int,	slow_count	)
	),

	TP_fast_assign(
		__entry->slow_count	= slow_count;
	),

	TP_printk("page alloc, slowpath_count=%d",
		 __entry->slow_count)
);

#endif

#include <trace/define_trace.h>
