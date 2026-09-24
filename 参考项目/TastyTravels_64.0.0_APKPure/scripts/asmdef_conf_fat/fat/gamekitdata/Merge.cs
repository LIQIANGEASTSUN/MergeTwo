using Google.Protobuf;
using Google.Protobuf.Collections;

namespace fat.gamekitdata
{
	public sealed class Merge : ProtoBaseProxy<Merge>
	{
		public static readonly string FullName;

		public int WaitChest;

		public long WaitChestStart;

		public int LastItemId;

		public static readonly FieldCodec<int> _repeated_rewardList_codec;

		public readonly RepeatedField<int> RewardList;

		public int InvCapacity;

		public static readonly FieldCodec<int> _repeated_invItems_codec;

		public readonly RepeatedField<int> InvItems;

		public static readonly FieldCodec<MergeItem> _repeated_items_codec;

		public readonly RepeatedField<MergeItem> Items;

		public long LastActiveTime;

		public int BoardId;

		public int RewardListUnreadCount;

		public uint Clouds;

		public int ConfigVersion;

		public ulong DisableComs;

		public static readonly MapField<int, RandomOutputParam>.Codec _map_randomOutputForId_codec;

		public readonly MapField<int, RandomOutputParam> RandomOutputForId;

		public static readonly FieldCodec<MergeBag> _repeated_inventory_codec;

		public readonly RepeatedField<MergeBag> Inventory;

		public static readonly MapField<int, RandomParam>.Codec _map_randomParamForId_codec;

		public readonly MapField<int, RandomParam> RandomParamForId;

		public static readonly FieldCodec<int> _repeated_rewardListItemId_codec;

		public readonly RepeatedField<int> RewardListItemId;

		public OrderBox OrderBox;

		public JumpCD JumpCD;

		public TokenMulti TokenMulti;

		public static readonly FieldCodec<int> _repeated_lvAreaId_codec;

		public readonly RepeatedField<int> LvAreaId;

		public static readonly FieldCodec<StagingReward> _repeated_stagingRewards_codec;

		public readonly RepeatedField<StagingReward> StagingRewards;

		public GirdRewardInfo GirdRewardInfo;

		public Merge()
		{
		}

		public Merge(Merge other)
		{
		}

		public override Merge Clone()
		{
			return null;
		}

		public override void InternalWriteTo(ref WriteContext output)
		{
		}

		public override int ProxyCalculateSize()
		{
			return 0;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
