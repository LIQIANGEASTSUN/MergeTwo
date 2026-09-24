using Google.Protobuf;
using Google.Protobuf.Collections;
using cg.protokit.runtime;

namespace fat.rawdata
{
	public sealed class FrozenItemDetail : ProtoBaseProxy<FrozenItemDetail>, IRowIdentifier<int>
	{
		public static readonly string FullName;

		public int Id;

		public static readonly FieldCodec<string> _repeated_Tags_codec;

		public readonly RepeatedField<string> Tags;

		public int BaseProb;

		public int Diff;

		public static readonly FieldCodec<string> _repeated_energyRange_codec;

		public readonly RepeatedField<string> EnergyRange;

		public int ErgBase;

		public int ErgConsumeTimes;

		public int ErgDiffCoef;

		public static readonly FieldCodec<int> _repeated_frozenItemDiffRange_codec;

		public readonly RepeatedField<int> FrozenItemDiffRange;

		public static readonly FieldCodec<int> _repeated_itemDeadTime_codec;

		public readonly RepeatedField<int> ItemDeadTime;

		public static readonly FieldCodec<string> _repeated_itemDiffRange_codec;

		public readonly RepeatedField<string> ItemDiffRange;

		public int LvDiff;

		public int RateUpEnergy;

		public int RateUpProb;

		public int StepProb;

		public static readonly FieldCodec<int> _repeated_targetItemDiffRange_codec;

		public readonly RepeatedField<int> TargetItemDiffRange;

		public int TotalFrozenItem;

		public int XXX_RowIdentifier { get; set; }

		public FrozenItemDetail()
		{
		}

		public FrozenItemDetail(FrozenItemDetail other)
		{
		}

		public override FrozenItemDetail Clone()
		{
			return null;
		}

		public override void ProxyInternalMergeFrom(ref ParseContext input)
		{
		}
	}
}
