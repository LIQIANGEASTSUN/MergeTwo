using System;
using FAT.Merge;
using fat.rawdata;

namespace FAT
{
	public interface IActivityOrderGenerator
	{
		bool TryGeneratePassiveOrder(OrderRandomer cfg, IOrderHelper helper, MergeWorldTracer tracer, Func<OrderRandomer, OrderData> builder, out OrderData order);
	}
}
