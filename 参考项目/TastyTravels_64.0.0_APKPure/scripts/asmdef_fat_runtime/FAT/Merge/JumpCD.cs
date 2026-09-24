using System;
using fat.gamekitdata;

namespace FAT.Merge
{
	public class JumpCD
	{
		[NonSerialized]
		public int mActiveJumpCDId;

		[NonSerialized]
		public int mJumpCDLifeCountMilli;

		[NonSerialized]
		public int mJumpCDDurationMilli;

		[NonSerialized]
		public MergeWorld mWorld;

		public int activeJumpCDId => 0;

		public bool hasActiveJumpCD => false;

		public int countdown => 0;

		public int jumpCDDurationMilli => 0;

		public int jumpCDLifeCountMilli => 0;

		public JumpCD(MergeWorld world)
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

		public bool TryActivateJumpCD(Item item)
		{
			return false;
		}

		public void ClearJumpCD()
		{
		}

		public void _RemoveCurrentJumpCD()
		{
		}

		public void _Reset()
		{
		}

		public bool _TryActivateNextJumpCD()
		{
			return false;
		}
	}
}
