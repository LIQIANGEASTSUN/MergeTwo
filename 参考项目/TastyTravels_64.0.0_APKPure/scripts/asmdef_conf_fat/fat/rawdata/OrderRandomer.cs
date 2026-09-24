using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class OrderRandomer : ProtoBaseProxy<OrderRandomer>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int ActDiffGrpId;

		public static readonly FieldCodec<int> _repeated_activeItemId_codec;

		public readonly RepeatedField<int> ActiveItemId;

		public int ActiveLevel;

		public static readonly FieldCodec<int> _repeated_activeOrderId_codec;

		public readonly RepeatedField<int> ActiveOrderId;

		public int BoardId;

		public int CurveId;

		public int DisplayLevel;

		public int EasyActDiff;

		public int EasyPayDiff;

		public int HardActDiff;

		public int HardPayDiff;

		public bool IsApiOrder;

		public bool IsApiUse;

		public bool IsCtrled;

		public bool IsCurSet;

		public bool IsCurveCount;

		public bool IsEscapeQuest;

		public bool IsExtraScore;

		public bool IsFrozenItemOrder;

		public bool IsMysteryBags;

		public bool IsOrderBonus;

		public bool IsOrderClaw;

		public bool IsOrderQuest;

		public bool IsOrderSpin;

		public bool IsOrderThief;

		public bool IsPassive;

		public bool IsRelateBox;

		public bool IsSkipCategoryWt;

		public bool IsWishing;

		public int MinDiffRate;

		public string ModelVersion;

		public static readonly FieldCodec<int> _repeated_numWt_codec;

		public readonly RepeatedField<int> NumWt;

		public static readonly FieldCodec<string> _repeated_orderBoxInfo_codec;

		public readonly RepeatedField<string> OrderBoxInfo;

		public int PayDiffGrpId;

		public int RewardGrpId;

		public int RoleId;

		public int SafeActDiff;

		public int SafePayDiff;

		public static readonly FieldCodec<int> _repeated_shutdownItemId_codec;

		public readonly RepeatedField<int> ShutdownItemId;

		public int ShutdownLevel;

		public static readonly FieldCodec<int> _repeated_shutdownOrderId_codec;

		public readonly RepeatedField<int> ShutdownOrderId;

		public static readonly FieldCodec<int> _repeated_shutdownRandId_codec;

		public readonly RepeatedField<int> ShutdownRandId;

		public static readonly FieldCodec<int> _repeated_targetType_codec;

		public readonly RepeatedField<int> TargetType;

		public int XXX_RowIdentifier { get; set; }

		public OrderRandomer()
		{
		}

		public OrderRandomer(OrderRandomer other)
		{
		}

		public override OrderRandomer Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
