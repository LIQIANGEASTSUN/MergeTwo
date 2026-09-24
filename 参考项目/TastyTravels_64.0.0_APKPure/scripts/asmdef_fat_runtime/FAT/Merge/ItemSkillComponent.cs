using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class ItemSkillComponent : ItemComponentBase
	{
		[NonSerialized]
		public ComMergeSkill mConfig;

		[NonSerialized]
		public int mBuffCounter;

		[NonSerialized]
		public int mStackNum;

		public SkillType type => default(SkillType);

		public IList<int> param => null;

		public IList<int> param2 => null;

		public IList<int> param3 => null;

		public IList<string> descList => null;

		public int sandGlassSeconds => 0;

		public bool teslaActive => false;

		public int teslaTotalLife => 0;

		public int teslaLeftMilli => 0;

		public int stackCount => 0;

		public override void OnPostAttach()
		{
		}

		public int MaxStackNum()
		{
			return 0;
		}

		public int StackBy(int num)
		{
			return 0;
		}

		public bool CanStack()
		{
			return false;
		}

		public void MultiplyBy(int count)
		{
		}

		public override void OnSerialize(MergeItem itemData)
		{
		}

		public override void OnDeserialize(MergeItem itemData)
		{
		}

		public static bool Validate(ItemComConfig config)
		{
			return false;
		}

		public static string ProcessDesc(string baseString, SkillType skillType, IList<int> paramList)
		{
			return null;
		}

		public bool IsNeedTarget()
		{
			return false;
		}

		public override void OnPostMerge(Item src, Item dst)
		{
		}

		public bool CanUseForTarget(Item target, out ItemSkillState state)
		{
			state = default(ItemSkillState);
			return false;
		}

		public void _SelectMinAndPositive(ref long a, long b)
		{
		}

		public bool StackToTarget(Item target)
		{
			return false;
		}

		public bool Use()
		{
			return false;
		}

		public bool UseForTarget(Item target)
		{
			return false;
		}

		public override void OnUpdate(int dt)
		{
		}

		public void _SetupStack()
		{
		}

		public void _CheckDead()
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostAttach()
		{
		}

		public void _003C_003EiFixBaseProxy_OnSerialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnDeserialize(MergeItem P0)
		{
		}

		public void _003C_003EiFixBaseProxy_OnPostMerge(Item P0, Item P1)
		{
		}

		public void _003C_003EiFixBaseProxy_OnUpdate(int P0)
		{
		}
	}
}
