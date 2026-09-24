using System;
using Framework.Core.DataBinding;

namespace Framework.Util.BlockingFlags
{
	public interface IBlockingFlags<TBlockFlag> : IDebugBlockingFlags where TBlockFlag : Enum
	{
		BindableProperty<bool> Enabled { get; }

		void ClearBlockingFlag(TBlockFlag flagToClear);

		void RaiseBlockingFlag(TBlockFlag flagToRaise);

		void ClearBlockingFlags(params TBlockFlag[] flags);

		bool HasBlockingFlag(TBlockFlag flag);
	}
}
