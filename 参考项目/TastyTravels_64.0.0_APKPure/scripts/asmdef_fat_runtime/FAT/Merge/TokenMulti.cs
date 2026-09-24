using System;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class TokenMulti
	{
		[NonSerialized]
		public int mActiveTokenMultiId;

		[NonSerialized]
		public int mTokenMultiLifeCountMilli;

		[NonSerialized]
		public int mTokenMultiDurationMilli;

		[NonSerialized]
		public MergeWorld mWorld;

		public int activeTokenMultiId => 0;

		public bool hasActiveTokenMulti => false;

		public int countdown => 0;

		public int tokenMultiDurationMilli => 0;

		public int tokenMultiLifeCountMilli => 0;

		public TokenMulti(MergeWorld world)
		{
		}

		public void Deserialize(fat.gamekitdata.Merge data)
		{
		}

		public void Serialize(fat.gamekitdata.Merge data)
		{
		}

		public void Update(int milli)
		{
		}

		public bool TryActivateTokenMulti(Item item)
		{
			return false;
		}

		public void ClearTokenMulti()
		{
		}

		public void _RemoveCurrentTokenMulti()
		{
		}

		public void _Reset()
		{
		}

		public bool _TryActivateNextTokenMulti()
		{
			return false;
		}
	}
}
