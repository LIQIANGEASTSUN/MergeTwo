using System;
using System.Collections.Generic;
using Framework.Core.DataBinding;
using Framework.Util.BlockingFlags;

namespace Framework.Core.Services
{
	public abstract class BlockingFlagsService<TEnum> : ServiceBase, IBlockingFlags<TEnum>, IDebugBlockingFlags where TEnum : Enum
	{
		[NonSerialized]
		public readonly IBlockingFlags<TEnum> _blockingFlags;

		public BindableProperty<bool> Enabled => null;

		public void RaiseBlockingFlag(TEnum flagToRaise)
		{
		}

		public void ClearBlockingFlag(TEnum flagToClear)
		{
		}

		public void ClearBlockingFlags(params TEnum[] flags)
		{
		}

		public bool HasBlockingFlag(TEnum flag)
		{
			return false;
		}

		List<string> IDebugBlockingFlags.GetBlockingFlags()
		{
			return null;
		}

		public BlockingFlagsService()
		{
		}
	}
}
